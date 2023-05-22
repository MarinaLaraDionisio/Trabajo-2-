
#include "commonstuff.h" //a�ade librer�as m�ltiples, como la matem�tica, define el valor de muchas macros que luego vamos a necesitar (todas en may�scula), tanto valores num�ricos como "funciones"
#include "Shape.h"

#ifndef __ALIEN_H__
#define __ALIEN_H__

class Alien:public Shape {
 private:
  float size;
  int type;
  float ax;
  float ay;
  float step;

 public:
  Alien(int, float, float);
  void draw();
  void move();
  void changedir();

  int getType();
  float getSize();
  float operator+(Shape*);
};

#endif
