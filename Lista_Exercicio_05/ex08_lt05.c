/*8) Um determinado material radioativo perde metade de sua massa a cada 50 segundos. Dada a massa inicial
em quilogramas construa um algoritmo que calcule e exiba o tempo necessário para que respectiva massa
fique inferior a 0,5 gramas. O tempo deve ser exibido no formato mmss(mm - minutos ss – segundos).   */

#include <stdio.h>

int main() {

    int timemin, timeseg, time;

    float massa, massagr;

    time = 0;

    printf("Digite a massa inicial (em kg): ");
    scanf("%f", &massa);

    massagr = massa * 1000;

    while (massagr > 0.5) {

        massagr = massagr / 2;

        time = time + 50;

    }

    timemin = time / 60;

    timeseg = time % 60;

    printf("\nTempo calculado:\n");
    printf("%d minutos e %d segundos\n", timemin, timeseg);

    return 0;
}
