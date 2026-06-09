#include <stdio.h>

// Definição da estrutura do produto (Registro)
typedef struct {
    int codProd;
    char descr[50];
    int qtdeEstog;
    int estoqMin;
    float PresVenda;
} DadosProduto;

int main() {
    // Declaração do vetor (Matriz) de 30 elementos e variáveis de controle
    DadosProduto cadProd[2];
    int cont;
    int ProdTotBaixo = 0;
    float Preco;

    // Laço de repetição de 0 até 29
    for (cont = 0; cont < 1; cont++) {
        // Leitura dos dados do produto
        scanf("%d", &cadProd[cont].codProd);

        // Limpa o buffer do teclado antes de ler a string (descrição)
        scanf(" %[^\n]s", cadProd[cont].descr);

        scanf("%d", &cadProd[cont].qtdeEstog);
        scanf("%d", &cadProd[cont].estoqMin);
        scanf("%f", &Preco); // Lê o preço na variável auxiliar igual ao seu papel

        // 1. Verifica se está abaixo do estoque mínimo
        if (cadProd[cont].qtdeEstog < cadProd[cont].estoqMin) {
            ProdTotBaixo = ProdTotBaixo + 1;
        }

        // 2. Blocos de teste do preço corrigidos (condições independentes)
        if (Preco <= 800) {
            cadProd[cont].PresVenda = Preco * 1.10;
        }
        if (Preco > 800 && Preco <= 1500) {
            cadProd[cont].PresVenda = Preco * 1.15;
        }
        if (Preco > 1500) {
            cadProd[cont].PresVenda = Preco * 1.20;
        }
    }

    // 3. Exibe o total acumulado uma única vez ao final
    printf("%d\n", ProdTotBaixo);

    return 0;
}
