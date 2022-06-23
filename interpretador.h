#ifndef INTERPRETADOR_H
#define INTERPRETADOR_H
#include <vector>
#include "figurageometrica.h"
#include "sculptor.h"
#include <string>


class interpretador{
  int dimx, dimy, dimz;
  float r, g, b, a;
public:
  interpretador();
  std::vector<figuraGeometrica*> parse(std::string filename);
  int gDimx();
  int gDimy();
  int gDimz();
};

#endif // INTERPRETADOR_H

