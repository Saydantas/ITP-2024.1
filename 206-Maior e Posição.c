/*Leia 100 valores inteiros. Apresente então o maior valor lido e a 
posição dentre os 100 valores lidos.

Entrada
O arquivo de entrada contém 100 números inteiros, positivos e distintos.

Saída
Apresente o maior valor lido e a posição de entrada, conforme exemplo abaixo.*/


#include <stdio.h>

int main() {
    int maior = 0;
    int posicao_maior = 0;
    int numero;

    for (int i = 1; i <= 100; i++) {
        scanf("%d", &numero);

        if (numero > maior) {
            maior = numero;
            posicao_maior = i;
        }
    }
    printf("%d\n", maior);
    printf("%d\n", posicao_maior);

    return 0;
}
