/*9) Construa um algoritmo que faça a entrada de dados de uma sequência de números inteiros positivos. Ao
final deve ser exibido o maior e o menor número da respectiva sequência. A entrada de dados deve ser
finalizada com a entrada do valor 0 (zero).  */

#include <stdio.h>

int main() {

    int entrada, maior, menor;

    printf("Digite um numero: ");
    scanf("%d", &entrada);

    maior = entrada;

    menor = entrada;

    while (entrada > 0) {

        if (entrada > maior) {
            maior = entrada;
        }

        else if (entrada < menor) {
            menor = entrada;
        }

        printf("Digite um numero: ");
        scanf("%d", &entrada);


    }

    printf("\nMaior: %d", maior);
    printf("\nMenor: %d\n", menor);

    return 0;
}
