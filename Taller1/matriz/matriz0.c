#include <stdio.h>
#include <stdlib.h>

#include "modulo.h"

int main(int *argc, char *argv[])
{
        //se toma el valor de entrada Tamaño de matriz
        int N = (int) atoi(argv[1]);
        printf("Valor ingresado %d \n",N);
        //reserva de memoria para matriz dinamica
        int *Ma = (int*) malloc(N*N*sizeof(int));
        int *Mb = (int*) malloc(N*N*sizeof(int));
        int *Mc = (int*) malloc(N*N*sizeof(int));

        inicializar_matriz(Ma,Mb,N);
        multiplicar_Matriz(Ma,Mb,Mc,N);
        impMatriz(Ma,N);
        impMatriz(Mb,N);
        impMatriz(Mc,N);

        free(Ma);
        free(Mb);
        free(Mc);
        return 0;
}
