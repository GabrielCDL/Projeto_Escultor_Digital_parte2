#include "putsphere.h"
#include <cmath>

putShere::putShere(int xc, int yc, int zc, int rd, float r, float g, float b, float a){
  this->xc=xc; this->yc=yc; this->zc=zc; this->rd=rd;
  this->r=r; this->g=g; this->b=b; this->a=a;

}
void putShere::draw(Sculptor &s){
    s.setColor(r,g,b,a);
    for(int i=xc-rd;i<=xc+rd;i++){
        for(int j=yc-rd;j<=yc+rd;j++){
            for(int k=zc-rd;k<=zc+rd;k++){
                if((pow(i-xc,2) + pow(j-yc,2) + pow(k-zc,2))<=(pow(rd,2))){
                   s.putVoxel(i,j,k);
                }
            }
        }
    }
}


