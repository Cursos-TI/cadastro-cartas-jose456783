#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

// Biblioteca para entrada e saída de dados
#include <stdio.h>

// Biblioteca para manipulação de strings
#include <string.h>

int main() {
// Área para definição das variáveis para armazenar as propriedades das cidades

   // Variável que armazena a letra do estado
   char estado;

   // Vetor que armazena o código da carta
   char codigoCarta[4];

   // Vetor que armazena o nome da cidade
   char nomeDaCidade[50];

   // Quantidade de habitantes da cidade
   int habitantes;

   // Área da cidade em quilômetros quadrados
   float areaCidade;

   // Produto Interno Bruto da cidade
   float pib;

   // Quantidade de pontos turísticos
   int pontosTuristicos;

// Área para entrada de dados
   // Solicita a letra do estado
   printf("Digite a primeira letra do Estado: ");
   scanf(" %c", &estado);

   // Solicita o código da carta
   printf("Digite o código da carta: ");
   scanf("%s", codigoCarta);

   // Limpa o ENTER do buffer
   getchar();

   // Solicita o nome da cidade
   printf("Digite o nome da cidade: ");
   fgets(nomeDaCidade, 50, stdin);

   // Remove o ENTER capturado pelo fgets
   nomeDaCidade[strcspn(nomeDaCidade, "\n")] = '\0';

   // Solicita a população
   printf("Digite a quantidade de habitantes: ");
   scanf("%d", &habitantes);

   // Solicita a área da cidade
   printf("Digite a área da cidade: ");
   scanf("%f", &areaCidade);

   // Solicita o PIB
   printf("Digite o PIB da cidade: ");
   scanf("%f", &pib);

   // Solicita os pontos turísticos
   printf("Digite os pontos turísticos: ");
   scanf("%d", &pontosTuristicos);
  
 // Área para exibição dos dados da cidade
   // Exibe os dados cadastrados
   printf("\n--- Carta Cadastrada ---\n");
   printf("Estado: %c\n", estado);
   printf("Código: %s\n", codigoCarta);
   printf("Cidade: %s\n", nomeDaCidade);
   printf("População: %d\n", habitantes);
   printf("Área: %.2f km²\n", areaCidade);
   printf("PIB: %.2f\n", pib);
   printf("Pontos Turísticos: %d\n", pontosTuristicos);

return 0;
} 
