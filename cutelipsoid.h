#ifndef CUTELIPSOID_H
#define CUTELIPSOID_H
#include "figurageometrica.h"
#include "sculptor.h"


class cutElipsoid : public figuraGeometrica{
  int xc, yc, zc, rx, ry, rz;

public:
  cutElipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);
  ~cutElipsoid(){};
  void draw(Sculptor &s);
};

#endif // CUTELIPSOID_H

