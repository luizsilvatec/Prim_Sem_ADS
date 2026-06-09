#include <stdio.h>

// ==========================================
// FUNÇÃO (Baseada na primeira folha enviada)
// ==========================================
float calcGratif(int cod, float salBase, float tserv) {

    // real: valGrat;
    float valGrat;

    // se cod DIV 100 = 1 e tserv <= 5 então
    if (cod / 100 == 1 && tserv <= 5) {
        valGrat = salBase * 0.025;
    }
    // senão se cod DIV 100 = 1 e tserv > 5 então
    else if (cod / 100 == 1 && tserv > 5) {
        valGrat = salBase * 0.045;
    }
    // senão se cod DIV 100 = 2 e tserv <= 5 então
    else if (cod / 100 == 2 && tserv <= 5) {
        valGrat = salBase * 0.035;
    }
    // senão se cod DIV 100 = 2 e tserv > 5 então
    else if (cod / 100 == 2 && tserv > 5) {
        valGrat = salBase * 0.055;
    }
    // senão se cod DIV 100 = 3 e tserv <= 5 então
    else if (cod / 100 == 3 && tserv <= 5) {
        valGrat = salBase * 0.040;
    }
    // senão se cod DID 100 = 3 e tserv > 5 então
    else if (cod / 100 == 3 && tserv > 5) {
        valGrat = salBase * 0.065;
    }

    // retorna (valGrat);
    return valGrat;
}

// ==========================================
// MÓDULO PRINCIPAL (Baseado na segunda folha)
// ==========================================
int main() {
    // inteiro: cod;
    int cod;
    // real: tserv, salBase, totPag;
    float tserv, salBase, totPag;

    // totPag <- 0;
    totPag = 0;

    // LEIA (cod, salBase, tserv);
    printf("Digite o codigo, salario base e tempo de servico: ");
    scanf("%d %f %f", &cod, &salBase, &tserv);

    // enquanto cod > 0 FACA
    while (cod > 0) {

        // ESCREVA (calcGratif(cod, salBase, tserv));
        printf("Gratificacao: R$ %.2f\n", calcGratif(cod, salBase, tserv));

        // totPag <- totPag + (calcGratif(cod, salBase, tserv));
        totPag = totPag + calcGratif(cod, salBase, tserv);

        // LEIA (cod, salBase, tserv);
        printf("Digite o proximo codigo, salario base e tempo de servico: ");
        scanf("%d %f %f", &cod, &salBase, &tserv);
    } // fim

    // ESCREVA (totPag);
    printf("Total Pago: R$ %.2f\n", totPag);

    return 0; // FIM
}

