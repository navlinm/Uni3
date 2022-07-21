#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>
#include "Interpreter.h"
#include "FiguraGeometrica.h"
#include "Sculptor.h"
using namespace std;

int main(void){
    Sculptor *figura; // cria um ponteiro para sculptor
    Interpreter it; // um objeto da classe interpretador
    vector<FiguraGeometrica*> figs; // um vetor de ponteiros para a classe figura geometrica
    figs = it.analise("XBOX_S.txt"); //it.analise retorna um vetor para a classe figura geometrica, ent�o basicamente duplica o vetor
    figura = new Sculptor(it.getDX(), it.getDY(), it.getDZ()); // aqui ele aloca um espa�o na memoria do tamanho das dimens�es necess�rias
    for(int i = 0; i< (int) figs.size(); i++){ // percorrer todos os espa�os de figs
        figs[i]->draw(*figura); // ele ir� come�ar a desenhar tudo o que foi alocado em figs, utilizando o metodo draw
    }
    figura->writeOFF("XBOX_S.off"); // aqui escreve no arquivo off
    for(int i = 0; i < (int) figs.size(); i++){ //aqui libera tudo que foi alocado em figs
        delete figs[i];
    }
    delete figura; // aqui libera o que foi alocado em figura
    return 0;
}
