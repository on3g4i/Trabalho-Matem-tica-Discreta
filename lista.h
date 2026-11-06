#ifndef _LISTA_
#define _LISTA_
#define MAXTAM 12
typedef struct Cidade {
    double x, y;
}Cidade;

typedef struct Lista{
    int Tamanho;
    Cidade Item[MAXTAM];
}Lista;

Lista * CriaLista();
//Preenche a Lista com um novo valor de cidade, retorna 1 se sucesso
int PreencheLista(Lista *L, Cidade c);
//Verifica Se a Lista está vazia
int Vazia (Lista *L);

#endif