#include "stdafx.h"
#include "listaEnlazada.h"
#include <iostream>
#include <cstdlib>

using namespace std;


//CONSTRUCTOR
listaEnlazada::listaEnlazada() {
	inicio = NULL;
	actual = NULL;
	temporal = NULL;
}

void listaEnlazada::a�adirNodo(int a�adirDato) {

	nodePtr n = new node; //crea nodo
	n->siguiente = NULL;
	n->data = a�adirDato;

	if (inicio != NULL) {
		actual = inicio;
		while (actual->siguiente != NULL)
		{
			actual = actual->siguiente;
		}
		actual->siguiente = n;
	}
	else {
		inicio = n;
	}
}

void listaEnlazada::eliminarNodo(int eliminarDato) {

	nodePtr delPtr = NULL;
	temporal = inicio;
	actual = inicio;
	while (actual != NULL && actual->data != eliminarDato) {
		temporal = actual;
		actual = actual->siguiente;
	}
	if (actual == NULL) {
		cout << eliminarDato << "No esta en la lista\n";
		delete delPtr;
	}
	else {
		delPtr = actual;
		actual = actual->siguiente;
		temporal->siguiente = actual; //conecta la lista
		if (delPtr == inicio)
		{
			inicio = inicio->siguiente;
			temporal = NULL;
		}
		delete delPtr;
		cout << "El valor " << eliminarDato << "ha sido eliminado\n";
	}
}

void listaEnlazada::mostrarLista() {

	actual = inicio;
	while (actual != NULL)
	{
		cout << actual->data;
		actual = actual->siguiente;
	}
}