#include <iostream>
#include <stdio.h>
#include <fstream>


using namespace std;

int mochila(int P, int pt[], int k[], int n){

    int A[n + 1][P + 1];

    for(int p = 0; p <= P; p++)
        A[0][p] = 0;
    for (int i = 1; i <= n; i++)
        A[i][0] = 0;

    for(int i = 1; i <= n; i++)
    {
        for(int p = 1; p <= P; p++)
        {
            if (pt[i - 1] <= p)
            {
                 if((k[i - 1] + A[i - 1][p - pt[i - 1]]) > A[i - 1][p])
                    A[i][p] = k[i - 1] + A[i - 1][p - pt[i - 1]];
                else
                    A[i][p] = A[i - 1][p];
            }
            else
                A[i][p] = A[i - 1][p];
        }
    }
        cout << "O Custo da Mochila: " << A[n][P] << endl;
        return A[n][P];
}


int main()
{
    int P, n;
    int cont = 0;
	ifstream arquivo("mochila01.txt", ios::in);

    arquivo >> n;
    arquivo >> P;

    int pt[n] = {0};
    int k[n] = {0};

    for(int i = 0; i < n; i++){
        for(int j = 0; j < 2; j++){

            arquivo >> pt[cont];
            arquivo >> k[cont];
            cont++;
        }

    }

    mochila(P, pt, k, n);

    return 0;
}


