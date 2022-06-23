#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include "sculptor.h"
#include "interpretador.h"
#include "figurageometrica.h"

using namespace std;

int main(){

            Sculptor *vm;
            interpretador parser;

            vector<figuraGeometrica*>figs;

            figs = parser.parse("teste.txt");

            vm = new Sculptor(parser.gDimx(), parser.gDimy(), parser.gDimz());

            for(size_t i=0;i<figs.size();i++){
                cout << "draw\n";
                figs[i]->draw(*vm);
            }

            vm->writeOFF((char*) "aneis.off");
            for(size_t i=0;i<figs.size();i++){
                delete figs[i];
            }
            delete vm;

    return 0;
}
