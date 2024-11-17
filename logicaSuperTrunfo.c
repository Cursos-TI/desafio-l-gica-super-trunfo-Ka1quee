#include <stdio.h>

int main()
{

    char nomeA[40], nomeB[40];
    int codCidadeA, pibA, pontosTuristicosA, codCidadeB, pibB, pontosTuristicosB;
    int populacaoA, populacaoB;
    float areaA, areaB;

    // Cadastro da carta 1

    printf("Informações carta 1: \n");

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nomeA);

    printf("Digite o código da cidade: \n");
    scanf("%d", &codCidadeA);

    printf("Digite a população da cidade: \n");
    scanf("%d", &populacaoA);

    printf("Digite a área  da cidade: \n");
    scanf("%f", &areaA);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pibA);

// Exibindo informações da carta 1:

    printf("Informações da carta 1: \n");
    printf("Nome: %s \n Codigo: %d \n Populacao: %d \n Área: %f \n PIB: %f \n \n", nomeA, codCidadeA, populacaoA, areaA, pibA);

    // Cadastro da carta 1

    printf("Informações carta 2: \n");

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nomeB);

    printf("Digite o código da cidade: \n");
    scanf("%d", &codCidadeB);

    printf("Digite a população da cidade: \n");
    scanf("%d", &populacaoB);

    printf("Digite a área  da cidade: \n");
    scanf("%f", &areaB);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pibB);

    // Exibindo informações da carta 2:

    printf("Informações da carta 2: \n");
    printf("Nome: %s \n Codigo: %d \n Populacao: %d \n Área: %f \n PIB: %f ", nomeB, codCidadeB, populacaoB, areaB, pibB);

    printf("Resultados finais: \n");

    // Validações

    if (populacaoA < populacaoB || areaA > areaB || pibA > pibB)
    {
        printf("A cidade %s da carta 1 é a vencedora! \n", nomeA);
    }
    else
    {
        printf("A cidade %s da carta 2 é a vencedora! \n", nomeB);
    }

    return 0;
}