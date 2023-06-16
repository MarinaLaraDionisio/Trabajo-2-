#include "ObjectsList.h"
#include "Alien.h"

ObjectsList::ObjectsList() {
    t = 0;
    theShip = new Ship();
    L.add(theShip);
}

ObjectsList::~ObjectsList() {
    // Se destruyen automáticamente los objetos de la lista al destruir ObjectsList
    delete theShip;
}

void ObjectsList::move() {
    L.move();
}

void ObjectsList::draw() {
    L.draw();
}

void ObjectsList::add(Shape* s) {
    L.add(s);
}

void ObjectsList::remove(Shape* s) {
    L.remove(s);
}

Ship* ObjectsList::getShip() {
    return theShip;
}
int collisions(Bullet* theBullet, Ship* theShip){
return 0;}
