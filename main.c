#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

double distEuclidiana(double x1, double y1, double x2, double y2 ){
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}
Lista * ListaCompletaCidades (Lista * Lista,  FILE *arquivo){
   if(Lista == NULL){
        Lista = CriaLista();
   }
    if(arquivo == NULL){
        return NULL;
    } else {
        Cidade c; 
        int contador = 0;
        while (fscanf(arquivo, "%lf %lf", &c.x, &c.y) == 2) {
        contador++;

        if(PreencheLista(Lista, c)){
            printf("Cidade %d preenchida com sucesso\n", contador);
        } else{
            printf("Erro, Lista de Cidades Cheia");
        }
    } 
        return Lista;
}
}

int main(){
    FILE *arquivo = fopen("Entradas.txt", "r");
    Lista *Cidades = NULL;
    if(arquivo != NULL) {
        Cidades = ListaCompletaCidades(Cidades, arquivo);
        fclose(arquivo);
    } else {
        printf("Erro, Arquivo não encontrado\n");
        return 0;
    }
    
    if(Cidades == NULL){
        printf("Erro, não foi possível preencher as cidades na lista\n");
    } else {
        
    }   

    return 0;
}