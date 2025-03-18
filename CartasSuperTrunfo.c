#include <stdio.h>

int main() {
    
    char estado[50], Parana;
    char codigo[4], A01;
    char nome[50], Curitiba;
    int populacao, 1.773718;
    float area, 435.036 km²;
    double pib, 98 bilhoes;
    int pontos_turisticos, 120;

    printf("Cadastro de carta - Super Trunfo Países\n");

    printf("Digite o estado: \n");
    scanf("%s", estado);

    printf("Digite o codigo da carta: \n");
    scanf("%s", codigo);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome);

    printf("digite a populacao: \n");
    scanf("d", &populacao);

    printf("digite a area (em km²) \n");
    scanf("%f", &area);

    printf("digite o PIB (em bilhões): \n");
    scanf("%f", &pib);

    printf("digite o número de pontos turísticos: \n");
    scanf("d", &pontos_turisticos);

    printf("Curitiba");
    printf("Código: %s \n", codigo);
    printf("Nome: %s \n", nome);
    printf("População: %d \n", populacao);
    printf("Área: %f km² \n", area);
    printf("PIB: %f bilhões \n", pib);
    printf("Pontos Turísticos: %d \n", pontos_turisticos);


    return 0;
}
