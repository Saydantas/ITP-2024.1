/*Faça um programa que leia 6 valores. Estes valores serão somente 
negativos ou positivos (desconsidere os valores nulos). A seguir, 
mostre a quantidade de valores positivos digitados.

Entrada
Seis valores, negativos e/ou positivos.

Saída
Imprima uma mensagem dizendo quantos valores positivos foram lidos.*/

#include <stdio.h>

int main() {
    float valor;
    int positivos = 0;

    // Lê os 6 valores
    for (int i = 0; i < 6; i++) {
        scanf("%f", &valor);

        // Verifica se o valor é positivo e diferente de zero
        if (valor > 0) {
            positivos++;
        }
    }

    // Imprime a quantidade de valores positivos
    printf("%d valores positivos\n", positivos);

    return 0;
}
