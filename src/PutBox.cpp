#include "PutBox.h"

PutBox::PutBox(int x0, int x1, int y0, int y1, int z0, int z1, float r, float g, float b, float a)
{
    //  aqui começa uma sequencia para definir as variáveis que o construtor recebe e associar com as privadas da classe
    this->x0_ = x0_;
    this->y0_ = y0_;
    this->z0_ = z0_;
    this->x1_ = x1_;
    this->y1_ = y1_;
    this->z1_ = z1_;
    this->r1 = r1;
    this->g1 = g1;
    this->b1 = b1;
    this->alpha = alpha;
}

void PutBox::draw(Sculptor &s){// aqui a classe irá se desenhar, utilizando os metodos da classe sculptor
    s.setColor(r1, g1, b1, alpha);
    s.putBox(x0_, x1_, y0_, y1_, z0_, z1_);
}
