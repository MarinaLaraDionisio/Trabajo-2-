#include "commonstuff.h"
#include "Alien.h"
#include "OVNI.h"
#include "ObjectsList.h"
#include <typeinfo>
#include <math.h>

#define ARRIBA_DEL_TODO 0.5

OVNI::OVNI(){
    sizeOVNI=0.6; //he cogido un n�mero random pero un poco m�s grande que los aliens

    tspeed[X]=OVNI_SPEED;
    tspeed[Y]=0;
    tspeed[Z]=0;

    pos[X]=0; //supongo que va de izquierda a derecha;
    pos[Y]=ARRIBA_DEL_TODO;//donde est� el final de la pantalla, no s� c�mo sacar eso
    pos[Z]=0;
}

OVNI::~OVNI(){}


