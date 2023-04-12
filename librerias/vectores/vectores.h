#ifndef VECTORES_H_INCLUDED
#define VECTORES_H_INCLUDED

void imprimir_vector(int *vec, int ce);

int insertar_elemento(int *vec, int elemento, int posicion, int cantidad_elementos);

void orden_burbujeo(int *vec, int cantidad_elementos);

int insertar_elemento_ordenando(int *vec, int elemento, int cantidad_elementos);

int eliminar_elemento(int *vec, int posicion, int cantidad_elementos);

int eliminar_un_elemento_determinado(int *vec, int elemento, int cantidad_elementos);

int eliminar_elemento_determinado_repetido(int *vec, int elemento, int cantidad_elementos);

#endif // VECTORES_H_INCLUDED
