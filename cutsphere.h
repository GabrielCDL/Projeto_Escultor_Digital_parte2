#ifndef CUTSPHERE_H
#define CUTSPHERE_H
#include "figurageometrica.h"
#include "sculptor.h"


class cutSphere : public figuraGeometrica{
  int xc, yc, zc, r;

public:
  cutSphere(int xc, int yc, int zc, int r);
  ~cutSphere(){};
  void draw(Sculptor &s);
};

#endif // CUTSPHERE_H

