/*Com base na tabela abaixo, escreva um programa que leia o código de um item e a 
quantidade deste item. A seguir, calcule e mostre o valor da conta a pagar.

Codigo       Especificação       Preço
  1         Cachorro quente     R$ 4.00
  2            X-Salada         R$ 4.50
  3            X-Bacon          R$ 5.00
  4         Torrada Simples     R$ 2.00
  5          Refrigerante       R$ 1.50

Entrada
O arquivo de entrada contém dois valores inteiros correspondentes ao código e 
à quantidade de um item conforme tabela acima.

Saída
O arquivo de saída deve conter a mensagem "Total: R$ " seguido pelo valor a 
ser pago, com 2 casas após o ponto decimal.*/


#include <stdio.h>

int main() {
    int codigo, quantidade;
    double preco, total;

    // Leitura do código e da quantidade do item
    scanf("%d %d", &codigo, &quantidade);

    // Verificação do código e cálculo do preço
    switch (codigo) {
        case 1:
            preco = 4.00;
            break;
        case 2:
            preco = 4.50;
            break;
        case 3:
            preco = 5.00;
            break;
        case 4:
            preco = 2.00;
            break;
        case 5:
            preco = 1.50;
            break;
        default:
            printf("Código inválido\n");
            return 1;
    }

    // Cálculo do total a pagar
    total = preco * quantidade;

    // Impressão do resultado
    printf("Total: R$ %.2lf\n", total);

    return 0;
}
