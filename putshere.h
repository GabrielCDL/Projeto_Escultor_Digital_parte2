#ifndef PUTSHERE_H
#define PUTSHERE_H
#include "figurageometrica.h"
#include "sculptor.h"


class putShere : public figuraGeometrica{
  int xc, yc, zc, rd;

public:
  putShere(int xc, int yc, int zc, int rd, float r, float g, float b, float a);
  ~putShere(){};
  void draw(Sculptor &s);
};

#endif // PUTSHERE_H


