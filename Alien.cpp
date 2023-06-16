
#include "commonstuff.h"
#include "Alien.h"
#include "ObjectsList.h"
#include <typeinfo>
#include <math.h>

// Forward declarations
class Ship;
class Bullet;


Alien::Alien(int t, float px, float py)
{
  float tmp;

  type = t+2;

  size = 0.4;
  step = 0;

  pos[X] = px;
  pos[Y] = py;
  pos[Z] = 0;

  tspeed[X] = ALIEN_SPEED;
  tspeed[Y] = 0;
  tspeed[Z] = 0;

  if(type<=2)
    {
      color[R] = 0.9;
      color[G] = 0.1;
      color[B] = 0.1;
    }

  if(type==3 || type==4)
    {
      color[R] = 0.1;
      color[G] = 0.9;
      color[B] = 0.1;
    }

  if(type>=5)
    {
      color[R] = 0.9;
      color[G] = 0.9;
      color[B] = 0.9;
    }



  //  printf("added alien type %d at %3.2f,%3.2f\n",t,px,py);
}




void Alien::draw()
{
  predraw();
  glutSolidSphere(size,9,8);

  //printf("Drawing Alien size %f at %g, %g\n",size,pos[X],pos[Y]);

  postdraw();
}


void Alien::changedir()
{
  tspeed[X] = - tspeed[X];
  pos[Y] -= 1;
}



float Alien::getSize()
{
  return (size);
}




int Alien::getType()
{
  return (type);
}



void Alien::move()
{
  step += tspeed[X];

  if(step>0.5 || step<-0.5)
    {
      pos[X] += step;
      step=0;
    }
}


float Alien::operator+(Shape* other)
{
  float coordenadas_other[3]=other->getPos();

  float distancia=0;

  for(int i=0; i<3; i++){
    distancia= SQR(distancia + (pos[i]-other.pos[i])); //SQR es una macro que está definida en commonstuff.h
  }

  return sqrt(distancia);
}
