#include <stdio.h>
#include <stdlib.h>

void heapsort(int ar[], int n) {
   int i = n / 2, raiz, folha, t;

   while(1) {
      if (i > 0) {
          i--;
          t = ar[i];
      } else {
          n--;
          if (n == 0) return;
          t = ar[n];
          ar[n] = ar[0];
      }
      raiz = i;
      folha = i * 2 + 1;
      while (folha < n) {
          if ((folha + 1 < n)  &&  (ar[folha + 1] > ar[folha]))
              folha++;
          if (ar[folha] > t) {
             ar[raiz] = ar[folha];
             raiz = folha;
             folha = raiz * 2 + 1;
          } else {
             break;
          }
      }
      ar[raiz] = t;
   }
}
void print(int ar[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", ar[i]);
}

int main(){
    int max = 0;
    int ar[] = {15, 6, 12, 1, 8, 19};
    int n = sizeof(ar)/sizeof(ar[0]);
    heapsort(ar, n);
    printf("Heap: ");
    print(ar, n);

    return 0;
}
