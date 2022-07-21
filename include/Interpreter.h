#ifndef INTERPRETER_H
#define INTERPRETER_H
#include "FiguraGeometrica.h"
#include <vector>
#include <string>
using namespace std;

class Interpreter // classe interpretador, ir� analisar o documento e criar o desenho
{
    private:
        int dx, dy, dz; // recebe as dimens�es x, y e z do espa�o que ir� ser trabalhado
        float r1, g1, b1, alpha; // recebe as cores
    public:
        Interpreter(); // construtor da classe
        virtual ~Interpreter(){} // destrutor da classe
        vector<FiguraGeometrica *> analise(string filename); /* m�todo mais importante da classe, ele que ir� analisar
        o que est� escrito no documento, retorna um ponteiro para figura geom�trica e recebe o nome de um arquivo*/
        int getDX(); // retorna a dimens�o x
        int getDY(); // retorna a dimens�o y
        int getDZ(); // retorna a dimens�o z
};
#endif // INTERPRETER_H
