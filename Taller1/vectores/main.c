#include <stdio.h>
#include "vector_dinamico.h"

int main() {
    vectorDinamico editor;
    vectorInicio(&editor);

    // Agregar elementos al vector
    addVector(&editor, "Hola");
    addVector(&editor, "Profesional");


    // Imprimir elementos del vector
     imprimirVector(&editor);
    // Eliminar un elemento del vector
    borrarVector(&editor, 1);

    // Modificar un elemento del vector
    setVector(&editor, 0, "Buenos");
    setVector(&editor, 2, "tenis");


    // Imprimir elementos del vector después de las modificaciones
    imprimirVector(&editor);

    // Liberar la memoria del vector
    freeVector(&editor);

    return 0;
}
