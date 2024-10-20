#include <stdio.h>

// Estrutura para representar uma cidade
struct Cidade {
    char codigo[4];
    char nome[50];
    int populacao;
    float area;
    float PIB;
    int pontos_turisticos;
};

// Função para cadastrar uma cidade
void cadastrarCidade(struct Cidade *cidade) {
    printf("Digite o código da cidade: ");
    scanf("%s", cidade->codigo);
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade->nome);
    printf("Digite a população da cidade: ");
    scanf("%d", &cidade->populacao);
    printf("Digite a área da cidade: ");
    scanf("%f", &cidade->area);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &cidade->PIB);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &cidade->pontos_turisticos);
}

// Função para exibir os dados de uma cidade
void exibirCidade(struct Cidade cidade) {
    printf("\nCidade: %s\n", cidade.nome);
    printf("Código: %s\n", cidade.codigo);
    printf("População: %d habitantes\n", cidade.populacao);
    printf("Área: %.2f km²\n", cidade.area);
    printf("PIB: %.2f milhões\n", cidade.PIB);
    printf("Pontos Turísticos: %d\n", cidade.pontos_turisticos);
}

int main() {
    struct Cidade cidades[32]; // Vetor para armazenar as 32 cartas
    int i;

    for (i = 0; i < 32; i++) {
        printf("\nCadastro da cidade %d:\n", i+1);
        cadastrarCidade(&cidades[i]);
    }

    printf("\nDados das cidades cadastradas:\n");
    for (i = 0; i < 32; i++) {
        exibirCidade(cidades[i]);
    }

    return 0;
}
