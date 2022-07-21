#ifndef INTERPRETER_H
#define INTERPRETER_H
#include "FiguraGeometrica.h"
#include <vector>
#include <string>
using namespace std;

class Interpreter // classe interpretador, irá analisar o documento e criar o desenho
{
    private:
        int dx, dy, dz; // recebe as dimensões x, y e z do espaço que irá ser trabalhado
        float r1, g1, b1, alpha; // recebe as cores
    public:
        Interpreter(); // construtor da classe
        virtual ~Interpreter(){} // destrutor da classe
        vector<FiguraGeometrica *> analise(string filename); /* método mais importante da classe, ele que irá analisar
        o que está escrito no documento, retorna um ponteiro para figura geométrica e recebe o nome de um arquivo*/
        int getDX(); // retorna a dimensão x
        int getDY(); // retorna a dimensão y
        int getDZ(); // retorna a dimensão z
};
#endif // INTERPRETER_H
