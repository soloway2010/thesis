
/*
Predicates and functions needing SoS


*/






//Is v1 closer to origV than v2 is?
bool MeshIntersectionGeometry::isCloserOrig(const InputVertex &origV, const Vertex &v1V, const Vertex &v2V, TempVarsIsCloser &tempVars) const {
  const Point &orig = getCoordinates(origV);
  const Point &v1 = getCoordinates(v1V);
  const Point &v2 = getCoordinates(v2V);
  VertCoord *tempVertCoords = tempVars.tempVertCoords;

  //tempVars[2] will be the distance^2 between v1 and orig..
  tempVertCoords[2] =  0;
  for(int i=0;i<3;i++) {
    tempVertCoords[0] = v1[i];
    tempVertCoords[0] -= orig[i];

    tempVertCoords[1]= tempVertCoords[0];
    tempVertCoords[1]*=tempVertCoords[0];

    tempVertCoords[2]+= tempVertCoords[1];
  }

  //tempVars[3] will be the distance^2 between v2 and orig..
  tempVertCoords[3] =  0;
  for(int i=0;i<3;i++) {
    tempVertCoords[0] = v2[i];
    tempVertCoords[0] -= orig[i];

    tempVertCoords[1] = tempVertCoords[0];
    tempVertCoords[1]*= tempVertCoords[0];

    tempVertCoords[3]+= tempVertCoords[1];
  }
  //if the two vertices are at the same distance from origV, then we need SoS to decide which perturbed vertex is closer

  return tempVertCoords[2]<tempVertCoords[3];
}


bool MeshIntersectionGeometry::isAngleWith0GreaterOrig(const Vertex &origV, const Vertex &v1V, const Vertex &v2V, const int planeToProject, TempVarsIsAngleWith0Greater &tempVars) const {
  int xCoord = 0;
  int yCoord = 1;
  if(planeToProject==PLANE_Y0) {
    xCoord= 2;
    yCoord= 0;
  } else if(planeToProject==PLANE_X0) {
    xCoord= 1;
    yCoord= 2;    
  } 

  const Point &e10 = getCoordinates(origV);
  const Point &e11 = getCoordinates(v1V);

  //e20 = e10, since the two edges share the origin...
  const Point &e21 = getCoordinates(v2V);

  /*
  const VertCoord v1x = (e11[xCoord]-e10[xCoord]);
  const VertCoord v1y = (e11[yCoord]-e10[yCoord]);
  const VertCoord v2x = (e21[xCoord]-e20[xCoord]);
  const VertCoord v2y = (e21[yCoord]-e20[yCoord]);


  if(sgn(v1y)>=0 && sgn(v2y)<0) return true; //check if the two vectors are in different sides of the x axis...
  if(sgn(v1y)<0 && sgn(v2y)>=0) return false;
  if(sgn(v1y) ==0 && sgn(v2y)==0) { //both are on the x axis... 
    if(sgn(v1x)>=0) return true; //they both cannot have the same sign simultaneously (otherwise they would coincide..)
    else return false;
  }


  //is the cross product positive?
  const VertCoord component1 = v1x*v2y; //v1.x * v2.y 
  const VertCoord component2 = v2x*v1y; //v2.x*v1.y

  //the cross product is = component1-component2
  //is it positive?
  return (component1 > component2);*/
  VertCoord &v1x = tempVars.v1x;
  VertCoord &v1y = tempVars.v1y;
  VertCoord &v2x = tempVars.v2x;
  VertCoord &v2y = tempVars.v2y;
  v1x = e11[xCoord];
  v1x -= e10[xCoord];

  v1y = e11[yCoord];
  v1y -= e10[yCoord];

  v2x = e21[xCoord];
  v2x -= e10[xCoord];

  v2y = e21[yCoord];
  v2y -= e10[yCoord];

  const int sgnV1y = sgn(v1y);
  const int sgnV2y = sgn(v2y);

  if(sgnV1y>=0 && sgnV2y<0) return true; //check if the two vectors are in different sides of the x axis...
  if(sgnV1y<0 && sgnV2y>=0) return false;
  if(sgnV1y==0 && sgnV2y==0) { //both are on the x axis... 
    if(sgn(v1x)>=0) return true; //they both cannot have the same sign simultaneously (otherwise they would coincide..)
    else return false;
  }

  //is the cross product positive?
  v1x *= v2y; //const VertCoord component1 = v1x*v2y; //v1.x * v2.y 
  v2x *= v1y; //const VertCoord component2 = v2x*v1y; //v2.x*v1.y

  //the cross product is = component1-component2
  //is it positive?
  return v1x > v2x;//return (component1 > component2);
}


bool checkIfPointIsInProjection(const Point &p0, const Point &p1, const Point &p2, const Point &p, int whatPlaneProjectTrianglesTo) {
  if ( p==p0 || p==p1 || p==p2) return false; //is the point directly above a vertex of the triangle?

  //supposing the triangle will be projected to z=0...
  int coordY = 1;
  int coordX = 0;
  if(whatPlaneProjectTrianglesTo==PLANE_X0) { //if the triangle is projected to X=0 --> we need to use coordinates y,z (instead of x,y)
    coordX = 1;
    coordY = 2;
  } else if(whatPlaneProjectTrianglesTo ==PLANE_Y0) { //if the triangle is projected to Y=0 --> we need to use coordinates z,x (instead of x,y)
    coordX = 2;
    coordY = 0;
  }
  
  VertCoord denominator = ((p1[coordY] - p2[coordY])*(p0[coordX] - p2[coordX]) + (p2[coordX] - p1[coordX])*(p0[coordY] - p2[coordY]));
  if (denominator==0) { //TODO: check this.... degenerate triangles or vertical triangles (a segment never intersects a vertical triangle...)
    return false;
  }
  VertCoord a = ((p1[coordY] - p2[coordY])*(p[coordX] - p2[coordX]) + (p2[coordX] - p1[coordX])*(p[coordY] - p2[coordY])) / denominator;
  if ( a<0 || a >1) return false;
  
  VertCoord b = ((p2[coordY] - p0[coordY])*(p[coordX] - p2[coordX]) + (p0[coordX] - p2[coordX])*(p[coordY] - p2[coordY])) / denominator;

  if (b<0 || b>1) return false;
  VertCoord c = 1 - a - b;
 
  //if ( (fabs(a) <= EPS && (fabs(b) <= EPS) || fabs(c) <= EPS)  || (fabs(b) <= EPS && fabs(c) <= EPS) ) return false; // the point is one of the 3 triangle vertices...
  //if ( (fabs(a) <= EPS && fabs(b) <= EPS) || (fabs(a) <= EPS && fabs(c) <= EPS)  || (fabs(b) <= EPS && fabs(c) <= EPS) ) return false; // the point is one of the 3 triangle vertices...
  //return 0 <= a && a <= 1 && 0 <= b && b <= 1 && 0 <= c && c <= 1; //maybe we should perform some tests using EPSILON to avoid floating point errors...
  
  
  return 0 <= c && c <= 1; 
}


bool MeshIntersectionGeometry::isVertexInTriangleProjectionOrig(const Vertex &v1,const Vertex &v2, const Vertex &v3, const Vertex &queryPoint,int whatPlaneProjectTrianglesTo,TempVarsIsVertexTriangleProjection &tempVars) const {
  const Point &p = getCoordinates(queryPoint);
  const Point &p0 =  getCoordinates(v1);
  const Point &p1 =  getCoordinates(v2);
  const Point &p2 =  getCoordinates(v3);

  bool ans = checkIfPointIsInProjection(p0, p1, p2, p, whatPlaneProjectTrianglesTo);  
  
  return ans;
}

bool MeshIntersectionGeometry::isVertexConvexOrig(const Vertex &v1,const Vertex &queryVertex, const Vertex &v3,int whatPlaneProjectTrianglesTo,TempVarsIsVertexConvex &tempVars) const {
  const Point &vertex1 =  getCoordinates(v1);
  const Point &vertex2 =  getCoordinates(queryVertex);
  const Point &vertex3 =  getCoordinates(v3);

  //supposing the triangle will be projected to z=0...
  int coordY = 1;
  int coordX = 0;
  if(whatPlaneProjectTrianglesTo==PLANE_X0) { //if the triangle is projected to X=0 --> we need to use coordinates y,z (instead of x,y)
    coordX = 1;
    coordY = 2;
  } else if(whatPlaneProjectTrianglesTo ==PLANE_Y0) { //if the triangle is projected to Y=0 --> we need to use coordinates z,x (instead of x,y)
    coordX = 2;
    coordY = 0;
  }  

  /* //REMOVE....
  VertCoord twoArea = vertex1[coordX]*(vertex2[coordY]-vertex3[coordY]) +
                      vertex2[coordX]*(vertex3[coordY]-vertex1[coordY]) +
                      vertex3[coordX]*(vertex1[coordY]-vertex2[coordY]) ;

  listVerticesToProcess[vertexId].convex = twoArea<0;
  return listVerticesToProcess[vertexId].convex;
  */
  VertCoord *tempCoords  = tempVars.tempCoords;
  
  tempCoords[0] = vertex2[coordY]; //VertCoord twoArea = vertex1[coordX]*(vertex2[coordY]-vertex3[coordY]);
  tempCoords[0] -= vertex3[coordY];
  tempCoords[0] *= vertex1[coordX];

  tempCoords[1] = vertex3[coordY];
  tempCoords[1] -= vertex1[coordY];
  tempCoords[1] *= vertex2[coordX]; 
  tempCoords[0] += tempCoords[1]; //twoArea += vertex2[coordX]*(vertex3[coordY]-vertex1[coordY]);
  
  tempCoords[1] = vertex1[coordY];
  tempCoords[1] -= vertex2[coordY];
  tempCoords[1] *= vertex3[coordX]; 
  tempCoords[0] += tempCoords[1]; //twoArea += vertex3[coordX]*(vertex1[coordY]-vertex2[coordY]);
  

  return sgn(tempCoords[0])<0;
}





/*************** PinMesh Part... ****************/

bool MeshIntersectionGeometry::isVertexInTriangleProjectionOrig(const InputTriangle &t, const InputVertex &queryPoint,TempVarsIsVertexTriangleProjectionZ0 &tempVars) const {
  const Point &p0 = getCoordinates(*t.getInputVertex(0));
  const Point &p1 = getCoordinates(*t.getInputVertex(1));
  const Point &p2 = getCoordinates(*t.getInputVertex(2));

  const Point &p = getCoordinates(queryPoint);

  if ( p==p0 || p==p1 || p==p2)  {
    //cerr << "TODO: SoS vertex in triangle projection 1" << endl;
    return false;
    //return pointInTriangleProjSoS(p0, p1, p2, p) ;//return 0; // degenerate case --> SoS
  }
  
  VertCoord * tempVertCoords = tempVars.tempVertCoords;
  tempVertCoords[0] = p1[1];
  tempVertCoords[0] -= p2[1];
  tempVertCoords[1] = p0[0];
  tempVertCoords[1] -= p2[0];
  tempVertCoords[0] *= tempVertCoords[1];

  tempVertCoords[1]  = p2[0];
  tempVertCoords[1]  -= p1[0];
  tempVertCoords[2]  = p0[1];
  tempVertCoords[2]  -= p2[1];
  tempVertCoords[1] *= tempVertCoords[2];

  tempVertCoords[0] += tempVertCoords[1]; //denominator

  //VertCoord denominator = ((p1[1] - p2[1])*(p0[0] - p2[0]) + (p2[0] - p1[0])*(p0[1] - p2[1]));
  //assert(denominator == tempVertCoords[0]);

  if (sgn(tempVertCoords[0])==0) { //if (denominator==0) { //TODO: check this....
    //cerr << "TODO: SoS vertex in triangle projection 2" << endl;
    //Because of SoS no point should be below a vertical triangle....
    return false; //pointInTriangleProjSoS(p0, p1, p2, p) ; //SoS
    //return 0;
  }
  tempVertCoords[1] = p1[1];
  tempVertCoords[1] -= p2[1];

  tempVertCoords[2] = p[0];
  tempVertCoords[2] -= p2[0];

  tempVertCoords[1] *= tempVertCoords[2];

  tempVertCoords[3] = p2[0];
  tempVertCoords[3] -= p1[0];

  tempVertCoords[4] =  p[1];
  tempVertCoords[4] -= p2[1];

  tempVertCoords[3] *= tempVertCoords[4];

  tempVertCoords[1] += tempVertCoords[3];

  tempVertCoords[1] /= tempVertCoords[0]; // a

  //VertCoord a = ((p1[1] - p2[1])*(p[0] - p2[0]) + (p2[0] - p1[0])*(p[1] - p2[1])) / denominator;
  //assert(a == tempVertCoords[1]);

  if (sgn(tempVertCoords[1])<0 || tempVertCoords[1]>1) return false; //if ( a<0 || a >1) return false;
  
  tempVertCoords[2] = p2[1];
  tempVertCoords[2] -= p0[1];

  tempVertCoords[3] = p[0];
  tempVertCoords[3] -= p2[0];

  tempVertCoords[2] *= tempVertCoords[3];

  tempVertCoords[3] = p0[0];
  tempVertCoords[3] -= p2[0];

  tempVertCoords[4] = p[1];
  tempVertCoords[4] -= p2[1];

  tempVertCoords[3] *= tempVertCoords[4];
  tempVertCoords[2] += tempVertCoords[3];

  tempVertCoords[2] /= tempVertCoords[0]; //b
  //VertCoord b = ((p2[1] - p0[1])*(p[0] - p2[0]) + (p0[0] - p2[0])*(p[1] - p2[1])) / denominator;
  //assert(b == tempVertCoords[2]);

  if (sgn(tempVertCoords[2]) <0 || tempVertCoords[2]>1) return false;//if (b<0 || b>1) return false;
  //VertCoord c = 1 - a - b;
  tempVertCoords[3] = 1;
  tempVertCoords[3] -= tempVertCoords[1];
  tempVertCoords[3] -= tempVertCoords[2];


  if (sgn(tempVertCoords[3]) < 0 || tempVertCoords[3] >1) return false;

  //All coordinates are >=0 && <=1... so we have either a degenerate case or the point is in the triangle...
  if (sgn(tempVertCoords[3])==0 || sgn(tempVertCoords[2])==0 || sgn(tempVertCoords[1])==0) {
    //cerr << "TODO: SoS vertex in triangle projection 3" << endl;
    return false;
    //bool ans =  pointInTriangleProjSoS(p0, p1, p2, p) ; //SoS
    //return ans;
  }
  return 1;
}








//TODO: use pre-computed normals here...
//If all points from the same mesh are translated equally, we will not need SoS here
//because we will never chose an input triangle that is vertical 
bool MeshIntersectionGeometry::isTriangleNormalPointingPositiveZOrig(const InputTriangle &t, TempVarIsTriangleNormalPointingPositiveZ &tempVars) const {
    const Point &p0 = getCoordinates(*t.getInputVertex(0));
    const Point &p1 = getCoordinates(*t.getInputVertex(1));
    const Point &p2 = getCoordinates(*t.getInputVertex(2));

    VertCoord vec[2][3];  //First, lets compute the cross product between the vectors representing the triangle
    vec[0][0] = p1[0]-p0[0];
    vec[0][1] = p1[1]-p0[1];
    //vec[0][2] = triangle[1][2]-triangle[0][2];

    vec[1][0] = p2[0]-p0[0];
    vec[1][1] = p2[1]-p0[1];
    //vec[1][2] = triangle[2][2]-triangle[0][2];

    //lets compute the values A,B,C basing on the two 3D vectors vec[0] and vec[1]
    //  | i             j           k     |
    //  | vec[0][0]  vec[0][1]  vec[0][2] |
    //  | vec[1][0]  vec[1][1]  vec[1][2] |

    //VertCoord A = vec[0][1]*vec[1][2] - vec[0][2]*vec[1][1];
    //VertCoord B = vec[0][0]*vec[1][2] - vec[0][2]*vec[1][0];
    VertCoord C = vec[0][0]*vec[1][1] - vec[0][1]*vec[1][0];

    //Now we have the triangle normal (A,B,C) ... it points to the "positive" direction of the triangle (that is, it has the same orientation used to define
    //what is above and below the triangle according to the right hand rule)

    //If the dot product between the triangle's normal and the z+'s vector ( (0,0,1) ) is positive  --> the point is in the volume "below" the triangle
    // if it is 0 --> error (the triangle is vertical -- TODO treat this... maybe with SoS)
    //if is negative the point is in the volume above the triangle 
    
    //we actually only need to test if C is negative, 0 or positive...

    if (C==0) {
      cerr << "Error... vertical triangle (TODO: fix this with SoS)" << endl;
      exit(1);
    }
    return C>0; 
}




//TODO: use input point/triangle to correctly classify according to SoS in case of coincidences...
int MeshIntersectionGeometry::zCellGlobalFromProjectionOfPointOrig(const HeightPointInTriangleProjection &heightAbovePoint, const InputTriangle &triangle, const InputVertex &p, const Nested3DGridWrapper &uniformGrid, TempVarZCellGlobalFromProjectionOfPoint &tempVars) const {
  VertCoord &tempVar = tempVars.tempVertCoord;
  const Point &boundingBoxMin = boundingBoxTwoMeshesTogetter[0];

  tempVar = heightAbovePoint.height;
  tempVar -= boundingBoxMin[2];
  tempVar *= uniformGrid.cellScale2Levels;
  const int z  = convertToInt(tempVar,tempVars.tempVarsInt);

  return z;
}


int MeshIntersectionGeometry::zCellLevel1FromProjectionOfPointOrig(const HeightPointInTriangleProjection &heightAbovePoint, const InputTriangle &triangle, const InputVertex &p, const Nested3DGridWrapper &uniformGrid, TempVarZCellFromProjectionOfPoint &tempVars) const {
  VertCoord &tempVar = tempVars.tempVertCoord;
  const Point &boundingBoxMin = boundingBoxTwoMeshesTogetter[0];

  tempVar = heightAbovePoint.height;
  tempVar -= boundingBoxMin[2];
  tempVar *= uniformGrid.cellScaleLevel1;
  const int z  = convertToInt(tempVar,tempVars.tempVarsInt);

  return z;
}


//Given two triangles above a point, where the height above point is equal for both triangles, decide which one is lower according after SoS
//Make sure the two triangles are not the same... (this could happen, but we avoid that by checkin in PinMesh... )
const InputTriangle * MeshIntersectionGeometry::getBestTrianglePointInObjectSoSOrig(const InputTriangle *candidateTriangle,const InputTriangle *bestTriangle, const InputVertex &p,TempVarGetBestTrianglePointInObjectSoS &tempVars) const {
  cerr << "TODO: SoS get best triangle point in object SoS" << endl;
  return candidateTriangle;
}




