#include "CutBox.h"

CutBox::CutBox(int x0_, int x1_, int y0_, int y1_, int z0_, int z1_)
{
    this->x0_ = x0_;
    this->y0_ = y0_;
    this->z0_ = z0_;
    this->x1_ = x1_;
    this->y1_ = y1_;
    this->z1_ = z1_;
}

void CutBox::draw(Sculptor &s){
    s.cutBox(x0_, x1_, y0_, y1_, z0_, z1_);
}
