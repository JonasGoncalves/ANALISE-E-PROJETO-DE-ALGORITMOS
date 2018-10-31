#ifndef VERTICE_H
#define VERTICE_H
#include <vector>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

class Vertice
{
    public:
        Vertice();
        virtual ~Vertice();
        Vertice(vector <int> Vertices, int GrauDoVertice, int Cor, int ID, int saturacao, int Flag);

        int ObtemGrauDoVertice();
        int ObtemCor();
        int ObtemID();
        int ObtemSaturacao();
        int ObtemFlag();
        int ObtemVizinho(int v);
        void ObtemInfo();

        void MudaCor(int NovaCor);
        void MudaSaturacao(int NovaSaturacao);
        void MudaFlag(int NovaFlag);

    protected:
        vector <int> VerticesAdj;
        int GrauDoVertice;
        int Cor;
        int ID;
        int Saturacao;
        int Flag;

    private:
};

#endif // VERTICE_H
