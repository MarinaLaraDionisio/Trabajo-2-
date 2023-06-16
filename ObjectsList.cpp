#include "commonstuff.h"

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <unistd.h>  // Esta solo sirve para linux Y osX !!!
#include <string.h>
#include <time.h> //para la aleatorización de la puntuación

#include "Shape.h"
#include "Ship.h"
#include "Bullet.h"
#include "Invaders.h"
#include "Alien.h"
#include "OVNI.h"
#include "ObjectsList.h"

ObjetctList::ObjectsList(){
    L.add(theShip);
    Aliens Aliens_iniciales[NUMALIENS]
    for(int i=0; i<NUMALIENS; i++){
        L.add(Aliens_iniciales[i]);
    }
};

ObjectsList::~ObjectsList(){
    L.~Lista();
};

void ObjectsList::move(){
    L.moveALL();
};

void ObjectsList::draw(){
    L.drawALL();
};

Ship* ObjectsList::getShip(){
    return (theShip);
};

void ObjectsList::add(Shape* nuevo_objeto){
    L.add(nuevo_objeto);
};

void ObjectsList::remove(Shape *objeto_a_borrar){
    L.remove(objeto_a_borrar);
};



int ObjectsList::collisions(Bullet* bala,Shape* victima){
    Shape* esAlien=dynamic_cast<Alien*>(victima);
    Shape* esOVNI=dynamic_cast<OVNI*>(victima);

if( (esAlien!=NULL) || (esOVNI!=NULL) ){ //si no ha habido un error al introducir los objetos

    float sizeAlien=victima->getSize();
    float sizeBullet=bala->getSize();

    float distancia=sizeAlien+sizeBullet-(victima+bala);

    if(distancia<=0) {
        L.remove(bala); //se borra el proyectil de la lista
        L.remove(victima); //se borra el alien/OVNI de la lista
    }

    if(esAlien!=NULL) return (victima->getType); //se devuelve el tipo del alien
    else { //si lo que hemos matado en un OVNI
        int puntuacion;
        puntuacion=(srand((unsigned)time(0)))%3; puntuacion++;
        return (puntuacion*10);
    }
} //fin del caso en el que no ha habido problemas con los objetos introducidos

else {
    printf("Hay un problema con los tipos dados"); //no se me ocurre un mejor mensaje de error vale
    return 0; //hay que tener cuidado con los tipos de los Aliens, que son números y no veo si el 0 está incluido en ellos

};


