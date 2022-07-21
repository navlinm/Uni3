#include "Interpreter.h"
#include <fstream>
#include <iostream>
#include <sstream>
#include "CutBox.h"
#include "CutEllipsoid.h"
#include "CutSphere.h"
#include "CutVoxel.h"
#include "PutBox.h"
#include "PutEllipsoid.h"
#include "PutSphere.h"
#include "PutVoxel.h"
#include "Sculptor.h"

using namespace std;

Interpreter::Interpreter()
{
    //ctor
}

vector<FiguraGeometrica *> Interpreter::analise(string filename){
    ifstream fin; // aqui declara um arquivo a ser aberto
    stringstream ss; // cria uma stream
    string s, token; // cria duas strings
    vector<FiguraGeometrica *> figs; // aqui cria um vetor de figuras geometricas chamado figs

    fin.open(filename.c_str()); // abrir o arquivo

    if (!fin.is_open()){ // verificando se abriu, se não estiver aberto ele notifica e encerra o processo
        cout << "O arquivo não abriu\n";
        exit(0);
    }

    cout << "Arquivo aberto!\n";

    while(fin.good()){ // continua no laço enquanto não da nenhum erro
        getline(fin, s);// pegar a linha do arquivo e associar a s
        if(fin.good()){ // enquanto o arquivo estiver bom
            ss.clear(); // limpar a stream ss
            ss.str(s); // associar  o valor de s em ss
            ss >> token; //  associa token a ss

            if(ss.good()){ // se tiver tudo bem com a stream, ele entra no if
                // aqui começa uma série de comparações entre o token e o arquivo
                if(token.compare("dim") == 0){
                    ss >> dx >> dy >> dz;
                }


                else if(token.compare("putVoxel") == 0){
                    cout << "putVoxel\n";
                    int x, y, z;
                    ss >> x >> y >> z >> r1 >> g1 >> b1 >> alpha;
                    figs.push_back(new PutVoxel(x, y, z, r1, g1, b1, alpha));
                }

                else if(token.compare("cutVoxel") == 0){
                    cout << "cutVoxel\n";
                    int x, y, z;
                    ss >> x >> y >> z;
                    figs.push_back(new CutVoxel(x, y, z));
                }

                else if(token.compare("putBox") == 0){
                    cout << "putBox\n";
                    int x0_, y0_, z0_, x1_, y1_, z1_;
                    ss >> x0_>> x1_ >> y0_ >> y1_ >> z0_ >> z1_ >> r1 >> g1 >> b1 >> alpha;
                    figs.push_back(new PutBox(x0_, x1_, y0_, y1_, z0_, z1_, r1, g1, b1, alpha));
                }

                else if(token.compare("cutBox") == 0){
                    cout << "cutBox\n";
                    int x0_, y0_, z0_, x1_, y1_, z1_;
                    ss >> x0_ >> x1_ >> y0_ >> y1_ >> z0_ >> z1_;
                    figs.push_back(new CutBox(x0_, x1_, y0_, y1_, z0_, z1_));
                }

                else if(token.compare("putEllipsoid") == 0){
                    cout << "putEllipsoid\n";
                    int xcenter, ycenter, zcenter, rx, ry, rz;
                    ss >> xcenter >> ycenter >> zcenter >> rx >> ry >> rz >> r1 >> g1 >> b1 >> alpha;
                    figs.push_back(new PutEllipsoid(xcenter, ycenter, zcenter, rx, ry, rz, r1, g1, b1, alpha));
                }

                else if(token.compare("cutEllipsoid") == 0){
                    cout << "cutEllipsoid\n";
                    int xcenter, ycenter, zcenter, rx, ry, rz;
                    ss >> xcenter >> ycenter >> enter >> rx >> ry >> rz;
                    figs.push_back(new CutEllipsoid(xcenter, ycenter, zcenter, rx, ry, rz));
                }

                else if(token.compare("putSphere") == 0){
                    cout << "putSphere\n";
                    int xcenter, ycenter, zcenter, radius;
                    ss >> xcenter >> ycenter >> zcenter >> radius >> r1 >> g1 >> b1 >> alpha;
                    figs.push_back(new PutSphere(xcenter, ycenter, zcenter, radius, r1, g1, b1, alpha));
                }

                else if(token.compare("cutSphere") == 0){
                    cout << "cutSphere\n";
                    int xcenter, ycenter, zcenter, radius;
                    ss >> xcenter >> ycenter >> zcenter >> radius;
                    figs.push_back(new CutSphere(xcenter, ycenter, zcenter, radius));
                }

                else{
                    fin.close();
                    cout << "\n token " << token << " não definido\n";
                    exit(1);
                }
            }
        }
    }

    fin.close(); // fecha o arquivo
    return figs;
}

int Interpreter::getDX(){
    return dx;
}

int Interpreter::getDY(){
    return dy;
}

int Interpreter::getDZ(){
    return dz;
}
