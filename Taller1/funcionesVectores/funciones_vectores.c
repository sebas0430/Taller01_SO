#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones_vectores.h"
#include "../vectores/vector_dinamico.h"

// Submenú para operaciones con vectores
void submenu_vectores(vectorDinamico *vec) {
    int opcion;
    do {
        printf("\n--- Submenú de Vectores ---\n");
        printf("1. Agregar un elemento\n");
        printf("2. Borrar un elemento\n");
        printf("3. Reemplazar un elemento\n");
        printf("4. Imprimir el vector\n");
        printf("5. Salir\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);
        getchar(); // Limpiar el buffer de entrada

        switch (opcion) {
            case 1: {
                // Agregar un elemento
                char valor[100];// se le da un tamaño a la cadena de caracteres
                printf("Ingrese el valor a agregar: ");
                fgets(valor, sizeof(valor), stdin);//fgets se usa para leer cadenas de caracter
		// el stdin es para especificar que es para una entrada por teclado
                valor[strcspn(valor, "\n")] = '\0'; // Eliminar el salto de línea. (el strcspn lo busque porque me daba error)

                char *dato = malloc(strlen(valor) + 1); // Reservar memoria para la cadena
                strcpy(dato, valor); // el strcpy copiar la cadena de caracteres
                addVector(vec, dato);
                printf("Elemento agregado.\n");
                break;
            }
            case 2: {
                // Borrar un elemento
                int indice;
                printf("Ingrese el índice del elemento a borrar: ");
                scanf("%d", &indice);
                getchar(); // Limpiar el buffer de entrada

                borrarVector(vec, indice);
                printf("Elemento borrado.\n");
                break;
            }
            case 3: {
                // Reemplazar un elemento
                int indice;
                char valor[100];
                printf("Ingrese el índice del elemento a reemplazar: ");
                scanf("%d", &indice);
                getchar(); // Limpiar el buffer de entrada
                printf("Ingrese el nuevo valor: ");
                fgets(valor, sizeof(valor), stdin);
                valor[strcspn(valor, "\n")] = '\0'; // Eliminar el salto de línea

                char *dato = malloc(strlen(valor) + 1); // Reservar memoria para la cadena
                strcpy(dato, valor); // Copiar la cadena
                setVector(vec, indice, dato);
                printf("Elemento reemplazado.\n");
                break;
            }
            case 4:
                // Imprimir el vector
                imprimirVector(vec);
                break;
            case 5:
                printf("Saliendo del submenú...\n");
                break;
            default:
                printf("Opción no válida. Intente de nuevo.\n");
        }
    } while (opcion != 5);
}

void ejecutar_vectores() {
    printf("\nEjecutando programa de vectores...\n");

    // Crear un vector dinámico
    vectorDinamico vec;
    vectorInicio(&vec);

    // Llamar al submenú de vectores
    submenu_vectores(&vec);

    // Liberar la memoria del vector
    freeVector(&vec);
}
