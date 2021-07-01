#include<stdlib.h>
#include "pilha.h"

#define tamanho 10


struct pilha{
    int topo;
    int informacao[tamanho];
};


Pilha* cria_pilha(){
    Pilha *p = (Pilha*) malloc(sizeof(Pilha));
    p->topo = 0;
    return p; //retorna um objeto alocado dinamicamente
}

void push_pilha(Pilha *p){
    int elemento;
    if(p->topo == tamanho){
        printf("pilha lotada. \n");
        exit(1);
    } else {
        printf("\ndig elemento: ");
        scanf("%d", &elemento);
        p->informacao[p->topo] = elemento;
        p->topo++;
    }
}


void print_pilha(Pilha *p){
    int i;
    for(i=0; i< p->topo; i++){
        printf("\n .%d", p->informacao[i]);
    }
}


int pop_pilha(Pilha *p){
    int info;
    if(p->topo == 0){
        printf("\n pilha vasia");
        exit(1);
    } else {
        info = p->informacao[p->topo-1];
        p->topo--;
        return info;
    }
}

void pop2_pilha(Pilha *p, int *ret1, int *ret2){
    if(p->topo == 0){
        printf("\n pilha vasia");
        exit(1);
    } else {
        *ret1 = p->informacao[p->topo-1];
        p->topo--;
        *ret2 = p->informacao[p->topo-1];
        p->topo--;
    }
}

void popn(Pilha *p, int n){
    //printf("\n entrei na popN");
    int info;
    if(p->topo == 0){
        printf("\n pilha vasia");
        exit(1);
    } else {
        if(n>0){
            //printf("\n caso n>0");
            info = p->informacao[p->topo-1];
            printf("\n tirando o %d", info);
            p->topo--;
            popn(p,n-1);
        }
    }
}

void pilha_vazia(Pilha *p){
    if(p->topo == 0) printf("\nVazia");
    else {
        if(p == NULL) printf("\nNao criada");
        else printf("\nNao Vazia");
    }
}

void libera_pilha(Pilha *p){
    free(p);
    p=NULL;
}

void tamanho_pilha(Pilha *p){
    printf("\n tamanho = %d", p->topo);
}


Pilha* copia(Pilha *p){
    Pilha *p2;
    p2 = cria_pilha();

    p2->topo = p->topo;

    int i;
    for(i=0; i< p->topo; i++){
        p2->informacao[i] = p->informacao[i];
        //printf("\n .%d", p->informacao[i]);
    }

    print_pilha(p2);

    return p2;
}

void testa_igual(Pilha *p, Pilha *p2){
    int teste = 0;
    int i;
    for(i=0; i< p->topo; i++){
        if(!p2->informacao[i] == p->informacao[i]){
                teste = 1;
        }
    }
    if(teste == 0) {
            printf("\niguais");
    } else {
            printf("\nNao iguais");
    }
}

Pilha * calcPilha(Pilha *p, Pilha *p2){
    int op, i;
    Pilha *p3;
    p3 = cria_pilha();
    p3->topo = p->topo;

    printf("\n dig a operacao a ser feita entre as pilhas \n 1-som 2-sub  3-div 4-mul: ");
    scanf("%d", &op);
    switch(op){
    case 1:
        for(i=0; i< p->topo; i++){p3->informacao[i] = p->informacao[i] + p2->informacao[i];}
        break;
    case 2:
        for(i=0; i< p->topo; i++){p3->informacao[i] = p->informacao[i] - p2->informacao[i];}
        break;
    case 3:
        for(i=0; i< p->topo; i++){p3->informacao[i] = p->informacao[i] / p2->informacao[i];}
        break;
    case 4:
        for(i=0; i< p->topo; i++){p3->informacao[i] = p->informacao[i] * p2->informacao[i];}
        break;
    }
    /*
    for(i=0; i< p->topo; i++){
        p3->informacao[i] = p->informacao[i] + p2->informacao[i];
    }
    */

    print_pilha(p3);

    return p3;
}


