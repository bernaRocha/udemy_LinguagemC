#include <stdio.h>
// fopen(nome do arquivo, forma de abertura dele)
// w - abre para escrita, se já existir o conteúdo será sobreescrito
// r - apenas leitura 
// wa abrir o arquivo para add conteúdo, se já existir o conteúdo será adicionado nas linhas abaixo
int main(){
    FILE *arq;

    arq = fopen("arquivo.txt", "w");

    fclose(arq);
    return 0;
}