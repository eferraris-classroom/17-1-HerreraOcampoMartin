#ifndef INC_17_1_HERRERAOCAMPOMARTIN_LISTAORDENADA_H
#define INC_17_1_HERRERAOCAMPOMARTIN_LISTAORDENADA_H

typedef struct nodo {
    int codigo;
    struct nodo *siguiente;
} Nodo;

typedef struct listaOrdenada {
    Nodo *primero;
    int tam;
} ListaOrdenada;

ListaOrdenada *crearListaOrdenada();
Nodo *crearNodo(int codigo);
void insertarOrdenado(ListaOrdenada *lista, Nodo *nodoAInsertar);
void imprimirListaOrdenada(ListaOrdenada *lista);
void liberarListaOrdenada(ListaOrdenada *lista);

#endif
