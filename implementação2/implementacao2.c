#include <stdio.h>
#include <stdlib.h>

void swap(int* a, int* b){

    int t = *a;
    *a = *b;
    *b = t;

}

int partition(int ar[], int left, int right){
    int j;
    int pivot = ar[right];m
    int i = (left - 1);

    for(j = left; j <= right - 1; j++){
        if(ar[j] <= pivot){
            i++;
            swap(&ar[i], &ar[j]);
        }
    }
    swap(&ar[i + 1], &ar[right]);
    return i + 1;
}

void quick(int ar[], int left, int right){

    if(left < right){
        int pi;
        pi = partition(ar, left, right);
        quick(ar, left, pi - 1);
        quick(ar, pi + 1, right);
    }


}
void merge(int ar[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;

    int L[n1], R[n2];

    for (i = 0; i < n1; i++)
        L[i] = ar[l + i];
    for (j = 0; j < n2; j++)
        R[j] = ar[m + 1 + j];

    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2){
        if (L[i] <= R[j]){
            ar[k] = L[i];
            i++;
        }
        else{
            ar[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1){
        ar[k] = L[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        ar[k] = R[j];
        j++;
        k++;
    }
}
void mergeSort(int ar[], int l, int r)
{
    if (l < r)
    {
        int m = l + (r - l)/2;
        mergeSort(ar, l, m);
        mergeSort(ar, m + 1, r);
        merge(ar, l, m, r);
    }
}

void print(int ar[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", ar[i]);
}

int main()
{
    int ar[] = {15, 6, 12, 1, 8, 19};
    int ar2[] = {20, 14, 16, 2, 5, 9};
    int n = sizeof(ar)/sizeof(ar[0]);
    int n2 = sizeof(ar2)/sizeof(ar2[0]);
    quick(ar, 0, n - 1);
    mergeSort(ar2, 0, n2 - 1);
    printf("Quick array: ");
    print(ar, n);
    printf("\nMerge array: ");
    print(ar2, n);

    return 0;
}
