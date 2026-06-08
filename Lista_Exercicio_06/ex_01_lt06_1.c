/*1. Um usuário registra seus gastos mensais durante 12 meses em uma matriz
unidimensional. Desenvolva um algoritmo que:
a) Calcule o total gasto no ano
b) Calcule a média dos gastos
*/

#include <stdio.h>

int main() {

    float matGastos[12];

    int mes;

    float totGastos, medgastos;

    totGastos = 0;

    for (mes = 0; mes <= 11; mes++) {

        printf("Digite o gasto do mes %d: ", mes);
        scanf("%f", &matGastos[mes]);


        totGastos = totGastos + matGastos[mes];


    }

    float medGastos = totGastos / 12;

    printf("\nTotal de gastos: %.2f", totGastos);
    printf("\nMedia de gastos: %.2f\n", medGastos);

    return 0;
}
