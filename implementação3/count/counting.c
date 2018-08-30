#include<stdio.h>

void countSort(int ar[],int n,int max)
{
     int count[50]={0},i,j;

     for(i=0;i<n;++i)
      count[ar[i]]=count[ar[i]]+1;

     printf("\nElementos Ordenados:");

     for(i=0;i<=max;++i)
      for(j=1;j<=count[i];++j)
       printf("%d ",i);
}

int main()
{
    int ar[50],n,i,max=0;
    printf("Tamanho do Array:");
    scanf("%d",&n);
    printf("\nDigite os Elementos:");

    for(i=0;i<n;++i)
    {
     scanf("%d",&ar[i]);
     if(ar[i]>max)
      max=ar[i];
    }

    countSort(ar,n,max);
    return 0;
}
