#include "interpretador.h"
#include <fstream>
#include <sstream>
#include <iostream>
#include <fstream>
#include <sstream>
#include <iostream>
#include "putvoxel.h"
#include "cutvoxel.h"
#include "putbox.h"
#include "cutbox.h"
#include "putshere.h"
#include "cutsphere.h"
#include "putelipsoid.h"
#include "cutelipsoid.h"
#include "interpretador.h"

interpretador::interpretador()
{

}
std::vector<figuraGeometrica*> interpretador::parse(std::string filename){
    std::vector<figuraGeometrica*> figs;
    std::ifstream fin;
    std::stringstream ss;
    std::string s, token;

    fin.open(filename.c_str());
    if(!fin.is_open()){
     std::cout << "ERRO AO ABRIR ARQUIVO" << std::endl;
     exit(0);
    }

    while(fin.good()){
        std::getline(fin,s);
            ss.clear();
            ss.str(s);
            ss >> token;
                if(token.compare("dim")==0){
                    ss >> dimx >> dimy >> dimz;

                }
                else if(token.compare("putvoxel")==0){
                    int x,y,z;
                    ss >> x >> y >> z >> r >> g >> b >> a;
                    figs.push_back(new putVoxel(x,y,z,r,g,b,a));
                }
                else if(token.compare("cutvoxel")==0){
                    int x,y,z;
                    ss >> x >> y >> z;
                    figs.push_back(new cutVoxel(x,y,z));
                }
                else if(token.compare("putbox")==0){
                    int x0, x1, y0, y1, z0, z1;
                    ss >> x0 >> x1 >> y0 >> y1 >> z0 >> z1 >> r >> g >> b >> a;
                    figs.push_back(new putBox(x0,x1,y0,y1,z0,z1,r,g,b,a));
                }
                else if(token.compare("cutbox")==0){
                    int x0, x1, y0, y1, z0, z1;
                    ss >> x0 >> x1 >> y0 >> y1 >> z0 >> z1;
                    figs.push_back(new cutBox(x0,x1,y0,y1,z0,z1));
                }
                else if(token.compare("putsphere")==0){
                    int xc, yc, zc, rd;
                    ss  >> xc >> yc >> zc >> rd >> r >> g >> b >> a;
                    figs.push_back(new putShere(xc,yc,zc,rd,r,g,b,a));
                }
                else if(token.compare("cutsphere")==0){
                    int xc, yc, zc, rd;
                    ss  >> xc >> yc >> zc >> rd;
                    figs.push_back(new cutSphere(xc,yc,zc,rd));
                }
                else if(token.compare("putellipsoid")==0){
                    int xc, yc, zc, rx, ry, rz;
                    ss >> xc >> yc >> zc >> rx >> ry >> rz >> r >> g >> b >> a;
                    figs.push_back(new putElipsoid(xc,yc,zc,rx,ry,rz,r,g,b,a));
                }
                else if(token.compare("cutellipsoid")==0){
                    int xc, yc, zc, rx, ry, rz;
                    ss >> xc >> yc >> zc >> rx >> ry >> rz;
                    figs.push_back(new cutElipsoid(xc,yc,zc,rx,ry,rz));
                }
    }
    return(figs);
}

int interpretador::gDimx(){
    return dimx;
}

int interpretador::gDimy(){
    return dimy;
}

int interpretador::gDimz(){
    return dimz;
}

