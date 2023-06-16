
#include "commonstuff.h"
#include "Shape.h"
#include "Alien.h"
#include "Ship.h"
#include "Bullet.h"
#include "Lista.h"
#include "Invaders.h"


#ifndef __OL_H__
#define __OL_H__


class ObjectsList{
 private:
  int n;
  Ship *theShip;

 protected:
  Lista L;

 public:
  ObjectsList();
  ~ObjectsList();
  void move();
  void draw();
  Ship* getShip();
  void add(Shape*);
  void remove(Shape*);
  int collisions(Bullet*,Ship*);

  friend class Invaders;  // !!!
};

#endif
