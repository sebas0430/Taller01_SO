#include <stdio.h>
#include <stdlib.h>
#include "vector_dinamico.h"

// Inicializa el vector
void vectorInicio(vectorDinamico *V) {
    V->capacidad = CAPACIDAD_INICIAL;
    V->totalElementos = 0;
    V->elementos = malloc(sizeof(void*) * V->capacidad);
    if (V->elementos == NULL) {
        fprintf(stderr, "Error: No se pudo asignar memoria.\n");
        exit(1);
    }
}

// Devuelve el número total de elementos en el vector
int totalVector(vectorDinamico *V) {
    return V->totalElementos;
}

// Redimensiona el vector
static void resizeVector(vectorDinamico *V, int capacidad) {
    printf("Redimensión: %d a %d\n", V->capacidad, capacidad);

    void **elementos = realloc(V->elementos, sizeof(void*) * capacidad);
    if (elementos == NULL) {
        fprintf(stderr, "Error: No se pudo redimensionar el vector.\n");
        exit(1);
    }
    V->elementos = elementos;
    V->capacidad = capacidad;
}

// Agrega un elemento al vector
void addVector(vectorDinamico *V, void *elemento) {
    if (V->capacidad == V->totalElementos)
        resizeVector(V, V->capacidad * 2);
    V->elementos[V->totalElementos++] = elemento;
}

// Elimina un elemento del vector
void borrarVector(vectorDinamico *V, int indice) {
    if (indice < 0 || indice >= V->totalElementos)
        return;

    for (int i = indice; i < V->totalElementos - 1; i++) {
        V->elementos[i] = V->elementos[i + 1];
    }
    V->totalElementos--;

    if (V->totalElementos > 0 && V->totalElementos == V->capacidad / 4)
        resizeVector(V, V->capacidad / 2);
}

// Obtiene un elemento del vector
void *getVector(vectorDinamico *V, int indice) {
    if (indice >= 0 && indice < V->totalElementos)
        return V->elementos[indice];
    return NULL;
}

// Modifica un elemento del vector
void setVector(vectorDinamico *V, int indice, void *elemento) {
    if (indice >= 0 && indice < V->totalElementos)
        V->elementos[indice] = elemento;
}

// Libera la memoria del vector
void freeVector(vectorDinamico *V) {
    free(V->elementos);
    V->elementos = NULL;
    V->capacidad = 0;
    V->totalElementos = 0;
}

// Función para imprimir el vector
void imprimirVector(vectorDinamico *V) {
    printf("Elementos del vector:\n");
    for (int i = 0; i < totalVector(V); i++) {
      printf("%s\n", (char*)V->elementos[i]);
    }
    printf("\n");
}
