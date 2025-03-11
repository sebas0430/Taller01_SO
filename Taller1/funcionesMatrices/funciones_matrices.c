#include <stdio.h>
#include <stdlib.h>
#include "../matriz/modulo.h"

// Submenú para operaciones con matrices
void submenu_matrices() {
    int opcion;
    int N;
    int *Ma = NULL, *Mb = NULL, *Mc = NULL;
// menu para tener las opciones que hay para manejar una matriz
    do {
        printf("\n--- Submenú de Matrices ---\n");
        printf("1. Inicializar matrices\n");
        printf("2. Multiplicar matrices\n");
        printf("3. Imprimir matrices\n");
        printf("4. Salir\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1: {
                // Inicializar matrices
                printf("Ingrese el tamaño de las matrices (N x N): ");
                scanf("%d", &N);

                if (N <= 0) {
                    printf("Error: El tamaño de las matrices debe ser mayor que 0.\n");
                    break;
                }

                // Liberar memoria si las matrices ya estaban asignadas
                if (Ma != NULL) free(Ma);
                if (Mb != NULL) free(Mb);
                if (Mc != NULL) free(Mc);

                // Reservar memoria para las matrices
                Ma = malloc(N * N * sizeof(int));
                Mb = malloc(N * N * sizeof(int));
                Mc = malloc(N * N * sizeof(int));

                if (Ma == NULL || Mb == NULL || Mc == NULL) {
                    printf("Error: No se pudo asignar memoria.\n");
                    free(Ma);
                    free(Mb);
                    free(Mc);
                    Ma = Mb = Mc = NULL;
                    break;
                }

                // Inicializar las matrices
                inicializar_matriz(Ma, Mb, N);
                printf("Matrices inicializadas.\n");
                break;
            }
            case 2: {
                // Multiplicar matrices
                if (Ma == NULL || Mb == NULL || Mc == NULL) {
                    printf("Error: Las matrices no están inicializadas.\n");
                    break;
                }

                multiplicar_Matriz(Ma, Mb, Mc, N);
                printf("Matrices multiplicadas.\n");
                break;
            }
            case 3: {
                // Imprimir matrices
                if (Ma == NULL || Mb == NULL || Mc == NULL) {
                    printf("Error: Las matrices no están inicializadas.\n");
                    break;
                }

                printf("Matriz Ma:\n");
                impMatriz(Ma, N);

                printf("Matriz Mb:\n");
                impMatriz(Mb, N);

                printf("Matriz Mc (resultado de la multiplicación):\n");
                impMatriz(Mc, N);
                break;
            }
            case 4:
                printf("Saliendo del submenú...\n");
                break;
            default:
                printf("Opción no válida. Intente de nuevo.\n");
        }
    } while (opcion != 4);

    // Liberar memoria al salir
    if (Ma != NULL) free(Ma);
    if (Mb != NULL) free(Mb);
    if (Mc != NULL) free(Mc);
}

void ejecutar_matrices() {
    printf("\nEjecutando programa de matrices...\n");
    submenu_matrices();
}
