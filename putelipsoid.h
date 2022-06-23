#ifndef PUTELIPSOID_H
#define PUTELIPSOID_H
#include "figurageometrica.h"
#include "sculptor.h"


class putElipsoid : public figuraGeometrica{
  int xc, yc, zc, rx, ry, rz;

public:
  putElipsoid(int xc, int yc, int zc, int rx, int ry, int rz, float r, float g, float b, float a);
  ~putElipsoid(){};
  void draw(Sculptor &s);
};

#endif // PUTELIPSOID_H

