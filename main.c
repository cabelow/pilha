#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main()
{
    printf("Pealha man!\n");

    Pilha *p, *p2, *p3;
    p = cria_pilha(); //recebe a criaçar alocada dinamicamente

    //push_pilha(p);

    int op;
    int loop = 1;
    int info, taman, ret1, ret2, n;
    while(loop == 1){
        printf("\n 0-sair 1-add 2-mostrar 3-retirar 4-tamanho \n 5-liberar 6-testar vazia 7-pop2 8-popN 9-copia 10-teste : ");
        scanf("%d", &op);
        switch(op){
        case 0:
            loop = 0;
            break;
        case 1:
            push_pilha(p);
            break;
        case 2:
            print_pilha(p);
            break;
        case 3:
            info = pop_pilha(p);
            printf("\n tirou o %d da pilha", info);
            break;
        case 4:
            tamanho_pilha(p);
            break;
        case 5:
            libera_pilha(p);
            break;
        case 6:
            pilha_vazia(p);
            break;
        case 7:
            pop2_pilha(p, &ret1, &ret2);
            printf("\n retirou %d e %d", ret1, ret2);
            break;
        case 8:
            printf("\n quantos quer tirar? ");
            scanf("%d", &n);
            popn(p, n);
            break;
        case 9:
            p2 = copia(p);
            break;
        case 10:
            testa_igual(p, p2);
            break;
        case 11:
            p3 = calcPilha(p, p2);
            break;
        }
    }

    return 0;
}
