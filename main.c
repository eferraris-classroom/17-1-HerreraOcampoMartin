#include "ListaOrdenada.h"

int main() {

    ListaOrdenada *lista = crearListaOrdenada();

    insertarOrdenado(lista, crearNodo(12));
    insertarOrdenado(lista, crearNodo(50));
    insertarOrdenado(lista, crearNodo(213));
    insertarOrdenado(lista, crearNodo(1));
    insertarOrdenado(lista, crearNodo(0));
    insertarOrdenado(lista, crearNodo(70));

    imprimirListaOrdenada(lista);

    liberarListaOrdenada(lista);

    return 0;
}
