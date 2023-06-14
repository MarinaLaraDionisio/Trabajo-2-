
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
    void move();

    void draw();

    Ship* getShip();

    void add(Shape* objeto);

    void remove(Shape* objeto);

    pnodo get_head();



private:

    pnodo inicio;

    Ship* theShip;

    int n;

    void destruirLista();

};



#endif
