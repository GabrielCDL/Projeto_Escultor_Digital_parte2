#include "cutsphere.h"
#include <cmath>

cutSphere::cutSphere(int xc, int yc, int zc, int r){
  this->xc=xc; this->yc=yc; this->zc=zc; this->r=r;

}
void cutSphere::draw(Sculptor &s){
    for(int i=xc-r;i<=xc+r;i++){
        for(int j=yc-r;j<=yc+r;j++){
            for(int k=zc-r;k<=zc+r;k++){
                if((pow(i-xc,2) + pow(j-yc,2) + pow(k-zc,2))<=(pow(r,2))){
                   s.cutVoxel(i,j,k);
                }
            }
        }
    }
}

