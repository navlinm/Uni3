#include "PutVoxel.h"

PutVoxel::PutVoxel(int x, int y, int z, float r1, float g1, float b1, float alpha)
{
    this->x = x;
    this->y = y;
    this->z = z;
    this->r1 = r1;
    this->g1 = g1;
    this->b1 = b1;
    this->alpha = alpha;
}

void PutVoxel::draw(Sculptor &s){
    s.setColor(r1, g1, b1, alpha);
    s.putVoxel(x, y, z);
}
