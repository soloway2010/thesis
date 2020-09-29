#include "sosPredicatesImpl.h"

int SosPredicatesImpl::orient2D_y0_111(const VertexFromIntersection &v0, const VertexFromIntersection &v1, const VertexFromIntersection &v2) const{


/*****************************************************/
const VertCoord &v0t0x = getCoordinates( *(v0.triangle.getInputVertex(0)) )[0];
const VertCoord &v0t1x = getCoordinates( *(v0.triangle.getInputVertex(1)) )[0];
const VertCoord &v0t2x = getCoordinates( *(v0.triangle.getInputVertex(2)) )[0];
const VertCoord &v0r0x = getCoordinates(v0.edge[0])[0];
const VertCoord &v0r1x = getCoordinates(v0.edge[1])[0];
const VertCoord &v0t0y = getCoordinates( *(v0.triangle.getInputVertex(0)) )[1];
const VertCoord &v0t1y = getCoordinates( *(v0.triangle.getInputVertex(1)) )[1];
const VertCoord &v0t2y = getCoordinates( *(v0.triangle.getInputVertex(2)) )[1];
const VertCoord &v0r0y = getCoordinates(v0.edge[0])[1];
const VertCoord &v0r1y = getCoordinates(v0.edge[1])[1];
const VertCoord &v0t0z = getCoordinates( *(v0.triangle.getInputVertex(0)) )[2];
const VertCoord &v0t1z = getCoordinates( *(v0.triangle.getInputVertex(1)) )[2];
const VertCoord &v0t2z = getCoordinates( *(v0.triangle.getInputVertex(2)) )[2];
const VertCoord &v0r0z = getCoordinates(v0.edge[0])[2];
const VertCoord &v0r1z = getCoordinates(v0.edge[1])[2];

const VertCoord &v1t0x = getCoordinates( *(v1.triangle.getInputVertex(0)) )[0];
const VertCoord &v1t1x = getCoordinates( *(v1.triangle.getInputVertex(1)) )[0];
const VertCoord &v1t2x = getCoordinates( *(v1.triangle.getInputVertex(2)) )[0];
const VertCoord &v1r0x = getCoordinates(v1.edge[0])[0];
const VertCoord &v1r1x = getCoordinates(v1.edge[1])[0];
const VertCoord &v1t0y = getCoordinates( *(v1.triangle.getInputVertex(0)) )[1];
const VertCoord &v1t1y = getCoordinates( *(v1.triangle.getInputVertex(1)) )[1];
const VertCoord &v1t2y = getCoordinates( *(v1.triangle.getInputVertex(2)) )[1];
const VertCoord &v1r0y = getCoordinates(v1.edge[0])[1];
const VertCoord &v1r1y = getCoordinates(v1.edge[1])[1];
const VertCoord &v1t0z = getCoordinates( *(v1.triangle.getInputVertex(0)) )[2];
const VertCoord &v1t1z = getCoordinates( *(v1.triangle.getInputVertex(1)) )[2];
const VertCoord &v1t2z = getCoordinates( *(v1.triangle.getInputVertex(2)) )[2];
const VertCoord &v1r0z = getCoordinates(v1.edge[0])[2];
const VertCoord &v1r1z = getCoordinates(v1.edge[1])[2];

const VertCoord &v2t0x = getCoordinates( *(v2.triangle.getInputVertex(0)) )[0];
const VertCoord &v2t1x = getCoordinates( *(v2.triangle.getInputVertex(1)) )[0];
const VertCoord &v2t2x = getCoordinates( *(v2.triangle.getInputVertex(2)) )[0];
const VertCoord &v2r0x = getCoordinates(v2.edge[0])[0];
const VertCoord &v2r1x = getCoordinates(v2.edge[1])[0];
const VertCoord &v2t0y = getCoordinates( *(v2.triangle.getInputVertex(0)) )[1];
const VertCoord &v2t1y = getCoordinates( *(v2.triangle.getInputVertex(1)) )[1];
const VertCoord &v2t2y = getCoordinates( *(v2.triangle.getInputVertex(2)) )[1];
const VertCoord &v2r0y = getCoordinates(v2.edge[0])[1];
const VertCoord &v2r1y = getCoordinates(v2.edge[1])[1];
const VertCoord &v2t0z = getCoordinates( *(v2.triangle.getInputVertex(0)) )[2];
const VertCoord &v2t1z = getCoordinates( *(v2.triangle.getInputVertex(1)) )[2];
const VertCoord &v2t2z = getCoordinates( *(v2.triangle.getInputVertex(2)) )[2];
const VertCoord &v2r0z = getCoordinates(v2.edge[0])[2];
const VertCoord &v2r1z = getCoordinates(v2.edge[1])[2];

/*****************************************************/
VertCoord coeffV0ePower0x = (v0r0z*v0r1x*(-(v0t1y*v0t2x) + v0t0y*(-v0t1x + v0t2x) + v0t0x*(v0t1y - v0t2y) + v0t1x*v0t2y) + v0r1x*(v0t0z*v0t1y*v0t2x - v0t0y*v0t1z*v0t2x - v0t0z*v0t1x*v0t2y + v0t0x*v0t1z*v0t2y + v0t0y*v0t1x*v0t2z - v0t0x*v0t1y*v0t2z + v0r0y*(-(v0t0x*v0t1z) + v0t0z*(v0t1x - v0t2x) + v0t1z*v0t2x + v0t0x*v0t2z - v0t1x*v0t2z)) + v0r0x*(-(v0t0z*v0t1y*v0t2x) + v0t0y*v0t1z*v0t2x + v0t0z*v0t1x*v0t2y - v0t0x*v0t1z*v0t2y + v0r1z*(-(v0t0x*v0t1y) + v0t0y*(v0t1x - v0t2x) + v0t1y*v0t2x + v0t0x*v0t2y - v0t1x*v0t2y) - v0t0y*v0t1x*v0t2z + v0t0x*v0t1y*v0t2z + v0r1y*(-(v0t0z*v0t1x) + v0t0x*v0t1z + v0t0z*v0t2x - v0t1z*v0t2x - v0t0x*v0t2z + v0t1x*v0t2z)))/(v0r0y*v0t0z*v0t1x - v0r1y*v0t0z*v0t1x - v0r0x*v0t0z*v0t1y + v0r1x*v0t0z*v0t1y - v0r0y*v0t0x*v0t1z + v0r1y*v0t0x*v0t1z + v0r0x*v0t0y*v0t1z - v0r1x*v0t0y*v0t1z - v0r0y*v0t0z*v0t2x + v0r1y*v0t0z*v0t2x + v0r0y*v0t1z*v0t2x - v0r1y*v0t1z*v0t2x + v0r0x*v0t0z*v0t2y - v0r1x*v0t0z*v0t2y - v0r0x*v0t1z*v0t2y + v0r1x*v0t1z*v0t2y + v0r1z*(v0t0y*v0t1x - v0t0x*v0t1y - v0t0y*v0t2x + v0t1y*v0t2x + v0t0x*v0t2y - v0t1x*v0t2y) + v0r0z*(v0t0x*v0t1y - v0t1y*v0t2x + v0t0y*(-v0t1x + v0t2x) - v0t0x*v0t2y + v0t1x*v0t2y) + v0r0y*v0t0x*v0t2z - v0r1y*v0t0x*v0t2z - v0r0x*v0t0y*v0t2z + v0r1x*v0t0y*v0t2z - v0r0y*v0t1x*v0t2z + v0r1y*v0t1x*v0t2z + v0r0x*v0t1y*v0t2z - v0r1x*v0t1y*v0t2z);
cerr << "coeffV0ePower0x : "<<  coeffV0ePower0x<< endl;

VertCoord coeffV0ePower1x = ((v0r0x - v0r1x)*(v0t0z*(v0t1y - v0t2y) + v0t1z*v0t2y - v0t1y*v0t2z + v0t0y*(-v0t1z + v0t2z)))/(-(v0r0y*v0t0z*v0t1x) + v0r1y*v0t0z*v0t1x + v0r0x*v0t0z*v0t1y - v0r1x*v0t0z*v0t1y + v0r0y*v0t0x*v0t1z - v0r1y*v0t0x*v0t1z - v0r0x*v0t0y*v0t1z + v0r1x*v0t0y*v0t1z + v0r0y*v0t0z*v0t2x - v0r1y*v0t0z*v0t2x - v0r0y*v0t1z*v0t2x + v0r1y*v0t1z*v0t2x - v0r0x*v0t0z*v0t2y + v0r1x*v0t0z*v0t2y + v0r0x*v0t1z*v0t2y - v0r1x*v0t1z*v0t2y + v0r0z*(-(v0t0x*v0t1y) + v0t0y*(v0t1x - v0t2x) + v0t1y*v0t2x + v0t0x*v0t2y - v0t1x*v0t2y) + v0r1z*(-(v0t0y*v0t1x) + v0t0x*v0t1y + v0t0y*v0t2x - v0t1y*v0t2x - v0t0x*v0t2y + v0t1x*v0t2y) - v0r0y*v0t0x*v0t2z + v0r1y*v0t0x*v0t2z + v0r0x*v0t0y*v0t2z - v0r1x*v0t0y*v0t2z + v0r0y*v0t1x*v0t2z - v0r1y*v0t1x*v0t2z - v0r0x*v0t1y*v0t2z + v0r1x*v0t1y*v0t2z);
cerr << "coeffV0ePower1x : "<<  coeffV0ePower1x<< endl;

VertCoord coeffV0ePower2x = ((v0r0x - v0r1x)*(v0t0z*(v0t1x - v0t2x) + v0t1z*v0t2x - v0t1x*v0t2z + v0t0x*(-v0t1z + v0t2z)))/(v0r0y*v0t0z*v0t1x - v0r1y*v0t0z*v0t1x - v0r0x*v0t0z*v0t1y + v0r1x*v0t0z*v0t1y - v0r0y*v0t0x*v0t1z + v0r1y*v0t0x*v0t1z + v0r0x*v0t0y*v0t1z - v0r1x*v0t0y*v0t1z - v0r0y*v0t0z*v0t2x + v0r1y*v0t0z*v0t2x + v0r0y*v0t1z*v0t2x - v0r1y*v0t1z*v0t2x + v0r0x*v0t0z*v0t2y - v0r1x*v0t0z*v0t2y - v0r0x*v0t1z*v0t2y + v0r1x*v0t1z*v0t2y + v0r1z*(v0t0y*v0t1x - v0t0x*v0t1y - v0t0y*v0t2x + v0t1y*v0t2x + v0t0x*v0t2y - v0t1x*v0t2y) + v0r0z*(v0t0x*v0t1y - v0t1y*v0t2x + v0t0y*(-v0t1x + v0t2x) - v0t0x*v0t2y + v0t1x*v0t2y) + v0r0y*v0t0x*v0t2z - v0r1y*v0t0x*v0t2z - v0r0x*v0t0y*v0t2z + v0r1x*v0t0y*v0t2z - v0r0y*v0t1x*v0t2z + v0r1y*v0t1x*v0t2z + v0r0x*v0t1y*v0t2z - v0r1x*v0t1y*v0t2z);
cerr << "coeffV0ePower2x : "<<  coeffV0ePower2x<< endl;

VertCoord coeffV0ePower3x = -(((v0r0x - v0r1x)*(v0t0y*(v0t1x - v0t2x) + v0t1y*v0t2x - v0t1x*v0t2y + v0t0x*(-v0t1y + v0t2y)))/(v0r0y*v0t0z*v0t1x - v0r1y*v0t0z*v0t1x - v0r0x*v0t0z*v0t1y + v0r1x*v0t0z*v0t1y - v0r0y*v0t0x*v0t1z + v0r1y*v0t0x*v0t1z + v0r0x*v0t0y*v0t1z - v0r1x*v0t0y*v0t1z - v0r0y*v0t0z*v0t2x + v0r1y*v0t0z*v0t2x + v0r0y*v0t1z*v0t2x - v0r1y*v0t1z*v0t2x + v0r0x*v0t0z*v0t2y - v0r1x*v0t0z*v0t2y - v0r0x*v0t1z*v0t2y + v0r1x*v0t1z*v0t2y + v0r1z*(v0t0y*v0t1x - v0t0x*v0t1y - v0t0y*v0t2x + v0t1y*v0t2x + v0t0x*v0t2y - v0t1x*v0t2y) + v0r0z*(v0t0x*v0t1y - v0t1y*v0t2x + v0t0y*(-v0t1x + v0t2x) - v0t0x*v0t2y + v0t1x*v0t2y) + v0r0y*v0t0x*v0t2z - v0r1y*v0t0x*v0t2z - v0r0x*v0t0y*v0t2z + v0r1x*v0t0y*v0t2z - v0r0y*v0t1x*v0t2z + v0r1y*v0t1x*v0t2z + v0r0x*v0t1y*v0t2z - v0r1x*v0t1y*v0t2z));
cerr << "coeffV0ePower3x : "<<  coeffV0ePower3x<< endl;

VertCoord coeffV0ePower0y = (v0r0z*v0r1y*(-(v0t1y*v0t2x) + v0t0y*(-v0t1x + v0t2x) + v0t0x*(v0t1y - v0t2y) + v0t1x*v0t2y) + v0r0y*(-(v0t0z*v0t1y*v0t2x) + v0t0y*v0t1z*v0t2x + v0t0z*v0t1x*v0t2y - v0t0x*v0t1z*v0t2y + v0r1z*(-(v0t0x*v0t1y) + v0t0y*(v0t1x - v0t2x) + v0t1y*v0t2x + v0t0x*v0t2y - v0t1x*v0t2y) - v0t0y*v0t1x*v0t2z + v0t0x*v0t1y*v0t2z + v0r1x*(v0t0z*v0t1y - v0t0y*v0t1z - v0t0z*v0t2y + v0t1z*v0t2y + v0t0y*v0t2z - v0t1y*v0t2z)) + v0r1y*(v0t0z*v0t1y*v0t2x - v0t0y*v0t1z*v0t2x - v0t0z*v0t1x*v0t2y + v0t0x*v0t1z*v0t2y + v0t0y*v0t1x*v0t2z - v0t0x*v0t1y*v0t2z + v0r0x*(v0t0y*v0t1z - v0t1z*v0t2y + v0t0z*(-v0t1y + v0t2y) - v0t0y*v0t2z + v0t1y*v0t2z)))/(v0r0y*v0t0z*v0t1x - v0r1y*v0t0z*v0t1x - v0r0x*v0t0z*v0t1y + v0r1x*v0t0z*v0t1y - v0r0y*v0t0x*v0t1z + v0r1y*v0t0x*v0t1z + v0r0x*v0t0y*v0t1z - v0r1x*v0t0y*v0t1z - v0r0y*v0t0z*v0t2x + v0r1y*v0t0z*v0t2x + v0r0y*v0t1z*v0t2x - v0r1y*v0t1z*v0t2x + v0r0x*v0t0z*v0t2y - v0r1x*v0t0z*v0t2y - v0r0x*v0t1z*v0t2y + v0r1x*v0t1z*v0t2y + v0r1z*(v0t0y*v0t1x - v0t0x*v0t1y - v0t0y*v0t2x + v0t1y*v0t2x + v0t0x*v0t2y - v0t1x*v0t2y) + v0r0z*(v0t0x*v0t1y - v0t1y*v0t2x + v0t0y*(-v0t1x + v0t2x) - v0t0x*v0t2y + v0t1x*v0t2y) + v0r0y*v0t0x*v0t2z - v0r1y*v0t0x*v0t2z - v0r0x*v0t0y*v0t2z + v0r1x*v0t0y*v0t2z - v0r0y*v0t1x*v0t2z + v0r1y*v0t1x*v0t2z + v0r0x*v0t1y*v0t2z - v0r1x*v0t1y*v0t2z);
cerr << "coeffV0ePower0y : "<<  coeffV0ePower0y<< endl;

VertCoord coeffV0ePower1y = -(((v0r0y - v0r1y)*(v0t0z*(v0t1y - v0t2y) + v0t1z*v0t2y - v0t1y*v0t2z + v0t0y*(-v0t1z + v0t2z)))/(v0r0y*v0t0z*v0t1x - v0r1y*v0t0z*v0t1x - v0r0x*v0t0z*v0t1y + v0r1x*v0t0z*v0t1y - v0r0y*v0t0x*v0t1z + v0r1y*v0t0x*v0t1z + v0r0x*v0t0y*v0t1z - v0r1x*v0t0y*v0t1z - v0r0y*v0t0z*v0t2x + v0r1y*v0t0z*v0t2x + v0r0y*v0t1z*v0t2x - v0r1y*v0t1z*v0t2x + v0r0x*v0t0z*v0t2y - v0r1x*v0t0z*v0t2y - v0r0x*v0t1z*v0t2y + v0r1x*v0t1z*v0t2y + v0r1z*(v0t0y*v0t1x - v0t0x*v0t1y - v0t0y*v0t2x + v0t1y*v0t2x + v0t0x*v0t2y - v0t1x*v0t2y) + v0r0z*(v0t0x*v0t1y - v0t1y*v0t2x + v0t0y*(-v0t1x + v0t2x) - v0t0x*v0t2y + v0t1x*v0t2y) + v0r0y*v0t0x*v0t2z - v0r1y*v0t0x*v0t2z - v0r0x*v0t0y*v0t2z + v0r1x*v0t0y*v0t2z - v0r0y*v0t1x*v0t2z + v0r1y*v0t1x*v0t2z + v0r0x*v0t1y*v0t2z - v0r1x*v0t1y*v0t2z));
cerr << "coeffV0ePower1y : "<<  coeffV0ePower1y<< endl;

VertCoord coeffV0ePower2y = ((v0r0y - v0r1y)*(v0t0z*(v0t1x - v0t2x) + v0t1z*v0t2x - v0t1x*v0t2z + v0t0x*(-v0t1z + v0t2z)))/(v0r0y*v0t0z*v0t1x - v0r1y*v0t0z*v0t1x - v0r0x*v0t0z*v0t1y + v0r1x*v0t0z*v0t1y - v0r0y*v0t0x*v0t1z + v0r1y*v0t0x*v0t1z + v0r0x*v0t0y*v0t1z - v0r1x*v0t0y*v0t1z - v0r0y*v0t0z*v0t2x + v0r1y*v0t0z*v0t2x + v0r0y*v0t1z*v0t2x - v0r1y*v0t1z*v0t2x + v0r0x*v0t0z*v0t2y - v0r1x*v0t0z*v0t2y - v0r0x*v0t1z*v0t2y + v0r1x*v0t1z*v0t2y + v0r1z*(v0t0y*v0t1x - v0t0x*v0t1y - v0t0y*v0t2x + v0t1y*v0t2x + v0t0x*v0t2y - v0t1x*v0t2y) + v0r0z*(v0t0x*v0t1y - v0t1y*v0t2x + v0t0y*(-v0t1x + v0t2x) - v0t0x*v0t2y + v0t1x*v0t2y) + v0r0y*v0t0x*v0t2z - v0r1y*v0t0x*v0t2z - v0r0x*v0t0y*v0t2z + v0r1x*v0t0y*v0t2z - v0r0y*v0t1x*v0t2z + v0r1y*v0t1x*v0t2z + v0r0x*v0t1y*v0t2z - v0r1x*v0t1y*v0t2z);
cerr << "coeffV0ePower2y : "<<  coeffV0ePower2y<< endl;

VertCoord coeffV0ePower3y = -(((v0r0y - v0r1y)*(v0t0y*(v0t1x - v0t2x) + v0t1y*v0t2x - v0t1x*v0t2y + v0t0x*(-v0t1y + v0t2y)))/(v0r0y*v0t0z*v0t1x - v0r1y*v0t0z*v0t1x - v0r0x*v0t0z*v0t1y + v0r1x*v0t0z*v0t1y - v0r0y*v0t0x*v0t1z + v0r1y*v0t0x*v0t1z + v0r0x*v0t0y*v0t1z - v0r1x*v0t0y*v0t1z - v0r0y*v0t0z*v0t2x + v0r1y*v0t0z*v0t2x + v0r0y*v0t1z*v0t2x - v0r1y*v0t1z*v0t2x + v0r0x*v0t0z*v0t2y - v0r1x*v0t0z*v0t2y - v0r0x*v0t1z*v0t2y + v0r1x*v0t1z*v0t2y + v0r1z*(v0t0y*v0t1x - v0t0x*v0t1y - v0t0y*v0t2x + v0t1y*v0t2x + v0t0x*v0t2y - v0t1x*v0t2y) + v0r0z*(v0t0x*v0t1y - v0t1y*v0t2x + v0t0y*(-v0t1x + v0t2x) - v0t0x*v0t2y + v0t1x*v0t2y) + v0r0y*v0t0x*v0t2z - v0r1y*v0t0x*v0t2z - v0r0x*v0t0y*v0t2z + v0r1x*v0t0y*v0t2z - v0r0y*v0t1x*v0t2z + v0r1y*v0t1x*v0t2z + v0r0x*v0t1y*v0t2z - v0r1x*v0t1y*v0t2z));
cerr << "coeffV0ePower3y : "<<  coeffV0ePower3y<< endl;

VertCoord coeffV0ePower0z = (v0r0z*(-(v0t0z*v0t1y*v0t2x) + v0t0y*v0t1z*v0t2x + v0t0z*v0t1x*v0t2y - v0t0x*v0t1z*v0t2y - v0t0y*v0t1x*v0t2z + v0t0x*v0t1y*v0t2z + v0r1y*(v0t0x*v0t1z - v0t1z*v0t2x + v0t0z*(-v0t1x + v0t2x) - v0t0x*v0t2z + v0t1x*v0t2z) + v0r1x*(v0t0z*v0t1y - v0t0y*v0t1z - v0t0z*v0t2y + v0t1z*v0t2y + v0t0y*v0t2z - v0t1y*v0t2z)) + v0r1z*(v0t0z*v0t1y*v0t2x - v0t0y*v0t1z*v0t2x - v0t0z*v0t1x*v0t2y + v0t0x*v0t1z*v0t2y + v0t0y*v0t1x*v0t2z - v0t0x*v0t1y*v0t2z + v0r0y*(-(v0t0x*v0t1z) + v0t0z*(v0t1x - v0t2x) + v0t1z*v0t2x + v0t0x*v0t2z - v0t1x*v0t2z) + v0r0x*(-(v0t0z*v0t1y) + v0t0y*v0t1z + v0t0z*v0t2y - v0t1z*v0t2y - v0t0y*v0t2z + v0t1y*v0t2z)))/(v0r0y*v0t0z*v0t1x - v0r1y*v0t0z*v0t1x - v0r0x*v0t0z*v0t1y + v0r1x*v0t0z*v0t1y - v0r0y*v0t0x*v0t1z + v0r1y*v0t0x*v0t1z + v0r0x*v0t0y*v0t1z - v0r1x*v0t0y*v0t1z - v0r0y*v0t0z*v0t2x + v0r1y*v0t0z*v0t2x + v0r0y*v0t1z*v0t2x - v0r1y*v0t1z*v0t2x + v0r0x*v0t0z*v0t2y - v0r1x*v0t0z*v0t2y - v0r0x*v0t1z*v0t2y + v0r1x*v0t1z*v0t2y + v0r1z*(v0t0y*v0t1x - v0t0x*v0t1y - v0t0y*v0t2x + v0t1y*v0t2x + v0t0x*v0t2y - v0t1x*v0t2y) + v0r0z*(v0t0x*v0t1y - v0t1y*v0t2x + v0t0y*(-v0t1x + v0t2x) - v0t0x*v0t2y + v0t1x*v0t2y) + v0r0y*v0t0x*v0t2z - v0r1y*v0t0x*v0t2z - v0r0x*v0t0y*v0t2z + v0r1x*v0t0y*v0t2z - v0r0y*v0t1x*v0t2z + v0r1y*v0t1x*v0t2z + v0r0x*v0t1y*v0t2z - v0r1x*v0t1y*v0t2z);
cerr << "coeffV0ePower0z : "<<  coeffV0ePower0z<< endl;

VertCoord coeffV0ePower1z = ((v0r0z - v0r1z)*(v0t0z*(v0t1y - v0t2y) + v0t1z*v0t2y - v0t1y*v0t2z + v0t0y*(-v0t1z + v0t2z)))/(-(v0r0y*v0t0z*v0t1x) + v0r1y*v0t0z*v0t1x + v0r0x*v0t0z*v0t1y - v0r1x*v0t0z*v0t1y + v0r0y*v0t0x*v0t1z - v0r1y*v0t0x*v0t1z - v0r0x*v0t0y*v0t1z + v0r1x*v0t0y*v0t1z + v0r0y*v0t0z*v0t2x - v0r1y*v0t0z*v0t2x - v0r0y*v0t1z*v0t2x + v0r1y*v0t1z*v0t2x - v0r0x*v0t0z*v0t2y + v0r1x*v0t0z*v0t2y + v0r0x*v0t1z*v0t2y - v0r1x*v0t1z*v0t2y + v0r0z*(-(v0t0x*v0t1y) + v0t0y*(v0t1x - v0t2x) + v0t1y*v0t2x + v0t0x*v0t2y - v0t1x*v0t2y) + v0r1z*(-(v0t0y*v0t1x) + v0t0x*v0t1y + v0t0y*v0t2x - v0t1y*v0t2x - v0t0x*v0t2y + v0t1x*v0t2y) - v0r0y*v0t0x*v0t2z + v0r1y*v0t0x*v0t2z + v0r0x*v0t0y*v0t2z - v0r1x*v0t0y*v0t2z + v0r0y*v0t1x*v0t2z - v0r1y*v0t1x*v0t2z - v0r0x*v0t1y*v0t2z + v0r1x*v0t1y*v0t2z);
cerr << "coeffV0ePower1z : "<<  coeffV0ePower1z<< endl;

VertCoord coeffV0ePower2z = ((v0r0z - v0r1z)*(v0t0z*(v0t1x - v0t2x) + v0t1z*v0t2x - v0t1x*v0t2z + v0t0x*(-v0t1z + v0t2z)))/(v0r0y*v0t0z*v0t1x - v0r1y*v0t0z*v0t1x - v0r0x*v0t0z*v0t1y + v0r1x*v0t0z*v0t1y - v0r0y*v0t0x*v0t1z + v0r1y*v0t0x*v0t1z + v0r0x*v0t0y*v0t1z - v0r1x*v0t0y*v0t1z - v0r0y*v0t0z*v0t2x + v0r1y*v0t0z*v0t2x + v0r0y*v0t1z*v0t2x - v0r1y*v0t1z*v0t2x + v0r0x*v0t0z*v0t2y - v0r1x*v0t0z*v0t2y - v0r0x*v0t1z*v0t2y + v0r1x*v0t1z*v0t2y + v0r1z*(v0t0y*v0t1x - v0t0x*v0t1y - v0t0y*v0t2x + v0t1y*v0t2x + v0t0x*v0t2y - v0t1x*v0t2y) + v0r0z*(v0t0x*v0t1y - v0t1y*v0t2x + v0t0y*(-v0t1x + v0t2x) - v0t0x*v0t2y + v0t1x*v0t2y) + v0r0y*v0t0x*v0t2z - v0r1y*v0t0x*v0t2z - v0r0x*v0t0y*v0t2z + v0r1x*v0t0y*v0t2z - v0r0y*v0t1x*v0t2z + v0r1y*v0t1x*v0t2z + v0r0x*v0t1y*v0t2z - v0r1x*v0t1y*v0t2z);
cerr << "coeffV0ePower2z : "<<  coeffV0ePower2z<< endl;

VertCoord coeffV0ePower3z = ((v0r0z - v0r1z)*(v0t0y*(v0t1x - v0t2x) + v0t1y*v0t2x - v0t1x*v0t2y + v0t0x*(-v0t1y + v0t2y)))/(-(v0r0y*v0t0z*v0t1x) + v0r1y*v0t0z*v0t1x + v0r0x*v0t0z*v0t1y - v0r1x*v0t0z*v0t1y + v0r0y*v0t0x*v0t1z - v0r1y*v0t0x*v0t1z - v0r0x*v0t0y*v0t1z + v0r1x*v0t0y*v0t1z + v0r0y*v0t0z*v0t2x - v0r1y*v0t0z*v0t2x - v0r0y*v0t1z*v0t2x + v0r1y*v0t1z*v0t2x - v0r0x*v0t0z*v0t2y + v0r1x*v0t0z*v0t2y + v0r0x*v0t1z*v0t2y - v0r1x*v0t1z*v0t2y + v0r0z*(-(v0t0x*v0t1y) + v0t0y*(v0t1x - v0t2x) + v0t1y*v0t2x + v0t0x*v0t2y - v0t1x*v0t2y) + v0r1z*(-(v0t0y*v0t1x) + v0t0x*v0t1y + v0t0y*v0t2x - v0t1y*v0t2x - v0t0x*v0t2y + v0t1x*v0t2y) - v0r0y*v0t0x*v0t2z + v0r1y*v0t0x*v0t2z + v0r0x*v0t0y*v0t2z - v0r1x*v0t0y*v0t2z + v0r0y*v0t1x*v0t2z - v0r1y*v0t1x*v0t2z - v0r0x*v0t1y*v0t2z + v0r1x*v0t1y*v0t2z);
cerr << "coeffV0ePower3z : "<<  coeffV0ePower3z<< endl;



VertCoord coeffV1ePower0x = (v1r0z*v1r1x*(-(v1t1y*v1t2x) + v1t0y*(-v1t1x + v1t2x) + v1t0x*(v1t1y - v1t2y) + v1t1x*v1t2y) + v1r1x*(v1t0z*v1t1y*v1t2x - v1t0y*v1t1z*v1t2x - v1t0z*v1t1x*v1t2y + v1t0x*v1t1z*v1t2y + v1t0y*v1t1x*v1t2z - v1t0x*v1t1y*v1t2z + v1r0y*(-(v1t0x*v1t1z) + v1t0z*(v1t1x - v1t2x) + v1t1z*v1t2x + v1t0x*v1t2z - v1t1x*v1t2z)) + v1r0x*(-(v1t0z*v1t1y*v1t2x) + v1t0y*v1t1z*v1t2x + v1t0z*v1t1x*v1t2y - v1t0x*v1t1z*v1t2y + v1r1z*(-(v1t0x*v1t1y) + v1t0y*(v1t1x - v1t2x) + v1t1y*v1t2x + v1t0x*v1t2y - v1t1x*v1t2y) - v1t0y*v1t1x*v1t2z + v1t0x*v1t1y*v1t2z + v1r1y*(-(v1t0z*v1t1x) + v1t0x*v1t1z + v1t0z*v1t2x - v1t1z*v1t2x - v1t0x*v1t2z + v1t1x*v1t2z)))/(v1r0y*v1t0z*v1t1x - v1r1y*v1t0z*v1t1x - v1r0x*v1t0z*v1t1y + v1r1x*v1t0z*v1t1y - v1r0y*v1t0x*v1t1z + v1r1y*v1t0x*v1t1z + v1r0x*v1t0y*v1t1z - v1r1x*v1t0y*v1t1z - v1r0y*v1t0z*v1t2x + v1r1y*v1t0z*v1t2x + v1r0y*v1t1z*v1t2x - v1r1y*v1t1z*v1t2x + v1r0x*v1t0z*v1t2y - v1r1x*v1t0z*v1t2y - v1r0x*v1t1z*v1t2y + v1r1x*v1t1z*v1t2y + v1r1z*(v1t0y*v1t1x - v1t0x*v1t1y - v1t0y*v1t2x + v1t1y*v1t2x + v1t0x*v1t2y - v1t1x*v1t2y) + v1r0z*(v1t0x*v1t1y - v1t1y*v1t2x + v1t0y*(-v1t1x + v1t2x) - v1t0x*v1t2y + v1t1x*v1t2y) + v1r0y*v1t0x*v1t2z - v1r1y*v1t0x*v1t2z - v1r0x*v1t0y*v1t2z + v1r1x*v1t0y*v1t2z - v1r0y*v1t1x*v1t2z + v1r1y*v1t1x*v1t2z + v1r0x*v1t1y*v1t2z - v1r1x*v1t1y*v1t2z);
cerr << "coeffV1ePower0x : "<<  coeffV1ePower0x<< endl;

VertCoord coeffV1ePower1x = ((v1r0x - v1r1x)*(v1t0z*(v1t1y - v1t2y) + v1t1z*v1t2y - v1t1y*v1t2z + v1t0y*(-v1t1z + v1t2z)))/(-(v1r0y*v1t0z*v1t1x) + v1r1y*v1t0z*v1t1x + v1r0x*v1t0z*v1t1y - v1r1x*v1t0z*v1t1y + v1r0y*v1t0x*v1t1z - v1r1y*v1t0x*v1t1z - v1r0x*v1t0y*v1t1z + v1r1x*v1t0y*v1t1z + v1r0y*v1t0z*v1t2x - v1r1y*v1t0z*v1t2x - v1r0y*v1t1z*v1t2x + v1r1y*v1t1z*v1t2x - v1r0x*v1t0z*v1t2y + v1r1x*v1t0z*v1t2y + v1r0x*v1t1z*v1t2y - v1r1x*v1t1z*v1t2y + v1r0z*(-(v1t0x*v1t1y) + v1t0y*(v1t1x - v1t2x) + v1t1y*v1t2x + v1t0x*v1t2y - v1t1x*v1t2y) + v1r1z*(-(v1t0y*v1t1x) + v1t0x*v1t1y + v1t0y*v1t2x - v1t1y*v1t2x - v1t0x*v1t2y + v1t1x*v1t2y) - v1r0y*v1t0x*v1t2z + v1r1y*v1t0x*v1t2z + v1r0x*v1t0y*v1t2z - v1r1x*v1t0y*v1t2z + v1r0y*v1t1x*v1t2z - v1r1y*v1t1x*v1t2z - v1r0x*v1t1y*v1t2z + v1r1x*v1t1y*v1t2z);
cerr << "coeffV1ePower1x : "<<  coeffV1ePower1x<< endl;

VertCoord coeffV1ePower2x = ((v1r0x - v1r1x)*(v1t0z*(v1t1x - v1t2x) + v1t1z*v1t2x - v1t1x*v1t2z + v1t0x*(-v1t1z + v1t2z)))/(v1r0y*v1t0z*v1t1x - v1r1y*v1t0z*v1t1x - v1r0x*v1t0z*v1t1y + v1r1x*v1t0z*v1t1y - v1r0y*v1t0x*v1t1z + v1r1y*v1t0x*v1t1z + v1r0x*v1t0y*v1t1z - v1r1x*v1t0y*v1t1z - v1r0y*v1t0z*v1t2x + v1r1y*v1t0z*v1t2x + v1r0y*v1t1z*v1t2x - v1r1y*v1t1z*v1t2x + v1r0x*v1t0z*v1t2y - v1r1x*v1t0z*v1t2y - v1r0x*v1t1z*v1t2y + v1r1x*v1t1z*v1t2y + v1r1z*(v1t0y*v1t1x - v1t0x*v1t1y - v1t0y*v1t2x + v1t1y*v1t2x + v1t0x*v1t2y - v1t1x*v1t2y) + v1r0z*(v1t0x*v1t1y - v1t1y*v1t2x + v1t0y*(-v1t1x + v1t2x) - v1t0x*v1t2y + v1t1x*v1t2y) + v1r0y*v1t0x*v1t2z - v1r1y*v1t0x*v1t2z - v1r0x*v1t0y*v1t2z + v1r1x*v1t0y*v1t2z - v1r0y*v1t1x*v1t2z + v1r1y*v1t1x*v1t2z + v1r0x*v1t1y*v1t2z - v1r1x*v1t1y*v1t2z);
cerr << "coeffV1ePower2x : "<<  coeffV1ePower2x<< endl;

VertCoord coeffV1ePower3x = -(((v1r0x - v1r1x)*(v1t0y*(v1t1x - v1t2x) + v1t1y*v1t2x - v1t1x*v1t2y + v1t0x*(-v1t1y + v1t2y)))/(v1r0y*v1t0z*v1t1x - v1r1y*v1t0z*v1t1x - v1r0x*v1t0z*v1t1y + v1r1x*v1t0z*v1t1y - v1r0y*v1t0x*v1t1z + v1r1y*v1t0x*v1t1z + v1r0x*v1t0y*v1t1z - v1r1x*v1t0y*v1t1z - v1r0y*v1t0z*v1t2x + v1r1y*v1t0z*v1t2x + v1r0y*v1t1z*v1t2x - v1r1y*v1t1z*v1t2x + v1r0x*v1t0z*v1t2y - v1r1x*v1t0z*v1t2y - v1r0x*v1t1z*v1t2y + v1r1x*v1t1z*v1t2y + v1r1z*(v1t0y*v1t1x - v1t0x*v1t1y - v1t0y*v1t2x + v1t1y*v1t2x + v1t0x*v1t2y - v1t1x*v1t2y) + v1r0z*(v1t0x*v1t1y - v1t1y*v1t2x + v1t0y*(-v1t1x + v1t2x) - v1t0x*v1t2y + v1t1x*v1t2y) + v1r0y*v1t0x*v1t2z - v1r1y*v1t0x*v1t2z - v1r0x*v1t0y*v1t2z + v1r1x*v1t0y*v1t2z - v1r0y*v1t1x*v1t2z + v1r1y*v1t1x*v1t2z + v1r0x*v1t1y*v1t2z - v1r1x*v1t1y*v1t2z));
cerr << "coeffV1ePower3x : "<<  coeffV1ePower3x<< endl;

VertCoord coeffV1ePower0y = (v1r0z*v1r1y*(-(v1t1y*v1t2x) + v1t0y*(-v1t1x + v1t2x) + v1t0x*(v1t1y - v1t2y) + v1t1x*v1t2y) + v1r0y*(-(v1t0z*v1t1y*v1t2x) + v1t0y*v1t1z*v1t2x + v1t0z*v1t1x*v1t2y - v1t0x*v1t1z*v1t2y + v1r1z*(-(v1t0x*v1t1y) + v1t0y*(v1t1x - v1t2x) + v1t1y*v1t2x + v1t0x*v1t2y - v1t1x*v1t2y) - v1t0y*v1t1x*v1t2z + v1t0x*v1t1y*v1t2z + v1r1x*(v1t0z*v1t1y - v1t0y*v1t1z - v1t0z*v1t2y + v1t1z*v1t2y + v1t0y*v1t2z - v1t1y*v1t2z)) + v1r1y*(v1t0z*v1t1y*v1t2x - v1t0y*v1t1z*v1t2x - v1t0z*v1t1x*v1t2y + v1t0x*v1t1z*v1t2y + v1t0y*v1t1x*v1t2z - v1t0x*v1t1y*v1t2z + v1r0x*(v1t0y*v1t1z - v1t1z*v1t2y + v1t0z*(-v1t1y + v1t2y) - v1t0y*v1t2z + v1t1y*v1t2z)))/(v1r0y*v1t0z*v1t1x - v1r1y*v1t0z*v1t1x - v1r0x*v1t0z*v1t1y + v1r1x*v1t0z*v1t1y - v1r0y*v1t0x*v1t1z + v1r1y*v1t0x*v1t1z + v1r0x*v1t0y*v1t1z - v1r1x*v1t0y*v1t1z - v1r0y*v1t0z*v1t2x + v1r1y*v1t0z*v1t2x + v1r0y*v1t1z*v1t2x - v1r1y*v1t1z*v1t2x + v1r0x*v1t0z*v1t2y - v1r1x*v1t0z*v1t2y - v1r0x*v1t1z*v1t2y + v1r1x*v1t1z*v1t2y + v1r1z*(v1t0y*v1t1x - v1t0x*v1t1y - v1t0y*v1t2x + v1t1y*v1t2x + v1t0x*v1t2y - v1t1x*v1t2y) + v1r0z*(v1t0x*v1t1y - v1t1y*v1t2x + v1t0y*(-v1t1x + v1t2x) - v1t0x*v1t2y + v1t1x*v1t2y) + v1r0y*v1t0x*v1t2z - v1r1y*v1t0x*v1t2z - v1r0x*v1t0y*v1t2z + v1r1x*v1t0y*v1t2z - v1r0y*v1t1x*v1t2z + v1r1y*v1t1x*v1t2z + v1r0x*v1t1y*v1t2z - v1r1x*v1t1y*v1t2z);
cerr << "coeffV1ePower0y : "<<  coeffV1ePower0y<< endl;

VertCoord coeffV1ePower1y = -(((v1r0y - v1r1y)*(v1t0z*(v1t1y - v1t2y) + v1t1z*v1t2y - v1t1y*v1t2z + v1t0y*(-v1t1z + v1t2z)))/(v1r0y*v1t0z*v1t1x - v1r1y*v1t0z*v1t1x - v1r0x*v1t0z*v1t1y + v1r1x*v1t0z*v1t1y - v1r0y*v1t0x*v1t1z + v1r1y*v1t0x*v1t1z + v1r0x*v1t0y*v1t1z - v1r1x*v1t0y*v1t1z - v1r0y*v1t0z*v1t2x + v1r1y*v1t0z*v1t2x + v1r0y*v1t1z*v1t2x - v1r1y*v1t1z*v1t2x + v1r0x*v1t0z*v1t2y - v1r1x*v1t0z*v1t2y - v1r0x*v1t1z*v1t2y + v1r1x*v1t1z*v1t2y + v1r1z*(v1t0y*v1t1x - v1t0x*v1t1y - v1t0y*v1t2x + v1t1y*v1t2x + v1t0x*v1t2y - v1t1x*v1t2y) + v1r0z*(v1t0x*v1t1y - v1t1y*v1t2x + v1t0y*(-v1t1x + v1t2x) - v1t0x*v1t2y + v1t1x*v1t2y) + v1r0y*v1t0x*v1t2z - v1r1y*v1t0x*v1t2z - v1r0x*v1t0y*v1t2z + v1r1x*v1t0y*v1t2z - v1r0y*v1t1x*v1t2z + v1r1y*v1t1x*v1t2z + v1r0x*v1t1y*v1t2z - v1r1x*v1t1y*v1t2z));
cerr << "coeffV1ePower1y : "<<  coeffV1ePower1y<< endl;

VertCoord coeffV1ePower2y = ((v1r0y - v1r1y)*(v1t0z*(v1t1x - v1t2x) + v1t1z*v1t2x - v1t1x*v1t2z + v1t0x*(-v1t1z + v1t2z)))/(v1r0y*v1t0z*v1t1x - v1r1y*v1t0z*v1t1x - v1r0x*v1t0z*v1t1y + v1r1x*v1t0z*v1t1y - v1r0y*v1t0x*v1t1z + v1r1y*v1t0x*v1t1z + v1r0x*v1t0y*v1t1z - v1r1x*v1t0y*v1t1z - v1r0y*v1t0z*v1t2x + v1r1y*v1t0z*v1t2x + v1r0y*v1t1z*v1t2x - v1r1y*v1t1z*v1t2x + v1r0x*v1t0z*v1t2y - v1r1x*v1t0z*v1t2y - v1r0x*v1t1z*v1t2y + v1r1x*v1t1z*v1t2y + v1r1z*(v1t0y*v1t1x - v1t0x*v1t1y - v1t0y*v1t2x + v1t1y*v1t2x + v1t0x*v1t2y - v1t1x*v1t2y) + v1r0z*(v1t0x*v1t1y - v1t1y*v1t2x + v1t0y*(-v1t1x + v1t2x) - v1t0x*v1t2y + v1t1x*v1t2y) + v1r0y*v1t0x*v1t2z - v1r1y*v1t0x*v1t2z - v1r0x*v1t0y*v1t2z + v1r1x*v1t0y*v1t2z - v1r0y*v1t1x*v1t2z + v1r1y*v1t1x*v1t2z + v1r0x*v1t1y*v1t2z - v1r1x*v1t1y*v1t2z);
cerr << "coeffV1ePower2y : "<<  coeffV1ePower2y<< endl;

VertCoord coeffV1ePower3y = -(((v1r0y - v1r1y)*(v1t0y*(v1t1x - v1t2x) + v1t1y*v1t2x - v1t1x*v1t2y + v1t0x*(-v1t1y + v1t2y)))/(v1r0y*v1t0z*v1t1x - v1r1y*v1t0z*v1t1x - v1r0x*v1t0z*v1t1y + v1r1x*v1t0z*v1t1y - v1r0y*v1t0x*v1t1z + v1r1y*v1t0x*v1t1z + v1r0x*v1t0y*v1t1z - v1r1x*v1t0y*v1t1z - v1r0y*v1t0z*v1t2x + v1r1y*v1t0z*v1t2x + v1r0y*v1t1z*v1t2x - v1r1y*v1t1z*v1t2x + v1r0x*v1t0z*v1t2y - v1r1x*v1t0z*v1t2y - v1r0x*v1t1z*v1t2y + v1r1x*v1t1z*v1t2y + v1r1z*(v1t0y*v1t1x - v1t0x*v1t1y - v1t0y*v1t2x + v1t1y*v1t2x + v1t0x*v1t2y - v1t1x*v1t2y) + v1r0z*(v1t0x*v1t1y - v1t1y*v1t2x + v1t0y*(-v1t1x + v1t2x) - v1t0x*v1t2y + v1t1x*v1t2y) + v1r0y*v1t0x*v1t2z - v1r1y*v1t0x*v1t2z - v1r0x*v1t0y*v1t2z + v1r1x*v1t0y*v1t2z - v1r0y*v1t1x*v1t2z + v1r1y*v1t1x*v1t2z + v1r0x*v1t1y*v1t2z - v1r1x*v1t1y*v1t2z));
cerr << "coeffV1ePower3y : "<<  coeffV1ePower3y<< endl;

VertCoord coeffV1ePower0z = (v1r0z*(-(v1t0z*v1t1y*v1t2x) + v1t0y*v1t1z*v1t2x + v1t0z*v1t1x*v1t2y - v1t0x*v1t1z*v1t2y - v1t0y*v1t1x*v1t2z + v1t0x*v1t1y*v1t2z + v1r1y*(v1t0x*v1t1z - v1t1z*v1t2x + v1t0z*(-v1t1x + v1t2x) - v1t0x*v1t2z + v1t1x*v1t2z) + v1r1x*(v1t0z*v1t1y - v1t0y*v1t1z - v1t0z*v1t2y + v1t1z*v1t2y + v1t0y*v1t2z - v1t1y*v1t2z)) + v1r1z*(v1t0z*v1t1y*v1t2x - v1t0y*v1t1z*v1t2x - v1t0z*v1t1x*v1t2y + v1t0x*v1t1z*v1t2y + v1t0y*v1t1x*v1t2z - v1t0x*v1t1y*v1t2z + v1r0y*(-(v1t0x*v1t1z) + v1t0z*(v1t1x - v1t2x) + v1t1z*v1t2x + v1t0x*v1t2z - v1t1x*v1t2z) + v1r0x*(-(v1t0z*v1t1y) + v1t0y*v1t1z + v1t0z*v1t2y - v1t1z*v1t2y - v1t0y*v1t2z + v1t1y*v1t2z)))/(v1r0y*v1t0z*v1t1x - v1r1y*v1t0z*v1t1x - v1r0x*v1t0z*v1t1y + v1r1x*v1t0z*v1t1y - v1r0y*v1t0x*v1t1z + v1r1y*v1t0x*v1t1z + v1r0x*v1t0y*v1t1z - v1r1x*v1t0y*v1t1z - v1r0y*v1t0z*v1t2x + v1r1y*v1t0z*v1t2x + v1r0y*v1t1z*v1t2x - v1r1y*v1t1z*v1t2x + v1r0x*v1t0z*v1t2y - v1r1x*v1t0z*v1t2y - v1r0x*v1t1z*v1t2y + v1r1x*v1t1z*v1t2y + v1r1z*(v1t0y*v1t1x - v1t0x*v1t1y - v1t0y*v1t2x + v1t1y*v1t2x + v1t0x*v1t2y - v1t1x*v1t2y) + v1r0z*(v1t0x*v1t1y - v1t1y*v1t2x + v1t0y*(-v1t1x + v1t2x) - v1t0x*v1t2y + v1t1x*v1t2y) + v1r0y*v1t0x*v1t2z - v1r1y*v1t0x*v1t2z - v1r0x*v1t0y*v1t2z + v1r1x*v1t0y*v1t2z - v1r0y*v1t1x*v1t2z + v1r1y*v1t1x*v1t2z + v1r0x*v1t1y*v1t2z - v1r1x*v1t1y*v1t2z);
cerr << "coeffV1ePower0z : "<<  coeffV1ePower0z<< endl;

VertCoord coeffV1ePower1z = ((v1r0z - v1r1z)*(v1t0z*(v1t1y - v1t2y) + v1t1z*v1t2y - v1t1y*v1t2z + v1t0y*(-v1t1z + v1t2z)))/(-(v1r0y*v1t0z*v1t1x) + v1r1y*v1t0z*v1t1x + v1r0x*v1t0z*v1t1y - v1r1x*v1t0z*v1t1y + v1r0y*v1t0x*v1t1z - v1r1y*v1t0x*v1t1z - v1r0x*v1t0y*v1t1z + v1r1x*v1t0y*v1t1z + v1r0y*v1t0z*v1t2x - v1r1y*v1t0z*v1t2x - v1r0y*v1t1z*v1t2x + v1r1y*v1t1z*v1t2x - v1r0x*v1t0z*v1t2y + v1r1x*v1t0z*v1t2y + v1r0x*v1t1z*v1t2y - v1r1x*v1t1z*v1t2y + v1r0z*(-(v1t0x*v1t1y) + v1t0y*(v1t1x - v1t2x) + v1t1y*v1t2x + v1t0x*v1t2y - v1t1x*v1t2y) + v1r1z*(-(v1t0y*v1t1x) + v1t0x*v1t1y + v1t0y*v1t2x - v1t1y*v1t2x - v1t0x*v1t2y + v1t1x*v1t2y) - v1r0y*v1t0x*v1t2z + v1r1y*v1t0x*v1t2z + v1r0x*v1t0y*v1t2z - v1r1x*v1t0y*v1t2z + v1r0y*v1t1x*v1t2z - v1r1y*v1t1x*v1t2z - v1r0x*v1t1y*v1t2z + v1r1x*v1t1y*v1t2z);
cerr << "coeffV1ePower1z : "<<  coeffV1ePower1z<< endl;

VertCoord coeffV1ePower2z = ((v1r0z - v1r1z)*(v1t0z*(v1t1x - v1t2x) + v1t1z*v1t2x - v1t1x*v1t2z + v1t0x*(-v1t1z + v1t2z)))/(v1r0y*v1t0z*v1t1x - v1r1y*v1t0z*v1t1x - v1r0x*v1t0z*v1t1y + v1r1x*v1t0z*v1t1y - v1r0y*v1t0x*v1t1z + v1r1y*v1t0x*v1t1z + v1r0x*v1t0y*v1t1z - v1r1x*v1t0y*v1t1z - v1r0y*v1t0z*v1t2x + v1r1y*v1t0z*v1t2x + v1r0y*v1t1z*v1t2x - v1r1y*v1t1z*v1t2x + v1r0x*v1t0z*v1t2y - v1r1x*v1t0z*v1t2y - v1r0x*v1t1z*v1t2y + v1r1x*v1t1z*v1t2y + v1r1z*(v1t0y*v1t1x - v1t0x*v1t1y - v1t0y*v1t2x + v1t1y*v1t2x + v1t0x*v1t2y - v1t1x*v1t2y) + v1r0z*(v1t0x*v1t1y - v1t1y*v1t2x + v1t0y*(-v1t1x + v1t2x) - v1t0x*v1t2y + v1t1x*v1t2y) + v1r0y*v1t0x*v1t2z - v1r1y*v1t0x*v1t2z - v1r0x*v1t0y*v1t2z + v1r1x*v1t0y*v1t2z - v1r0y*v1t1x*v1t2z + v1r1y*v1t1x*v1t2z + v1r0x*v1t1y*v1t2z - v1r1x*v1t1y*v1t2z);
cerr << "coeffV1ePower2z : "<<  coeffV1ePower2z<< endl;

VertCoord coeffV1ePower3z = ((v1r0z - v1r1z)*(v1t0y*(v1t1x - v1t2x) + v1t1y*v1t2x - v1t1x*v1t2y + v1t0x*(-v1t1y + v1t2y)))/(-(v1r0y*v1t0z*v1t1x) + v1r1y*v1t0z*v1t1x + v1r0x*v1t0z*v1t1y - v1r1x*v1t0z*v1t1y + v1r0y*v1t0x*v1t1z - v1r1y*v1t0x*v1t1z - v1r0x*v1t0y*v1t1z + v1r1x*v1t0y*v1t1z + v1r0y*v1t0z*v1t2x - v1r1y*v1t0z*v1t2x - v1r0y*v1t1z*v1t2x + v1r1y*v1t1z*v1t2x - v1r0x*v1t0z*v1t2y + v1r1x*v1t0z*v1t2y + v1r0x*v1t1z*v1t2y - v1r1x*v1t1z*v1t2y + v1r0z*(-(v1t0x*v1t1y) + v1t0y*(v1t1x - v1t2x) + v1t1y*v1t2x + v1t0x*v1t2y - v1t1x*v1t2y) + v1r1z*(-(v1t0y*v1t1x) + v1t0x*v1t1y + v1t0y*v1t2x - v1t1y*v1t2x - v1t0x*v1t2y + v1t1x*v1t2y) - v1r0y*v1t0x*v1t2z + v1r1y*v1t0x*v1t2z + v1r0x*v1t0y*v1t2z - v1r1x*v1t0y*v1t2z + v1r0y*v1t1x*v1t2z - v1r1y*v1t1x*v1t2z - v1r0x*v1t1y*v1t2z + v1r1x*v1t1y*v1t2z);
cerr << "coeffV1ePower3z : "<<  coeffV1ePower3z<< endl;



VertCoord coeffV2ePower0x = (v2r0z*v2r1x*(-(v2t1y*v2t2x) + v2t0y*(-v2t1x + v2t2x) + v2t0x*(v2t1y - v2t2y) + v2t1x*v2t2y) + v2r1x*(v2t0z*v2t1y*v2t2x - v2t0y*v2t1z*v2t2x - v2t0z*v2t1x*v2t2y + v2t0x*v2t1z*v2t2y + v2t0y*v2t1x*v2t2z - v2t0x*v2t1y*v2t2z + v2r0y*(-(v2t0x*v2t1z) + v2t0z*(v2t1x - v2t2x) + v2t1z*v2t2x + v2t0x*v2t2z - v2t1x*v2t2z)) + v2r0x*(-(v2t0z*v2t1y*v2t2x) + v2t0y*v2t1z*v2t2x + v2t0z*v2t1x*v2t2y - v2t0x*v2t1z*v2t2y + v2r1z*(-(v2t0x*v2t1y) + v2t0y*(v2t1x - v2t2x) + v2t1y*v2t2x + v2t0x*v2t2y - v2t1x*v2t2y) - v2t0y*v2t1x*v2t2z + v2t0x*v2t1y*v2t2z + v2r1y*(-(v2t0z*v2t1x) + v2t0x*v2t1z + v2t0z*v2t2x - v2t1z*v2t2x - v2t0x*v2t2z + v2t1x*v2t2z)))/(v2r0y*v2t0z*v2t1x - v2r1y*v2t0z*v2t1x - v2r0x*v2t0z*v2t1y + v2r1x*v2t0z*v2t1y - v2r0y*v2t0x*v2t1z + v2r1y*v2t0x*v2t1z + v2r0x*v2t0y*v2t1z - v2r1x*v2t0y*v2t1z - v2r0y*v2t0z*v2t2x + v2r1y*v2t0z*v2t2x + v2r0y*v2t1z*v2t2x - v2r1y*v2t1z*v2t2x + v2r0x*v2t0z*v2t2y - v2r1x*v2t0z*v2t2y - v2r0x*v2t1z*v2t2y + v2r1x*v2t1z*v2t2y + v2r1z*(v2t0y*v2t1x - v2t0x*v2t1y - v2t0y*v2t2x + v2t1y*v2t2x + v2t0x*v2t2y - v2t1x*v2t2y) + v2r0z*(v2t0x*v2t1y - v2t1y*v2t2x + v2t0y*(-v2t1x + v2t2x) - v2t0x*v2t2y + v2t1x*v2t2y) + v2r0y*v2t0x*v2t2z - v2r1y*v2t0x*v2t2z - v2r0x*v2t0y*v2t2z + v2r1x*v2t0y*v2t2z - v2r0y*v2t1x*v2t2z + v2r1y*v2t1x*v2t2z + v2r0x*v2t1y*v2t2z - v2r1x*v2t1y*v2t2z);
cerr << "coeffV2ePower0x : "<<  coeffV2ePower0x<< endl;

VertCoord coeffV2ePower1x = ((v2r0x - v2r1x)*(v2t0z*(v2t1y - v2t2y) + v2t1z*v2t2y - v2t1y*v2t2z + v2t0y*(-v2t1z + v2t2z)))/(-(v2r0y*v2t0z*v2t1x) + v2r1y*v2t0z*v2t1x + v2r0x*v2t0z*v2t1y - v2r1x*v2t0z*v2t1y + v2r0y*v2t0x*v2t1z - v2r1y*v2t0x*v2t1z - v2r0x*v2t0y*v2t1z + v2r1x*v2t0y*v2t1z + v2r0y*v2t0z*v2t2x - v2r1y*v2t0z*v2t2x - v2r0y*v2t1z*v2t2x + v2r1y*v2t1z*v2t2x - v2r0x*v2t0z*v2t2y + v2r1x*v2t0z*v2t2y + v2r0x*v2t1z*v2t2y - v2r1x*v2t1z*v2t2y + v2r0z*(-(v2t0x*v2t1y) + v2t0y*(v2t1x - v2t2x) + v2t1y*v2t2x + v2t0x*v2t2y - v2t1x*v2t2y) + v2r1z*(-(v2t0y*v2t1x) + v2t0x*v2t1y + v2t0y*v2t2x - v2t1y*v2t2x - v2t0x*v2t2y + v2t1x*v2t2y) - v2r0y*v2t0x*v2t2z + v2r1y*v2t0x*v2t2z + v2r0x*v2t0y*v2t2z - v2r1x*v2t0y*v2t2z + v2r0y*v2t1x*v2t2z - v2r1y*v2t1x*v2t2z - v2r0x*v2t1y*v2t2z + v2r1x*v2t1y*v2t2z);
cerr << "coeffV2ePower1x : "<<  coeffV2ePower1x<< endl;

VertCoord coeffV2ePower2x = ((v2r0x - v2r1x)*(v2t0z*(v2t1x - v2t2x) + v2t1z*v2t2x - v2t1x*v2t2z + v2t0x*(-v2t1z + v2t2z)))/(v2r0y*v2t0z*v2t1x - v2r1y*v2t0z*v2t1x - v2r0x*v2t0z*v2t1y + v2r1x*v2t0z*v2t1y - v2r0y*v2t0x*v2t1z + v2r1y*v2t0x*v2t1z + v2r0x*v2t0y*v2t1z - v2r1x*v2t0y*v2t1z - v2r0y*v2t0z*v2t2x + v2r1y*v2t0z*v2t2x + v2r0y*v2t1z*v2t2x - v2r1y*v2t1z*v2t2x + v2r0x*v2t0z*v2t2y - v2r1x*v2t0z*v2t2y - v2r0x*v2t1z*v2t2y + v2r1x*v2t1z*v2t2y + v2r1z*(v2t0y*v2t1x - v2t0x*v2t1y - v2t0y*v2t2x + v2t1y*v2t2x + v2t0x*v2t2y - v2t1x*v2t2y) + v2r0z*(v2t0x*v2t1y - v2t1y*v2t2x + v2t0y*(-v2t1x + v2t2x) - v2t0x*v2t2y + v2t1x*v2t2y) + v2r0y*v2t0x*v2t2z - v2r1y*v2t0x*v2t2z - v2r0x*v2t0y*v2t2z + v2r1x*v2t0y*v2t2z - v2r0y*v2t1x*v2t2z + v2r1y*v2t1x*v2t2z + v2r0x*v2t1y*v2t2z - v2r1x*v2t1y*v2t2z);
cerr << "coeffV2ePower2x : "<<  coeffV2ePower2x<< endl;

VertCoord coeffV2ePower3x = -(((v2r0x - v2r1x)*(v2t0y*(v2t1x - v2t2x) + v2t1y*v2t2x - v2t1x*v2t2y + v2t0x*(-v2t1y + v2t2y)))/(v2r0y*v2t0z*v2t1x - v2r1y*v2t0z*v2t1x - v2r0x*v2t0z*v2t1y + v2r1x*v2t0z*v2t1y - v2r0y*v2t0x*v2t1z + v2r1y*v2t0x*v2t1z + v2r0x*v2t0y*v2t1z - v2r1x*v2t0y*v2t1z - v2r0y*v2t0z*v2t2x + v2r1y*v2t0z*v2t2x + v2r0y*v2t1z*v2t2x - v2r1y*v2t1z*v2t2x + v2r0x*v2t0z*v2t2y - v2r1x*v2t0z*v2t2y - v2r0x*v2t1z*v2t2y + v2r1x*v2t1z*v2t2y + v2r1z*(v2t0y*v2t1x - v2t0x*v2t1y - v2t0y*v2t2x + v2t1y*v2t2x + v2t0x*v2t2y - v2t1x*v2t2y) + v2r0z*(v2t0x*v2t1y - v2t1y*v2t2x + v2t0y*(-v2t1x + v2t2x) - v2t0x*v2t2y + v2t1x*v2t2y) + v2r0y*v2t0x*v2t2z - v2r1y*v2t0x*v2t2z - v2r0x*v2t0y*v2t2z + v2r1x*v2t0y*v2t2z - v2r0y*v2t1x*v2t2z + v2r1y*v2t1x*v2t2z + v2r0x*v2t1y*v2t2z - v2r1x*v2t1y*v2t2z));
cerr << "coeffV2ePower3x : "<<  coeffV2ePower3x<< endl;

VertCoord coeffV2ePower0y = (v2r0z*v2r1y*(-(v2t1y*v2t2x) + v2t0y*(-v2t1x + v2t2x) + v2t0x*(v2t1y - v2t2y) + v2t1x*v2t2y) + v2r0y*(-(v2t0z*v2t1y*v2t2x) + v2t0y*v2t1z*v2t2x + v2t0z*v2t1x*v2t2y - v2t0x*v2t1z*v2t2y + v2r1z*(-(v2t0x*v2t1y) + v2t0y*(v2t1x - v2t2x) + v2t1y*v2t2x + v2t0x*v2t2y - v2t1x*v2t2y) - v2t0y*v2t1x*v2t2z + v2t0x*v2t1y*v2t2z + v2r1x*(v2t0z*v2t1y - v2t0y*v2t1z - v2t0z*v2t2y + v2t1z*v2t2y + v2t0y*v2t2z - v2t1y*v2t2z)) + v2r1y*(v2t0z*v2t1y*v2t2x - v2t0y*v2t1z*v2t2x - v2t0z*v2t1x*v2t2y + v2t0x*v2t1z*v2t2y + v2t0y*v2t1x*v2t2z - v2t0x*v2t1y*v2t2z + v2r0x*(v2t0y*v2t1z - v2t1z*v2t2y + v2t0z*(-v2t1y + v2t2y) - v2t0y*v2t2z + v2t1y*v2t2z)))/(v2r0y*v2t0z*v2t1x - v2r1y*v2t0z*v2t1x - v2r0x*v2t0z*v2t1y + v2r1x*v2t0z*v2t1y - v2r0y*v2t0x*v2t1z + v2r1y*v2t0x*v2t1z + v2r0x*v2t0y*v2t1z - v2r1x*v2t0y*v2t1z - v2r0y*v2t0z*v2t2x + v2r1y*v2t0z*v2t2x + v2r0y*v2t1z*v2t2x - v2r1y*v2t1z*v2t2x + v2r0x*v2t0z*v2t2y - v2r1x*v2t0z*v2t2y - v2r0x*v2t1z*v2t2y + v2r1x*v2t1z*v2t2y + v2r1z*(v2t0y*v2t1x - v2t0x*v2t1y - v2t0y*v2t2x + v2t1y*v2t2x + v2t0x*v2t2y - v2t1x*v2t2y) + v2r0z*(v2t0x*v2t1y - v2t1y*v2t2x + v2t0y*(-v2t1x + v2t2x) - v2t0x*v2t2y + v2t1x*v2t2y) + v2r0y*v2t0x*v2t2z - v2r1y*v2t0x*v2t2z - v2r0x*v2t0y*v2t2z + v2r1x*v2t0y*v2t2z - v2r0y*v2t1x*v2t2z + v2r1y*v2t1x*v2t2z + v2r0x*v2t1y*v2t2z - v2r1x*v2t1y*v2t2z);
cerr << "coeffV2ePower0y : "<<  coeffV2ePower0y<< endl;

VertCoord coeffV2ePower1y = -(((v2r0y - v2r1y)*(v2t0z*(v2t1y - v2t2y) + v2t1z*v2t2y - v2t1y*v2t2z + v2t0y*(-v2t1z + v2t2z)))/(v2r0y*v2t0z*v2t1x - v2r1y*v2t0z*v2t1x - v2r0x*v2t0z*v2t1y + v2r1x*v2t0z*v2t1y - v2r0y*v2t0x*v2t1z + v2r1y*v2t0x*v2t1z + v2r0x*v2t0y*v2t1z - v2r1x*v2t0y*v2t1z - v2r0y*v2t0z*v2t2x + v2r1y*v2t0z*v2t2x + v2r0y*v2t1z*v2t2x - v2r1y*v2t1z*v2t2x + v2r0x*v2t0z*v2t2y - v2r1x*v2t0z*v2t2y - v2r0x*v2t1z*v2t2y + v2r1x*v2t1z*v2t2y + v2r1z*(v2t0y*v2t1x - v2t0x*v2t1y - v2t0y*v2t2x + v2t1y*v2t2x + v2t0x*v2t2y - v2t1x*v2t2y) + v2r0z*(v2t0x*v2t1y - v2t1y*v2t2x + v2t0y*(-v2t1x + v2t2x) - v2t0x*v2t2y + v2t1x*v2t2y) + v2r0y*v2t0x*v2t2z - v2r1y*v2t0x*v2t2z - v2r0x*v2t0y*v2t2z + v2r1x*v2t0y*v2t2z - v2r0y*v2t1x*v2t2z + v2r1y*v2t1x*v2t2z + v2r0x*v2t1y*v2t2z - v2r1x*v2t1y*v2t2z));
cerr << "coeffV2ePower1y : "<<  coeffV2ePower1y<< endl;

VertCoord coeffV2ePower2y = ((v2r0y - v2r1y)*(v2t0z*(v2t1x - v2t2x) + v2t1z*v2t2x - v2t1x*v2t2z + v2t0x*(-v2t1z + v2t2z)))/(v2r0y*v2t0z*v2t1x - v2r1y*v2t0z*v2t1x - v2r0x*v2t0z*v2t1y + v2r1x*v2t0z*v2t1y - v2r0y*v2t0x*v2t1z + v2r1y*v2t0x*v2t1z + v2r0x*v2t0y*v2t1z - v2r1x*v2t0y*v2t1z - v2r0y*v2t0z*v2t2x + v2r1y*v2t0z*v2t2x + v2r0y*v2t1z*v2t2x - v2r1y*v2t1z*v2t2x + v2r0x*v2t0z*v2t2y - v2r1x*v2t0z*v2t2y - v2r0x*v2t1z*v2t2y + v2r1x*v2t1z*v2t2y + v2r1z*(v2t0y*v2t1x - v2t0x*v2t1y - v2t0y*v2t2x + v2t1y*v2t2x + v2t0x*v2t2y - v2t1x*v2t2y) + v2r0z*(v2t0x*v2t1y - v2t1y*v2t2x + v2t0y*(-v2t1x + v2t2x) - v2t0x*v2t2y + v2t1x*v2t2y) + v2r0y*v2t0x*v2t2z - v2r1y*v2t0x*v2t2z - v2r0x*v2t0y*v2t2z + v2r1x*v2t0y*v2t2z - v2r0y*v2t1x*v2t2z + v2r1y*v2t1x*v2t2z + v2r0x*v2t1y*v2t2z - v2r1x*v2t1y*v2t2z);
cerr << "coeffV2ePower2y : "<<  coeffV2ePower2y<< endl;

VertCoord coeffV2ePower3y = -(((v2r0y - v2r1y)*(v2t0y*(v2t1x - v2t2x) + v2t1y*v2t2x - v2t1x*v2t2y + v2t0x*(-v2t1y + v2t2y)))/(v2r0y*v2t0z*v2t1x - v2r1y*v2t0z*v2t1x - v2r0x*v2t0z*v2t1y + v2r1x*v2t0z*v2t1y - v2r0y*v2t0x*v2t1z + v2r1y*v2t0x*v2t1z + v2r0x*v2t0y*v2t1z - v2r1x*v2t0y*v2t1z - v2r0y*v2t0z*v2t2x + v2r1y*v2t0z*v2t2x + v2r0y*v2t1z*v2t2x - v2r1y*v2t1z*v2t2x + v2r0x*v2t0z*v2t2y - v2r1x*v2t0z*v2t2y - v2r0x*v2t1z*v2t2y + v2r1x*v2t1z*v2t2y + v2r1z*(v2t0y*v2t1x - v2t0x*v2t1y - v2t0y*v2t2x + v2t1y*v2t2x + v2t0x*v2t2y - v2t1x*v2t2y) + v2r0z*(v2t0x*v2t1y - v2t1y*v2t2x + v2t0y*(-v2t1x + v2t2x) - v2t0x*v2t2y + v2t1x*v2t2y) + v2r0y*v2t0x*v2t2z - v2r1y*v2t0x*v2t2z - v2r0x*v2t0y*v2t2z + v2r1x*v2t0y*v2t2z - v2r0y*v2t1x*v2t2z + v2r1y*v2t1x*v2t2z + v2r0x*v2t1y*v2t2z - v2r1x*v2t1y*v2t2z));
cerr << "coeffV2ePower3y : "<<  coeffV2ePower3y<< endl;

VertCoord coeffV2ePower0z = (v2r0z*(-(v2t0z*v2t1y*v2t2x) + v2t0y*v2t1z*v2t2x + v2t0z*v2t1x*v2t2y - v2t0x*v2t1z*v2t2y - v2t0y*v2t1x*v2t2z + v2t0x*v2t1y*v2t2z + v2r1y*(v2t0x*v2t1z - v2t1z*v2t2x + v2t0z*(-v2t1x + v2t2x) - v2t0x*v2t2z + v2t1x*v2t2z) + v2r1x*(v2t0z*v2t1y - v2t0y*v2t1z - v2t0z*v2t2y + v2t1z*v2t2y + v2t0y*v2t2z - v2t1y*v2t2z)) + v2r1z*(v2t0z*v2t1y*v2t2x - v2t0y*v2t1z*v2t2x - v2t0z*v2t1x*v2t2y + v2t0x*v2t1z*v2t2y + v2t0y*v2t1x*v2t2z - v2t0x*v2t1y*v2t2z + v2r0y*(-(v2t0x*v2t1z) + v2t0z*(v2t1x - v2t2x) + v2t1z*v2t2x + v2t0x*v2t2z - v2t1x*v2t2z) + v2r0x*(-(v2t0z*v2t1y) + v2t0y*v2t1z + v2t0z*v2t2y - v2t1z*v2t2y - v2t0y*v2t2z + v2t1y*v2t2z)))/(v2r0y*v2t0z*v2t1x - v2r1y*v2t0z*v2t1x - v2r0x*v2t0z*v2t1y + v2r1x*v2t0z*v2t1y - v2r0y*v2t0x*v2t1z + v2r1y*v2t0x*v2t1z + v2r0x*v2t0y*v2t1z - v2r1x*v2t0y*v2t1z - v2r0y*v2t0z*v2t2x + v2r1y*v2t0z*v2t2x + v2r0y*v2t1z*v2t2x - v2r1y*v2t1z*v2t2x + v2r0x*v2t0z*v2t2y - v2r1x*v2t0z*v2t2y - v2r0x*v2t1z*v2t2y + v2r1x*v2t1z*v2t2y + v2r1z*(v2t0y*v2t1x - v2t0x*v2t1y - v2t0y*v2t2x + v2t1y*v2t2x + v2t0x*v2t2y - v2t1x*v2t2y) + v2r0z*(v2t0x*v2t1y - v2t1y*v2t2x + v2t0y*(-v2t1x + v2t2x) - v2t0x*v2t2y + v2t1x*v2t2y) + v2r0y*v2t0x*v2t2z - v2r1y*v2t0x*v2t2z - v2r0x*v2t0y*v2t2z + v2r1x*v2t0y*v2t2z - v2r0y*v2t1x*v2t2z + v2r1y*v2t1x*v2t2z + v2r0x*v2t1y*v2t2z - v2r1x*v2t1y*v2t2z);
cerr << "coeffV2ePower0z : "<<  coeffV2ePower0z<< endl;

VertCoord coeffV2ePower1z = ((v2r0z - v2r1z)*(v2t0z*(v2t1y - v2t2y) + v2t1z*v2t2y - v2t1y*v2t2z + v2t0y*(-v2t1z + v2t2z)))/(-(v2r0y*v2t0z*v2t1x) + v2r1y*v2t0z*v2t1x + v2r0x*v2t0z*v2t1y - v2r1x*v2t0z*v2t1y + v2r0y*v2t0x*v2t1z - v2r1y*v2t0x*v2t1z - v2r0x*v2t0y*v2t1z + v2r1x*v2t0y*v2t1z + v2r0y*v2t0z*v2t2x - v2r1y*v2t0z*v2t2x - v2r0y*v2t1z*v2t2x + v2r1y*v2t1z*v2t2x - v2r0x*v2t0z*v2t2y + v2r1x*v2t0z*v2t2y + v2r0x*v2t1z*v2t2y - v2r1x*v2t1z*v2t2y + v2r0z*(-(v2t0x*v2t1y) + v2t0y*(v2t1x - v2t2x) + v2t1y*v2t2x + v2t0x*v2t2y - v2t1x*v2t2y) + v2r1z*(-(v2t0y*v2t1x) + v2t0x*v2t1y + v2t0y*v2t2x - v2t1y*v2t2x - v2t0x*v2t2y + v2t1x*v2t2y) - v2r0y*v2t0x*v2t2z + v2r1y*v2t0x*v2t2z + v2r0x*v2t0y*v2t2z - v2r1x*v2t0y*v2t2z + v2r0y*v2t1x*v2t2z - v2r1y*v2t1x*v2t2z - v2r0x*v2t1y*v2t2z + v2r1x*v2t1y*v2t2z);
cerr << "coeffV2ePower1z : "<<  coeffV2ePower1z<< endl;

VertCoord coeffV2ePower2z = ((v2r0z - v2r1z)*(v2t0z*(v2t1x - v2t2x) + v2t1z*v2t2x - v2t1x*v2t2z + v2t0x*(-v2t1z + v2t2z)))/(v2r0y*v2t0z*v2t1x - v2r1y*v2t0z*v2t1x - v2r0x*v2t0z*v2t1y + v2r1x*v2t0z*v2t1y - v2r0y*v2t0x*v2t1z + v2r1y*v2t0x*v2t1z + v2r0x*v2t0y*v2t1z - v2r1x*v2t0y*v2t1z - v2r0y*v2t0z*v2t2x + v2r1y*v2t0z*v2t2x + v2r0y*v2t1z*v2t2x - v2r1y*v2t1z*v2t2x + v2r0x*v2t0z*v2t2y - v2r1x*v2t0z*v2t2y - v2r0x*v2t1z*v2t2y + v2r1x*v2t1z*v2t2y + v2r1z*(v2t0y*v2t1x - v2t0x*v2t1y - v2t0y*v2t2x + v2t1y*v2t2x + v2t0x*v2t2y - v2t1x*v2t2y) + v2r0z*(v2t0x*v2t1y - v2t1y*v2t2x + v2t0y*(-v2t1x + v2t2x) - v2t0x*v2t2y + v2t1x*v2t2y) + v2r0y*v2t0x*v2t2z - v2r1y*v2t0x*v2t2z - v2r0x*v2t0y*v2t2z + v2r1x*v2t0y*v2t2z - v2r0y*v2t1x*v2t2z + v2r1y*v2t1x*v2t2z + v2r0x*v2t1y*v2t2z - v2r1x*v2t1y*v2t2z);
cerr << "coeffV2ePower2z : "<<  coeffV2ePower2z<< endl;

VertCoord coeffV2ePower3z = ((v2r0z - v2r1z)*(v2t0y*(v2t1x - v2t2x) + v2t1y*v2t2x - v2t1x*v2t2y + v2t0x*(-v2t1y + v2t2y)))/(-(v2r0y*v2t0z*v2t1x) + v2r1y*v2t0z*v2t1x + v2r0x*v2t0z*v2t1y - v2r1x*v2t0z*v2t1y + v2r0y*v2t0x*v2t1z - v2r1y*v2t0x*v2t1z - v2r0x*v2t0y*v2t1z + v2r1x*v2t0y*v2t1z + v2r0y*v2t0z*v2t2x - v2r1y*v2t0z*v2t2x - v2r0y*v2t1z*v2t2x + v2r1y*v2t1z*v2t2x - v2r0x*v2t0z*v2t2y + v2r1x*v2t0z*v2t2y + v2r0x*v2t1z*v2t2y - v2r1x*v2t1z*v2t2y + v2r0z*(-(v2t0x*v2t1y) + v2t0y*(v2t1x - v2t2x) + v2t1y*v2t2x + v2t0x*v2t2y - v2t1x*v2t2y) + v2r1z*(-(v2t0y*v2t1x) + v2t0x*v2t1y + v2t0y*v2t2x - v2t1y*v2t2x - v2t0x*v2t2y + v2t1x*v2t2y) - v2r0y*v2t0x*v2t2z + v2r1y*v2t0x*v2t2z + v2r0x*v2t0y*v2t2z - v2r1x*v2t0y*v2t2z + v2r0y*v2t1x*v2t2z - v2r1y*v2t1x*v2t2z - v2r0x*v2t1y*v2t2z + v2r1x*v2t1y*v2t2z);
cerr << "coeffV2ePower3z : "<<  coeffV2ePower3z<< endl;

/*****************************************************/
/*****************************************************/
/*****************************************************/
/*****************************************************/
/*****************************************************/
/*****************************************************/
VertCoord ans_1 = coeffV0ePower0z*coeffV1ePower0x - coeffV0ePower0x*coeffV1ePower0z - coeffV0ePower0z*coeffV2ePower0x + coeffV1ePower0z*coeffV2ePower0x + coeffV0ePower0x*coeffV2ePower0z - coeffV1ePower0x*coeffV2ePower0z;
cerr << "ans_1 : "<<  ans_1<< endl;

/*****************************************************/
/*****************************************************/
/*****************************************************/
/*****************************************************/
VertCoord ans_2 = coeffV0ePower1z*coeffV1ePower0x - coeffV0ePower1x*coeffV1ePower0z + coeffV0ePower0z*coeffV1ePower1x - coeffV0ePower0x*coeffV1ePower1z - coeffV0ePower1z*coeffV2ePower0x + coeffV1ePower1z*coeffV2ePower0x + coeffV0ePower1x*coeffV2ePower0z - coeffV1ePower1x*coeffV2ePower0z - coeffV0ePower0z*coeffV2ePower1x + coeffV1ePower0z*coeffV2ePower1x + coeffV0ePower0x*coeffV2ePower1z - coeffV1ePower0x*coeffV2ePower1z;
cerr << "ans_2 : "<<  ans_2<< endl;

/*****************************************************/
/*****************************************************/
/*****************************************************/
/*****************************************************/
VertCoord ans_3 = coeffV0ePower2z*coeffV1ePower0x - coeffV0ePower2x*coeffV1ePower0z + coeffV0ePower1z*coeffV1ePower1x - coeffV0ePower1x*coeffV1ePower1z + coeffV0ePower0z*coeffV1ePower2x - coeffV0ePower0x*coeffV1ePower2z - coeffV0ePower2z*coeffV2ePower0x + coeffV1ePower2z*coeffV2ePower0x + coeffV0ePower2x*coeffV2ePower0z - coeffV1ePower2x*coeffV2ePower0z - coeffV0ePower1z*coeffV2ePower1x + coeffV1ePower1z*coeffV2ePower1x + coeffV0ePower1x*coeffV2ePower1z - coeffV1ePower1x*coeffV2ePower1z - coeffV0ePower0z*coeffV2ePower2x + coeffV1ePower0z*coeffV2ePower2x + coeffV0ePower0x*coeffV2ePower2z - coeffV1ePower0x*coeffV2ePower2z;
cerr << "ans_3 : "<<  ans_3<< endl;

/*****************************************************/
/*****************************************************/
/*****************************************************/
/*****************************************************/
VertCoord ans_4 = coeffV0ePower3z*coeffV1ePower0x - coeffV0ePower3x*coeffV1ePower0z + coeffV0ePower2z*coeffV1ePower1x - coeffV0ePower2x*coeffV1ePower1z + coeffV0ePower1z*coeffV1ePower2x - coeffV0ePower1x*coeffV1ePower2z + coeffV0ePower0z*coeffV1ePower3x - coeffV0ePower0x*coeffV1ePower3z - coeffV0ePower3z*coeffV2ePower0x + coeffV1ePower3z*coeffV2ePower0x + coeffV0ePower3x*coeffV2ePower0z - coeffV1ePower3x*coeffV2ePower0z - coeffV0ePower2z*coeffV2ePower1x + coeffV1ePower2z*coeffV2ePower1x + coeffV0ePower2x*coeffV2ePower1z - coeffV1ePower2x*coeffV2ePower1z - coeffV0ePower1z*coeffV2ePower2x + coeffV1ePower1z*coeffV2ePower2x + coeffV0ePower1x*coeffV2ePower2z - coeffV1ePower1x*coeffV2ePower2z - coeffV0ePower0z*coeffV2ePower3x + coeffV1ePower0z*coeffV2ePower3x + coeffV0ePower0x*coeffV2ePower3z - coeffV1ePower0x*coeffV2ePower3z;
cerr << "ans_4 : "<<  ans_4<< endl;

/*****************************************************/
/*****************************************************/
/*****************************************************/
/*****************************************************/
VertCoord ans_5 = coeffV0ePower3z*coeffV1ePower1x - coeffV0ePower3x*coeffV1ePower1z + coeffV0ePower2z*coeffV1ePower2x - coeffV0ePower2x*coeffV1ePower2z + coeffV0ePower1z*coeffV1ePower3x - coeffV0ePower1x*coeffV1ePower3z - coeffV0ePower3z*coeffV2ePower1x + coeffV1ePower3z*coeffV2ePower1x + coeffV0ePower3x*coeffV2ePower1z - coeffV1ePower3x*coeffV2ePower1z - coeffV0ePower2z*coeffV2ePower2x + coeffV1ePower2z*coeffV2ePower2x + coeffV0ePower2x*coeffV2ePower2z - coeffV1ePower2x*coeffV2ePower2z - coeffV0ePower1z*coeffV2ePower3x + coeffV1ePower1z*coeffV2ePower3x + coeffV0ePower1x*coeffV2ePower3z - coeffV1ePower1x*coeffV2ePower3z;
cerr << "ans_5 : "<<  ans_5<< endl;

/*****************************************************/
/*****************************************************/
/*****************************************************/
/*****************************************************/
VertCoord ans_6 = coeffV0ePower3z*coeffV1ePower2x - coeffV0ePower3x*coeffV1ePower2z + coeffV0ePower2z*coeffV1ePower3x - coeffV0ePower2x*coeffV1ePower3z - coeffV0ePower3z*coeffV2ePower2x + coeffV1ePower3z*coeffV2ePower2x + coeffV0ePower3x*coeffV2ePower2z - coeffV1ePower3x*coeffV2ePower2z - coeffV0ePower2z*coeffV2ePower3x + coeffV1ePower2z*coeffV2ePower3x + coeffV0ePower2x*coeffV2ePower3z - coeffV1ePower2x*coeffV2ePower3z;
cerr << "ans_6 : "<<  ans_6<< endl;

/*****************************************************/
/*****************************************************/
/*****************************************************/
/*****************************************************/
VertCoord ans_7 = coeffV0ePower3z*coeffV1ePower3x - coeffV0ePower3x*coeffV1ePower3z - coeffV0ePower3z*coeffV2ePower3x + coeffV1ePower3z*coeffV2ePower3x + coeffV0ePower3x*coeffV2ePower3z - coeffV1ePower3x*coeffV2ePower3z;
cerr << "ans_7 : "<<  ans_7<< endl;

/*****************************************************/
/*****************************************************/


 return 0; 

 } 
