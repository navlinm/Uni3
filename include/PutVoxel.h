#ifndef PUTVOXEL_H
#define PUTVOXEL_H
#include <FiguraGeometrica.h>

class PutVoxel : public FiguraGeometrica
{
    private:
        int x, y, z;
    public:
        PutVoxel(int x, int y, int z, float r1, float g1, float b1, float alpha);
        virtual ~PutVoxel(){}
        void draw(Sculptor &s);
};
#endif // PUTVOXEL_H
