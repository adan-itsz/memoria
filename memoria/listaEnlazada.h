#ifndef LISTAENLAZADA_H
#define LISTAENLAZADA_H
class listaEnlazada
{
private:

	typedef struct node {
		int data;
		node* siguiente;
	}*nodePtr;

	nodePtr inicio; //inicio
	nodePtr actual; //actual
	nodePtr temporal; //temporal

public:
	listaEnlazada();
	void aņadirNodo(int aņadirDato);
	void eliminarNodo(int borrarDato);
	void mostrarLista();
};

#endif //!LISTAENLAZADA_H