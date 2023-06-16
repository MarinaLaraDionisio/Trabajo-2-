
/*#include "nodo.h"

class Lista{
	private:
int n;
nodo *head;
public:
Lista();
~Lista();
int ins_cabeza(int);
int ins_cola(int);
int borrar (int);
int is_empty();
int num_elementos();
//nodo *find(int);
void find(int);
void imprimir();
};
*/
#ifndef LISTA_H

#define LISTA_H



#include "Shape.h"

#include "Ship.h"

#include "nodo.h"



class Lista {

public:

    Lista();
    ~Lista();

    void moveALL();

    void drawALL();

    //Ship* getShip();

    void add(Shape* objeto);

    void remove(Shape* objeto);

    pnodo get_head();



private:

    pnodo inicio;

    Ship* theShip; //no estoy nada segura de que haga falta que se declare esta variable en ObjectList Y en Lista.
    //De hecho es posible que dé problemas porque son dos cosas que se llaman igual pero tienen direcciones de memoria diferentes

    int n;

    void destruirLista();

};



#endif
