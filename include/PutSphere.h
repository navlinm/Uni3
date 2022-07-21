#ifndef PUTSPHERE_H
#define PUTSPHERE_H
#include <FiguraGeometrica.h>

class PutSphere : public FiguraGeometrica
{
    private:
        int xcenter, ycenter, zcenter, radius;
    public:
        PutSphere(int xcenter, int ycenter, int zcenter, int radius, float r1, float g1, float b1, float alpha);
        virtual ~PutSphere(){}
        void draw(Sculptor &s);
};
#endif // PUTSPHERE_H
