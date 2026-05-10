#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

  // Área para definição das variáveis para armazenar as propriedades das cidades
 // Área para entrada de dados
// Área para exibição dos dados da cidade
int main() {

   char estado;
   char codigoCarta[4];
   char nomeDaCidade[50];
   int habitantes;
   float areaCidade;
   float pib;
   int pontosTuristicos;

   printf("Digite a primeira letra do seu Estado: ");
   scanf(" %c", &estado);

   printf("Digite o codigo da carta: ");
   scanf("%s", codigoCarta);

   getchar();

   printf("Digite o nome da cidade: ");
   fgets(nomeDaCidade, 50, stdin);

   nomeDaCidade[strcspn(nomeDaCidade, "\n")] = '\0';

   printf("Digite a quantidade de habitantes: ");
   scanf("%d", &habitantes);

   printf("Digite a area da cidade: ");
   scanf("%f", &areaCidade);

   printf("Digite o valor do PIB: ");
   scanf("%f", &pib);

   printf("Digite a quantidade de pontos turisticos: ");
   scanf("%d", &pontosTuristicos);

   printf("\nCarta 1\n");
   printf("Estado: %c\n", estado);
   printf("Codigo: %s\n", codigoCarta);
   printf("Nome da Cidade: %s\n", nomeDaCidade);
   printf("Populacao: %d\n", habitantes);
   printf("Area: %.2f km²\n", areaCidade);
   printf("PIB: %.2f bilhoes de reais\n", pib);
   printf("Pontos Turisticos: %d\n", pontosTuristicos);

   //Calculando a densidade Populacional e o PIB percapta.
   float densidadePopulacional = habitantes / areaCidade;

   float pibPerCapita = pib / habitantes;

   printf("Densidade Populacional: %.2f\n", densidadePopulacional);

   printf("PIB per Capita: %.2f\n", pibPerCapita);
  

   printf("Digite a primeira letra do seu Estado: ");
   scanf(" %c", &estado);

   printf("Digite o codigo da carta: ");
   scanf("%s", codigoCarta);

   getchar();

   printf("Digite o nome da cidade: ");
   fgets(nomeDaCidade, 50, stdin);

   nomeDaCidade[strcspn(nomeDaCidade, "\n")] = '\0';

   printf("Digite a quantidade de habitantes: ");
   scanf("%d", &habitantes);

   printf("Digite a area da cidade: ");
   scanf("%f", &areaCidade);

   printf("Digite o valor do PIB: ");
   scanf("%f", &pib);

   printf("Digite a quantidade de pontos turisticos: ");
   scanf("%d", &pontosTuristicos);


   printf("\nCarta 2\n");
   printf("Estado: %c\n", estado);
   printf("Codigo: %s\n", codigoCarta);
   printf("Nome da Cidade: %s\n", nomeDaCidade);
   printf("Populacao: %d\n", habitantes);
   printf("Area: %.2f km²\n", areaCidade);
   printf("PIB: %.2f bilhoes de reais\n", pib);
   printf("Pontos Turisticos: %d\n", pontosTuristicos);
    
   //Calculando a densidade Populacional e o PIB percapta.
   float densidadePopulacional = habitantes / areaCidade;

   float pibPerCapita = pib / habitantes;

   printf("Densidade Populacional: %.2f\n", densidadePopulacional);

   printf("PIB per Capita: %.2f\n", pibPerCapita);
 

return 0;
} 
