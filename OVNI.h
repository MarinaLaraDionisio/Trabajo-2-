#include "commonstuff.h"
#include "Shape.h"

#ifndef __OVNI_H__
#define __OVNI_H__

class OVNI:public Shape(){
private:
    float sizeOVNI;


public:
    OVNI();
    ~OVNI();
    //imagino que puede usar la función move() declarada en shape. Si nos da problemas lo programamos nosotros
};

#endif // __OVNI_H__
