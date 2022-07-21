#ifndef PUTBOX_H
#define PUTBOX_H
#include <FiguraGeometrica.h>

class PutBox : public FiguraGeometrica // classe que herda a superclasse figura geométrica
{
    private:
        int x0_, y0_, z0_, x1_, y1_, z1_; // recebe as coordenadas da caixa
    public:
        PutBox(int x0_, int x1_, int y0_, int y1_, int z0_, int z1_, float r1, float g1, float b1, float alpha);// recebe além das coordenadas, as cores
        virtual ~PutBox(){}
        void draw(Sculptor &s); // metodo draw para a classe se desenhar
};
#endif // PUTBOX_H
