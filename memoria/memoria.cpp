// memoria.cpp: define el punto de entrada de la aplicaci�n de consola.
//

#include "stdafx.h"
#include "listaEnlazada.h"

int _tmain(int argc, _TCHAR* argv[])
{
	listaEnlazada lista;

	lista.a�adirNodo(2);
	lista.a�adirNodo(3);
	lista.a�adirNodo(4);

	lista.mostrarLista();

	lista.eliminarNodo(3);

	lista.mostrarLista();

	return 0;
}

