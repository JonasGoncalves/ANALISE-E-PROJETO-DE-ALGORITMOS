#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define TAMANHO_ARRAY 5

void selection_sort(int vector1[]) {
  int i, j, min, aux;
  for (i = 0; i < (TAMANHO_ARRAY - 1); i++)
  {
     min = i;
     for (j = ( i + 1 ); j < TAMANHO_ARRAY; j++) {
       if(vector1[j] < vector1[min])
         min = j;
     }
     if (vector1[i] != vector1[min]) {
       aux = vector1[i];
       vector1[i] = vector1[min];
       vector1[min] = aux;
     }
  }
}

void insertion_sort(int vector2[])
{
   int i, aux, j;
   for (i = 1; i < TAMANHO_ARRAY; i++)
   {
       aux = vector2[i];
       j = i-1;
       while (j >= 0 && vector2[j] > aux)
       {
           vector2[j+1] = vector2[j];
           j = j-1;
       }
       vector2[j+1] = aux;
   }

}

int main(){

int vector1[] = {7,12,2,9,1};
int vector2[] = {10, 8, 5, 3, 1};

   selection_sort(vector1);
   selection_sort(vector2);

   printf("Algoritmo Selection Sort:\n");
   int i;
   for (i=0; i < TAMANHO_ARRAY; i++)
       printf("%d ", vector1[i]);
       printf("\n");

   printf("Algoritmo Insertion Sort:\n");
   int j;
   for (j=0; j < TAMANHO_ARRAY; j++)
       printf("%d ", vector2[j]);
       printf("\n");


    return 0;

}
