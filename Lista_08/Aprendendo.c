#include<stdio.h>

void main (void){
 int mes;
 float medLeit, maiorLeit,menorLeit, soma, leitAtual;
 mes=0;
 soma=0;
 maiorLeit=0;
 menorLeit=0;

 printf("Digite a leitura atual\n");
 scanf("%f",&leitAtual);
 maiorLeit=leitAtual;
 menorLeit=leitAtual;

    while(leitAtual != 0 && mes <=4)
        {

        soma = soma + leitAtual;

        if(leitAtual > maiorLeit)
            maiorLeit = leitAtual;
        if(leitAtual < menorLeit)
            menorLeit = leitAtual;
        mes = mes + 1;

        printf("Digite a leitura atual\n");
        scanf("%f",&leitAtual);


        }

    medLeit= soma/mes;
    printf("a medi e:%.2f\n",medLeit);
    printf("maior leitura e:%.2f\n",maiorLeit);
    printf("menor leit e:%.2f\n",menorLeit);
}
