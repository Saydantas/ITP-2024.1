/*Leia 2 valores inteiros X e Y. A seguir, calcule e mostre a soma dos 
números impares entre eles.

Entrada
O arquivo de entrada contém dois valores inteiros.

Saída
O programa deve imprimir um valor inteiro. Este valor é a soma dos 
valores ímpares que estão entre os valores fornecidos na entrada que 
deverá caber em um inteiro.*/


#include <stdio.h>

int main() {
    int X, Y;
    int soma_impares = 0;

    // Leitura dos valores X e Y
    scanf("%d %d", &X, &Y);

    // Garante que X seja menor que Y
    if (X > Y) {
        int temp = X;
        X = Y;
        Y = temp;
    }

    // Itera de X até Y
    for (int i = X + 1; i < Y; i++) {
        // Verifica se o número é ímpar
        if (i % 2 != 0) {
            soma_impares += i; // Adiciona o número ímpar à soma
        }
    }

    // Imprime a soma dos números ímpares
    printf("%d\n", soma_impares);

    return 0;
}
