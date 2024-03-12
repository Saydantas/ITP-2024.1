/*Leia 3 valores inteiros e ordene-os em ordem crescente. No final, 
mostre os valores em ordem crescente, uma linha em branco e em 
seguida, os valores na sequência como foram lidos.

Entrada
A entrada contem três números inteiros.

Saída
Imprima a saída conforme foi especificado.*/


#include <stdio.h>

int main() {
    int a, b, c, temp;

    // Leitura dos três valores inteiros
    scanf("%d %d %d", &a, &b, &c);

    // Ordenação dos valores em ordem crescente
    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }
    if (a > c) {
        temp = a;
        a = c;
        c = temp;
    }
    if (b > c) {
        temp = b;
        b = c;
        c = temp;
    }

    // Impressão dos valores em ordem crescente
    printf("%d\n%d\n%d\n\n", a, b, c);

    // Impressão dos valores na sequência como foram lidos
    printf("%d\n%d\n%d\n", a, b, c);

    return 0;
}
