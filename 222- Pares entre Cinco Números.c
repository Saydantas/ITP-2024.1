/*Faça um programa que leia 5 valores inteiros. 
Conte quantos destes valores digitados são 
pares e mostre esta informação.

Entrada
O arquivo de entrada contém 5 valores inteiros 
quaisquer.

Saída
Imprima a mensagem conforme o exemplo fornecido, 
indicando a quantidade de valores pares lidos.*/


#include <stdio.h>

int main() {
    int valores[5];
    int pares = 0;

    // Lendo os 5 valores inteiros
    for (int i = 0; i < 5; i++) {
        scanf("%d", &valores[i]);
        
        // Verificando se o valor lido é par
        if (valores[i] % 2 == 0) {
            pares++;
        }
    }

    // Imprimindo a quantidade de valores pares
    printf("%d valores pares\n", pares);

    return 0;
}
