/*
Nombre: Sebastian Sanchez Olaya
Materia: Sistemas Operativos
fecha: 23 de febrero 2025
Taller 2
*/

#include <stdio.h>
#include "funcionesMatrices/funciones_matrices.h"
#include "funcionesVectores/funciones_vectores.h"

int main() {

    int opcion;
// menu para elegir entre matrices y vectores
    do {
        printf("\n--- Menú Principal ---\n");
        printf("1. Ejecutar programa de matrices\n");
        printf("2. Ejecutar programa de vectores\n");
        printf("3. Salir\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
		//llama a la funcion ejecutar matrices ubicada en otra carpeta aparte
                ejecutar_matrices();
                break;
            case 2:
		//llama a la funcion ejecutar vectores ubicada en otra carpeta aparte
                ejecutar_vectores();
                break;
            case 3:
                printf("Saliendo...\n");
                break;
            default:
                printf("Opción no válida. Intente de nuevo.\n");
        }
    } while (opcion != 3);

    return 0;
}
