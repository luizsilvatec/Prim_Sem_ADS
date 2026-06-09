#include <stdio.h>

// ========================================================
// 1. FUNÇÃO: PesoGravidade (Equivalente à sua função)
// ========================================================
float PesoGravidade(float peso, int idPlan) {
    float pesoPlan;

    if (idPlan == 1) {
        pesoPlan = peso * 0.37;
    } else {
        if (idPlan == 2) {
            pesoPlan = peso * 0.88;
        } else {
            if (idPlan == 3) {
                pesoPlan = peso * 0.38;
            } else {
                if (idPlan == 4) {
                    pesoPlan = peso * 2.64;
                } else {
                    if (idPlan == 5) {
                        pesoPlan = peso * 1.15;
                    } else {
                        pesoPlan = peso * 1.17; // Caso seja o 6
                    }
                }
            }
        }
    }

    return pesoPlan;
}

// ========================================================
// 2. MÓDULO PRINCIPAL: main (Equivalente ao seu caderno)
// ========================================================
int main() {
    int idPlan;
    float peso;

    // Primeiro: LEIA (peso, idPlan);
    printf("Digite o peso (ou 0 para sair) e o ID do planeta: ");
    scanf("%f %d", &peso, &idPlan);

    // ENQUANTO peso > 0 FACA
    while (peso > 0) {

        // ESCREVA ( PesoGravidade(peso, idPlan) );
        printf("Peso no planeta escolhido: %.2f\n\n", PesoGravidade(peso, idPlan));

        // LEIA (peso, idPlan);
        printf("Digite o peso (ou 0 para sair) e o ID do planeta: ");
        scanf("%f %d", &peso, &idPlan);
    }

    return 0;
}
