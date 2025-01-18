#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
                /*Definição das cidades
                de A a H
                */
                char estados[] = "ABCDEFGH";
                //populaçao, inteiro
                int populacao[8][4];
                //Area, ponto flutuante
                float area[8][4];
                //PIB, ponto flutuante
                float pib[8][4];
                //Pontos Turisticos, numero inteiro
                int pontos_turisticos[8][4];

                //Entrada e exibiçao dos dados solicitados
                printf("Cadastro da cidade %c1 ", estados[0]); 
                printf("População: "); 
                scanf("%d", &populacao[0][0]); 
                printf("Área: "); 
                scanf("%f", &area[0][0]); 
                printf("PIB: "); 
                scanf("%f", &pib[0][0]); 
                printf("Número de pontos turísticos: "); 
                scanf("%d", &pontos_turisticos[0][0]);

                printf("Populacao:" );
                printf ("Area:");
                printf("PIB:");
                printf('Numero de pontos turisticos:");

    return 0;
}
