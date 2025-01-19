#include <stdio.h>


//Teste Fernando dos Santos Kelly

int main() {
                    
    char codigo[4]; // Declaração da variável que armazenará o código da carta
    int populacao, pontos_turisticos; // Declaração das variáveis que armazenarão a população e o número de pontos turísticos
    float area, pib; // Declaração das variáveis que armazenarão a área e o PIB

    // Cadastro da carta 
    printf("Cadastro da carta :\n"); // Exibe uma mensagem indicando o cadastro da carta
    printf("População: "); // Solicita a entrada da população
    scanf("%d", &populacao); // Lê a população do usuário
    printf("Área: "); // Solicita a entrada da área
    scanf("%f", &area); // Lê a área do usuário
    printf("PIB: "); // Solicita a entrada do PIB
    scanf("%f", &pib); // Lê o PIB do usuário
    printf("Número de pontos turísticos: "); // Solicita a entrada do número de pontos turísticos
    scanf("%d", &pontos_turisticos); // Lê o número de pontos turísticos do usuário
    printf("\nCarta A01:\n"); // Exibe uma mensagem indicando os dados da carta A01
    printf("População: %d\n", populacao); // Exibe a população cadastrada
    printf("Área: %.2f km²\n", area); // Exibe a área cadastrada
    printf("PIB: %.2f bilhões\n", pib); // Exibe o PIB cadastrado
    printf("Número de pontos turísticos: %d\n", pontos_turisticos); // Exibe o número de pontos turísticos cadastrados


          
    return 0;
}

