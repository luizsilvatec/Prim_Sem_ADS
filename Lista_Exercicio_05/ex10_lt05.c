/*10) Construa um algoritmo que tenha como entrada de dados as leituras pluviométricas mensais no período de
um ano de uma determinada região. Ao final exiba:
 Média das leituras
 Maior leitura obtida
 Menor leitura obtida
A entrada de dados deve ser finalizada quando informado 0 (zero) para a leitura pluviométrica. */


#include <stdio.h>

int main() {

    int mes;
    float leitAtual, medleit, maiorleit, menorleit, acc;

    // Inicialização do acumulador
    acc = 0;

    for (mes = 1; mes <= 12; mes++) {


        printf("Digite a leitura do mes %d: ", mes);
        scanf("%f", &leitAtual);


        if (leitAtual != 0) {


            if (mes == 1) {
                maiorleit = leitAtual;
                menorleit = leitAtual;
            }

            else {

                if (leitAtual > maiorleit) {
                    maiorleit = leitAtual;
                }

                if (leitAtual < menorleit) {
                    menorleit = leitAtual;
                }
            }


            acc = acc + leitAtual;
        }

    }

    medleit = acc / (mes-1);

    printf("\nMedia das leituras: %.2f", medleit);
    printf("\nMaior leitura: %.2f", maiorleit);
    printf("\nMenor leitura: %.2f\n", menorleit);

    return 0;
}
