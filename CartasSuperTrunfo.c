#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Luiz Mauricio Lemos Gonçalves Junior

int main() {

    
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;

     //Usuário 01 irá digitar a população.
     printf("Digite o número da População Carta 01: ");
     scanf("%d", &populacao);
     printf("População: %d\n", populacao);

     // Usuário 01 irá digitar a área total da cidade.
     printf("Digite a área total da cidade Carta 01:");
     scanf("%f", &area);
     printf("Área: %f\n", area);

     // Usuário 01 irá digitar o PIB.
     printf("Digite o PIB da cidade Carta 01:");
     scanf("%e", &pib);
     printf("PIB: %e\n", pib);

     // usuário 01 irá digitar os pontos turisticos.
     printf("Digite a quatindade de pontos turísticos Carta 01:");
     scanf("%d", &pontos_turisticos);
     printf("Pontos Turísticos: %d\n", pontos_turisticos);

         //Começará o usuário 02

         //Usuário 02 irá digitar a população.
         printf("Digite o número da População Carta 02: ");
         scanf("%d", &populacao);
         printf("População: %d\n", populacao);

         // Usuário 02 irá digitar a área total da cidade.
         printf("Digite a área total da cidade Carta 02:");
         scanf("%f", &area);
         printf("Área: %f\n", area);

         // Usuário 02 irá digitar o PIB.
         printf("Digite o PIB da cidade Carta 02:");
         scanf("%e", &pib);
         printf("PIB: %e\n", pib);

         // usuário 02 irá digitar os pontos turisticos.
         printf("Digite a quatindade de pontos turísticos Carta 02:");
         scanf("%d", &pontos_turisticos);
         printf("Pontos Turísticos: %d\n", pontos_turisticos);

    return 0;
}
