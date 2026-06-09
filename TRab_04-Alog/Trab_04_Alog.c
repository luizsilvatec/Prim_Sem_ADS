#include <stdio.h>
#include <string.h>

// Definição da estrutura igual ao seu REGISTRO
typedef struct {
    char nome[50];
    int setor;
    float volVV;
    float valMeta;
} DadosVendedor;

// FUNÇÃO calcComissao exatamente como na sua folha 1
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
    // Declarações e Matriz [0..11] de registros da folha 2
    DadosVendedor cadVdor[2];
    int cont, vendSemMeta;
    float FatSetor1, FatSetor2, FatSetor3, FatTotal;

    // Inicializações da folha 2
    FatSetor1 = 0;
    FatSetor2 = 0;
    FatSetor3 = 0;
    FatTotal = 0;
    vendSemMeta = 0;

    // Laço PARA cont de 0 ate 11 FACA
    for (cont = 0; cont <= 1; cont++) {
        // Comandos LEIA da folha 2
        // Nota: scanf("%s") lê palavras simples para o nome
        scanf("%s", cadVdor[cont].nome);
        scanf("%d", &cadVdor[cont].setor);
        scanf("%f", &cadVdor[cont].volVV);
        scanf("%f", &cadVdor[cont].valMeta);

        // ESCREVA do nome e chamada da função da folha 2
        printf("%s %.2f\n", cadVdor[cont].nome, calcComissao(cadVdor[cont].volVV, cadVdor[cont].valMeta));

        // Estrutura de SE / SENAO SE da folha 3
        if (cadVdor[cont].setor == 1) {
            FatSetor1 = FatSetor1 + calcComissao(cadVdor[cont].volVV, cadVdor[cont].valMeta);
        } else if (cadVdor[cont].setor == 2) {
            FatSetor2 = FatSetor2 + calcComissao(cadVdor[cont].volVV, cadVdor[cont].valMeta);
        } else {
            FatSetor3 = FatSetor3 + calcComissao(cadVdor[cont].volVV, cadVdor[cont].valMeta);
        }

        // Linha do FatTotal mantida na mesma posição da sua última foto (dentro do laço)
        FatTotal = FatSetor1 + FatSetor2 + FatSetor3;

        // Verificação de metas da folha 3
        if (cadVdor[cont].volVV < cadVdor[cont].valMeta) {
            vendSemMeta = vendSemMeta + 1;
        }
    } // Fim do laço para

    // ESCREVA final consolidado exatamente fora do laço
    printf("%.2f %.2f %.2f %.2f %.2d\n", FatSetor1, FatSetor2, FatSetor3, FatTotal, vendSemMeta);

    return 0;
}
