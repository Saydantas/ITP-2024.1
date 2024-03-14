/*Faça um programa que mostre os números pares entre 1 e 100, inclusive.

Entrada
Neste problema extremamente simples de repetição não há entrada.

Saída
Imprima todos os números pares entre 1 e 100, inclusive se for o caso, um em cada linha.*/

#include <stdio.h>

int main() {
    // Itera de 1 a 100
    for (int i = 1; i <= 100; i++) {
        // Verifica se o número é par
        if (i % 2 == 0) {
            // Imprime o número par
            printf("%d\n", i);
        }
    }

    return 0;
}
