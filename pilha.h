typedef struct pilha Pilha;

Pilha* cria_pilha();

void push_pilha(Pilha *p);

void print_pilha(Pilha *p);

int pop_pilha(Pilha *p);

void pop2_pilha(Pilha *p, int *ret1, int *ret2);

void popn(Pilha *p, int n);

void pilha_vazia(Pilha *p);

void libera_pilha(Pilha *p);

void tamanho_pilha(Pilha *p);

Pilha* copia(Pilha *p);

void testa_igual(Pilha *p, Pilha *p2);

Pilha * calcPilha(Pilha *p, Pilha *p2);
