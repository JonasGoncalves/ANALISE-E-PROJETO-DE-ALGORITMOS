#include "Vertice.h"

Vertice::Vertice()
{
    //ctor
}

Vertice::~Vertice()
{
    //dtor
}

Vertice::Vertice(vector <int> Vertices, int GrauDoVertice, int Cor, int ID, int Saturacao, int Flag)
{
    for(int i = 0; i < GrauDoVertice; i++){
        VerticesAdj.push_back(Vertices[i]);
    }

    this->GrauDoVertice = GrauDoVertice;
    this->Cor = Cor;
    this->ID = ID;
    this->Saturacao = Saturacao;
    this->Flag = Flag;
}

int Vertice::ObtemGrauDoVertice()
{
    return GrauDoVertice;
}

int Vertice::ObtemCor()
{
    return Cor;
}

int Vertice::ObtemID()
{
    return ID;
}

int Vertice::ObtemSaturacao()
{
    return Saturacao;
}

int Vertice::ObtemFlag()
{
    return Flag;
}

int Vertice::ObtemVizinho(int v)
{
    return VerticesAdj[v];
}

void Vertice::ObtemInfo()
{
    printf("Numero de Adjacentes [%d]\n", GrauDoVertice);
    printf("Cor                  [%d]\n", Cor);
    printf("ID do vertice        [%d]\n", ID);
    printf("Saturacao            [%d]\n", Saturacao);
    printf("Flag                 [%d]\n", Flag);
    printf("Vizinhos             ");
    for(int i = 0; i < GrauDoVertice; i++){
        printf("[%d] ", VerticesAdj[i]);
    }
    puts("");
}

void Vertice::MudaCor(int NovaCor)
{
    Cor = NovaCor;
}

void Vertice::MudaSaturacao(int NovaSaturacao)
{
    Saturacao = NovaSaturacao;
}

void Vertice::MudaFlag(int NovaFlag)
{
    Flag = NovaFlag;
}
