
#include "commonstuff.h"
#include "Shape.h"

#ifndef __BULLET_H__
#define __BULLET_H__

class Bullet: public Shape {
 private:
  int status;
 public:
  Bullet(float, float, float,float); //los valores que le metas determinan: posición en eje x-posición en eje y-velocidad en x-velocidad en y
  void draw();
  float getSize();
};

#endif
