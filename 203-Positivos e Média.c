/*Leia 6 valores. Em seguida, mostre quantos destes valores digitados foram positivos. 
Na próxima linha, deve-se mostrar a média de todos os valores positivos digitados, com 
um dígito após o ponto decimal.

Entrada
A entrada contém 6 números que podem ser valores inteiros ou de ponto flutuante. Pelo 
menos um destes números será positivo.

Saída
O primeiro valor de saída é a quantidade de valores positivos. A próxima linha deve mostrar 
a média dos valores positivos digitados.*/


#include <stdio.h>

int main() {
    float valor;
    int positivos = 0;
    float soma_positivos = 0;

    // Lê os 6 valores
    for (int i = 0; i < 6; i++) {
        scanf("%f", &valor);

        // Verifica se o valor é positivo
        if (valor > 0) {
            positivos++;
            soma_positivos += valor; // Adiciona o valor positivo à soma
        }
    }

    // Imprime a quantidade de valores positivos
    printf("%d valores positivos\n", positivos);

    // Calcula a média dos valores positivos
    float media = soma_positivos / positivos;

    // Imprime a média com um dígito após o ponto decimal
    printf("%.1f\n", media);

    return 0;
}
