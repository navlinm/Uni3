#ifndef CUTBOX_H
#define CUTBOX_H
#include <FiguraGeometrica.h>

class CutBox : public FiguraGeometrica
{
    private:
        int x0_, y0_, z0_, x1_, y1_, z1_;
    public:
        CutBox(int x0_, int x1_, int y0_, int y1_, int z0_, int z1_);
        virtual ~CutBox(){}
        void draw(Sculptor &s);
};
#endif // CUTBOX_H
