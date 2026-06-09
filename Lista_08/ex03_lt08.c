#include <stdio.h>
#include <string.h>

// Assinatura da Função (Prototipação)
float CalcPesoIdeal(float altura, char sexo);

// --- MÓDULO PRINCIPAL ---
int main() {
    // Declaração de Variáveis
    char nome[50];
    char sexo;
    float peso;
    float altura;
    int cont;

    // Estrutura de repetição para 10 pessoas (de 0 até 9)
    for (cont = 0; cont <= 3; cont++) {
        printf("\n--- Pessoa %d ---\n", cont + 1);

        printf("Digite o nome: ");
        scanf("%s", nome);

        printf("Digite a altura (ex: 1.75): ");
        scanf("%f", &altura);

        printf("Digite o peso atual: ");
        scanf("%f", &peso);

        printf("Digite o sexo (M/F): ");
        scanf(" %c", &sexo); // O espaço antes de %c serve para ignorar o 'Enter' anterior

        // Escreve o resultado chamando a função
        printf("Nome: %s | Peso Ideal: %.2f kg\n", nome, CalcPesoIdeal(altura, sexo));
    }

    return 0;
}

// --- FUNÇÃO ---
float CalcPesoIdeal(float altura, char sexo) {
    float PesoIdeal = 0;

    // Verifica se é masculino (aceita maiúsculo ou minúsculo)
    if (sexo == 'M' || sexo == 'm') {
        PesoIdeal = (72.7 * altura) - 58;
    }
    // Verifica se é feminino (aceita maiúsculo ou minúsculo)
    else if (sexo == 'F' || sexo == 'f') {
        PesoIdeal = (62.1 * altura) - 44.7;
    }

    return PesoIdeal;
}
