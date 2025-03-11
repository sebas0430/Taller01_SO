#include <stdio.h>
#include <stdlib.h>

#include "modulo.h"
// imprimo la matriz
void impMatriz(int *matriz, int S)
{
        for(int i=0; i<S;i++)
        {       for(int j=0; j<S;j++)
                        {
                        printf(" %d ", matriz[i*S+j]);
                        }
        printf("\n");
        }
        printf("----------------------------------------\n");
}
//Se le da valores a la matriz medinte un for 
void inicializar_matriz(int *Ma,int *Mb, int s)
{
        for(int i=0; i<s*s;i++)
        {
        Ma[i] = 2*i +1;
        Mb[i] = 3*i;
        }
}
//multiplico la matriz (fila x columna)
void multiplicar_Matriz(int *Ma,int *Mb,int *Mc,int s){
        for(int i= 0; i<s;i++){
                for(int j = 0;j<s;j++){

                        int Suma = 0;
                        int *pA, *pB;
                        pA = Ma + i*s;
                        pB = Mb + j;
                        for(int k = 0 ; k<s;k++,pA++,pB+=s){
                        Suma += (*pA * *pB);
                        }
                                Mc[i*s+j] = Suma;
                        }
                }
}
