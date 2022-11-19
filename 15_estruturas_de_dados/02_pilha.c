#include <stdio.h>
// CTRL + Z é um exemplo de pilha
#define TAMPILHA 10 

int pilha[TAMPILHA] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int topo = 0;

void lista_elementos() {
    printf("\n===== Pilha atual =====\n\n");

    for (int i = 0; i < TAMPILHA; i++) {
        printf("-");
        printf("|%d|", pilha[i]);
    }

    printf("\nTopo: %d", topo);
    printf("\n\n");
    
}

void push() {
    int val;
    printf("Informe o valor: \n");
    scanf("%d", &val);

    if(topo < TAMPILHA) {
        pilha[topo] = val;
        topo += 1;
        lista_elementos();
        printf("");
    } else {
        printf("Pilha cheia. \n\n");
    }
}

void pop() {
    if(topo >= 0) {
        pilha[topo - 1] = 0;
        topo -= 1;
        lista_elementos();
    } else {
        printf("Lista vazia. \n\n");
    }
}

void clear() {
    for (int i = 0; i < TAMPILHA; i++) {
        pilha[i] = 0;
    }
    topo = 0;
    
}

int main() {
    
    int opcao = 0;

    do{
        printf("Selecione a opção: \n\n");
        printf("[ 1 ] - Inserir (push): \n");
        printf("[ 2 ] - Remover (pop): \n");
        printf("[ 3 ] - Listar: \n");
        printf("[ 4 ] - Limpar a pilha: \n");
        printf("[ -1 ] - Sair. \n");
        printf("Opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            lista_elementos();
            break;
        case 4:
            clear();
        case -1:
            break;
        default:
            printf("Opção inválida\n\n");
        }
    }while (opcao != -1);    
    printf("\n\n");
    return 0;
}