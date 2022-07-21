#ifndef PUTELLIPSOID_H
#define PUTELLIPSOID_H
#include <FiguraGeometrica.h>

class PutEllipsoid : public FiguraGeometrica
{
    private:
        int xcenter, ycenter, zcenter, rx, ry, rz;
    public:
        PutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz, float r1, float g1, float b1, float alpha);
        virtual ~PutEllipsoid(){}
        void draw(Sculptor &s);
};
#endif // PUTELLIPSOID_H
