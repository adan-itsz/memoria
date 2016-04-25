// memoria.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include "listaEnlazada.h"

int _tmain(int argc, _TCHAR* argv[])
{
	listaEnlazada lista;

	lista.añadirNodo(2);
	lista.añadirNodo(3);
	lista.añadirNodo(4);

	lista.mostrarLista();

	lista.eliminarNodo(3);

	lista.mostrarLista();

	return 0;
}

