#include <stdio.h>

int main() {
   // Carta 1 - São Paulo
      
// Declaração de Variáveis

    char Estado1;
    char Codigo1[10];
    char NomeCidade1[40];
    int Populacao1;
    // 12325000
    float Area1;
    // 1521.11
    float Pib1;
    // R$ 699.28
    int PontosT1;
    // 50
    
    printf("Digite o Estado da carta (uma letra de A-H): ");
    scanf("%c", &Estado1);
  
    printf("Digite o Código da cidade (Uma letra de A-H + 01, ex: A01): ");
    scanf("%s", &Codigo1);

    printf("Digite o nome da Cidade: ");
    scanf("%s", NomeCidade1);

    printf("Digite o número da População: ");
    scanf("%d", &Populacao1);

    printf("Digite a distância da Área (em km²): ");
    scanf("%f", &Area1);

    printf("Digite o Pib da cidade (em bilhões): ");
    scanf("%f", &Pib1);

    printf("Digite o número de Pontos Turísticos: ");
    scanf("%d", &PontosT1);



// Carta 2 - Rio de Janeiro
    
// Declaração de Variáveis
    char Estado2;
    char Codigo2[10];
    char NomeCidade2[40];
    int Populacao2;
    // 6748000
    float Area2;
    // 1200.25
    float Pib2;
    // R$ 300.50
    int PontosT2;
    // 30


    // Cadastrando as informações das cartas
    printf("Digite o Estado da carta (uma letra de B-H): ");
    scanf(" %c", &Estado2);
  
    printf("Digite o Código da cidade (uma letra de B-H + 02): ");
    scanf("%s", &Codigo2);

    printf("Digite o nome da Cidade: ");
    scanf("%s", NomeCidade2);

    printf("Digite o número da População: ");
    scanf("%d", &Populacao2);

    printf("Digite a distância da Área (em km2): ");
    scanf("%f", &Area2);

    printf("Digite o Pib da cidade (em bilhões): ");
    scanf("%f", &Pib2);

    printf("Digite o número de Pontos Turísticos: ");
    scanf("%d", &PontosT2);


    // Resultado - Carta 1

    printf("Carta 1\n");
    printf("O Estado é: %c\n", Estado1);
    printf("O Código da cidade é: %s\n", Codigo1);
    printf("O nome da cidade é: %s\n", NomeCidade1);
    printf("A População da cidade é: %d\n", Populacao1);
    printf("A Área da cidade é: %.2f km²\n", Area1);
    printf("O Pib é: R$ %.2f bilhões de reais\n", Pib1);
    printf("Os Pontos Turísticos da cidade são: %d\n", PontosT1);

    // Resultado - Carta 2

    printf("Carta 2\n");
    printf("O Estado é: %c\n", Estado2);
    printf("O Código da cidade é: %s\n", Codigo2);
    printf("O nome da cidade é: %s\n", NomeCidade2);
    printf("A População da cidade é: %d\n", Populacao2);
    printf("A Área da cidade é: %.2f km²\n", Area2);
    printf("O Pib é: R$ %.2f bilhões de reais\n", Pib2);
    printf("Os Pontos Turísticos da cidade são: %d\n", PontosT2);

    // Finalização!
    printf("Cadastro das cartas concluído!");

    
}
