/*#include "Lista.h"
#include "stdlib.h"
#include "stdio.h"

Lista::Lista()
{
   head=NULL;
}
Lista::~Lista()
{
 nodo *tmp;
 while(!head){
    tmp=head->next;
    free(head);
    head=tmp;
 }
}

int Lista::ins_cabeza(int x){

  nodo *tmp=NULL;
 tmp = (nodo*)malloc(sizeof(nodo));

 if(tmp==NULL){return 0;}

 tmp->info=x;
 tmp->next=head;
 head=tmp;

 n++;
 return 1;
}


int Lista::ins_cola(int x){
    nodo *cont=NULL;
    cont=head;
    while(cont->next!=NULL){
    cont=cont->next;
    }
    nodo *tmp=NULL;
    tmp = (nodo*)malloc(sizeof(nodo));
    if(tmp==NULL){return 0;}

    tmp->info=x;
    tmp->next=NULL;
    cont->next=tmp;
    n++;
    return 1;
}


int Lista::borrar (int x){
    if (head == NULL) return 0;
    if (head->info == x) { head = NULL; return 1; }
    nodo* p1 = head;
    nodo* p2 = head->next;

    while (p2->info != x) {
        if (p2->next == NULL) { return 0; } //si p2 no es el dato que queremos borrar (condición del while) y el siguiente es NULL (final de la lista) la función borrar no ha hecho nada
        p1 = p1->next;
        p2 = p2->next;
    }
    //si ha llegado a esta parte es que la posición que hay que borrar está guardada en p2 y sabemos lo que hay en el punto anterior (p1) y en el siguiente (p2.next)

    p1->next = p2->next; //hacemos que p1 se salte la dirección de p2
    free(p2); //ya no queremos p2 para nada
    n--;
    return 1;
}


int Lista::is_empty(){
  if(head==NULL) return 1;
	else return 0;
}


int Lista::num_elementos(){
  return n;
}


nodo* Lista::find(int x) {
    nodo *cont=NULL;
    cont=head;
    while(cont->next!=NULL){
        if(cont->info==x){break;}
        else{cont=cont->next;}
    }
    return cont;
}

void Lista::find(int x) {
    nodo* cont = NULL;
    int band = 0;
    cont = head;
    while (cont->next != NULL) {
        if (cont->info == x) {
            band = 1;
            break;
        }
        else { cont = cont->next; }
    }
    if (band) {
        printf("El elemento %d está en la lista\n", x);
    }
    else {
        printf("El elemento %d no está en la lista\n", x);
    }
}

void Lista::imprimir() {
    nodo* cont;

    cont = head;

    while (cont != NULL)
    {
        printf("%d, ", cont->info);
        cont = cont->next;
    }
    printf("\n");
}
*/
#include "Lista.h"

#include "nodo.h"



Lista::Lista() {

    inicio = nullptr;

    theShip = new Ship();

    add(theShip);

    n = 0;

}



Lista::~Lista() {

    destruirLista();

    delete theShip;

}



void Lista::moveALL() { //los mueve TODOS gracias a Dios

    pnodo actual = inicio;

    while (actual != nullptr) {

        actual->theShape->move();

        actual = actual->next;

    }

}



void Lista::drawALL() {

    pnodo actual = inicio;

    while (actual != nullptr) {

        actual->theShape->draw();

        actual = actual->next;

    }

}



/*Ship* Lista::getShip() {

    return theShip;

}*/



void Lista::add(Shape* objeto) {

    pnodo nuevoNodo = new nodo;

    nuevoNodo->theShape = objeto;

    nuevoNodo->next = inicio;

    inicio = nuevoNodo;

    n++;

}



void Lista::remove(Shape* objeto) {

    pnodo actual = inicio;

    pnodo anterior = nullptr;

    while (actual != nullptr) {

        if (actual->theShape == objeto) {

            if (anterior == nullptr) {

                inicio = actual->next;

            }
            else {

                anterior->next = actual->next;

            }

            delete actual;

            n--;

            return;

        }

        anterior = actual;

        actual = actual->next;

    }

}



pnodo Lista::get_head() {

    return inicio;

}



void Lista::destruirLista() {

    pnodo actual = inicio;

    while (actual != nullptr) {

        pnodo siguiente = actual->next;

        delete actual;

        actual = siguiente;

    }

    inicio = nullptr;

    n = 0;

}
