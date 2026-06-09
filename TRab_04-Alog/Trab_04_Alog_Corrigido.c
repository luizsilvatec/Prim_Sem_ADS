/*4o. Trabalho de Algoritmos e Lógica de Programação
Data de Entrega:   08/06/2026
Natureza do Trabalho: individual
Objetivo:  Utilizar  as estruturas de programação sequencial, condicional e repetitiva, a estrutura de dados matriz,
a estrutura de dados registro e função
Forma de Entrega:  O trabalho de ser entregue de forma manuscrita constando o nome do aluno e a data de
entrega. O trabalho deve ser entregue para o professor no início da aula da disciplina
1) Uma loja de eletrônicos, com doze vendedores, deseja controlar as vendas mensais de cada um deles. Para
tal monte um algoritmo que crie um registro com os seguintes dados: nome do vendedor, setor do vendedor
(1, 2 ou 3), valor total vendido no mês e o valor da meta mensal. O algoritmo deve:
 Criar uma função chamada calcComissao que tem como parâmetros de entrada o valor da venda
do vendedor e o valor de sua meta. Esta função deve calcular e retornar o valor da comissão onde
a comissão será de 5% sobre o valor total vendido para quem atingiu a meta e 2%  sobre o valor
total vendido para quem não atingiu a meta.
  Fazer a entrada de dados para cada um dos vendedores
 A exibição do nome e da comissão de cada vendedor (utilize a função calcComissao)
 O cálculo e a exibição do número e do faturamento de cada setor
 O cálculo e a exibição do faturamento total da loja
 A quantidade de vendedores que não atingiram sua meta de vendas */



#include <stdio.h>
#include <string.h>

// Estrutura de registro
typedef struct {
    char nome[50]; // string de 50 para aceitar nomes completos
    int setor;
    float volVV;
    float valMeta;
} DadosVendedor;

// Função calcComissao
float calcComissao(float volVV, float valMeta) {
    float valComissao;
    if (volVV >= valMeta) {
        valComissao = volVV * 0.05;
    } else {
        valComissao = volVV * 0.02;
    }
    return valComissao;
}

int main() {

    DadosVendedor cadVdor[3];
    int cont, vendSemMeta;
    float FatSetor1, FatSetor2, FatSetor3, FatTotal;

    FatSetor1 = 0.0;
    FatSetor2 = 0.0;
    FatSetor3 = 0.0;
    FatTotal = 0.0;
    vendSemMeta = 0;


    for (cont = 0; cont <= 2; cont++) {

        scanf("%s", cadVdor[cont].nome);
        scanf("%d", &cadVdor[cont].setor);
        scanf("%f", &cadVdor[cont].volVV);
        scanf("%f", &cadVdor[cont].valMeta);


        printf("%s %.2f\n", cadVdor[cont].nome, calcComissao(cadVdor[cont].volVV, cadVdor[cont].valMeta));



        // Estrutura Condicional dos Setores (Acumulando volVV bruto)
        if (cadVdor[cont].setor == 1) {
            FatSetor1 = FatSetor1 + cadVdor[cont].volVV;
        } else if (cadVdor[cont].setor == 2) {
            FatSetor2 = FatSetor2 + cadVdor[cont].volVV;
        } else {
            FatSetor3 = FatSetor3 + cadVdor[cont].volVV;
        }

        // Checagem de metas antes de fechar o laço
        if (cadVdor[cont].volVV < cadVdor[cont].valMeta) {
            vendSemMeta = vendSemMeta + 1;
        }
    }

    // Cálculo do faturamento total fora do laço
    FatTotal = FatSetor1 + FatSetor2 + FatSetor3;


    printf("\nOs faturamentos dos setores ficarao assim: Setor 1 = %.2f  Setor 2 = %.2f  Setor 3 = %.2f \n  O faturamento total ficou em:%.2f\nO numero de vendedores que nao atingiram a meta foi de:%.2d vendedores \n", FatSetor1, FatSetor2, FatSetor3, FatTotal, vendSemMeta);

    return 0;
}
