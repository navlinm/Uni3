#include "PutEllipsoid.h"

PutEllipsoid::PutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz, float r1, float g1, float b1, float alpha)
{
    this->xcenter = xcenter;
    this->ycenter = ycenter;
    this->zcenter = zcenter;
    this->rx = rx;
    this->ry = ry;
    this->rz = rz;
    this->r1 = r1;
    this->g1 = g1;
    this->b1 = b1;
    this->alpha = alpha;
}

void PutEllipsoid::draw(Sculptor &s){
    s.setColor(r1, g1, b1, alpha);
    s.putEllipsoid(xcenter, ycenter, zcenter, rx, ry, rz);
}
