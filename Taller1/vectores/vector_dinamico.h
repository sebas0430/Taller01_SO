#ifndef VECTOR_DINAMICO_H
#define VECTOR_DINAMICO_H

#define CAPACIDAD_INICIAL 4

typedef struct vectorDinamico {
    int capacidad;
    int totalElementos;
    void **elementos;
} vectorDinamico;

// Declaraciones de funciones
void vectorInicio(vectorDinamico *V);
int totalVector(vectorDinamico *V);
void addVector(vectorDinamico *V, void *elemento);
void borrarVector(vectorDinamico *V, int indice);
void *getVector(vectorDinamico *V, int indice);
void setVector(vectorDinamico *V, int indice, void *elemento);
void freeVector(vectorDinamico *V);
// imprimir
void imprimirVector(vectorDinamico *V);

#endif // VECTOR_DINAMICO_H
