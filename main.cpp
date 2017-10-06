#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct cidade {
    char nome[50];
    int peso;
};

int insereCidade(struct cidade vet[], int qtd, char* nome, int peso);

int main(){
    struct cidade vetCidades[50];
    int qtd = 0;
    int opcao = 1;
    while (opcao == 1){
        printf("Informe o nome da cidade: ");
        fflush(stdin);
        char cidade[50];
        gets(cidade);
        printf("Informe o peso da cidade: ");
        int peso;
        scanf("%d", &peso);
        qtd = insereCidade(vetCidades, qtd, cidade, peso);
        printf("Deseja cadastrar outra cidade: 1-Sim 2-Nao");
        scanf("%d", &opcao);
    }
    printf("%s %d\n", vetCidades[0].nome, vetCidades[0].peso);
    printf("%s %d\n", vetCidades[1].nome, vetCidades[1].peso);

return 0;
}

void teste(){

}
int insereCidade(struct cidade vet[], int qtd, char* nome, int peso){
    cidade c;
    strcpy(c.nome, nome);
    c.peso = peso;
    vet[qtd] = c;
    qtd++;
    return qtd;
}
