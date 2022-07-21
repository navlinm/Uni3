#include "PutSphere.h"

PutSphere::PutSphere(int xcenter, int ycenter, int zcenter, int radius, float r1, float g1, float b1, float alpha)
{
    this->xcenter = xcenter;
    this->ycenter = ycenter;
    this->zcenter = zcenter;
    this->radius = radius;
    this->r1 = r1;
    this->g1 = g1;
    this->b1 = b1;
    this->alpha = alpha;
}

void PutSphere::draw(Sculptor &s){
    s.setColor(r1, g1, b1,alpha);
    s.putSphere(xcenter, ycenter, zcenter, radius);
}
