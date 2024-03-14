/*Leia um conjunto não determinado de pares de valores M e N 
(parar quando algum dos valores for menor ou igual a zero). Para 
cada par lido, mostre a sequência do menor até o maior e a soma 
dos inteiros consecutivos entre eles (incluindo o N e M).

Entrada
O arquivo de entrada contém um número não determinado de valores 
M e N. A última linha de entrada vai conter um número nulo ou negativo.

Saída
Para cada dupla de valores, imprima a sequência do menor até o maior 
e a soma deles, conforme exemplo abaixo.*/


#include <stdio.h>

int main() {
    int valores[100][2]; // Vetor para armazenar os pares de valores
    int quantidade = 0; // Contador para a quantidade de pares lidos

    // Loop para ler os pares de valores até que um dos valores seja menor ou igual a zero
    while (1) {
        // Leitura dos valores M e N
        scanf("%d %d", &valores[quantidade][0], &valores[quantidade][1]);

        // Verifica se algum dos valores é menor ou igual a zero
        if (valores[quantidade][0] <= 0 || valores[quantidade][1] <= 0) {
            break; // Sai do loop
        }

        quantidade++; // Incrementa o contador de quantidade
    }

    // Processamento e impressão das sequências e somas
    for (int i = 0; i < quantidade; i++) {
        // Determina qual é o menor e qual é o maior
        int menor = (valores[i][0] < valores[i][1]) ? valores[i][0] : valores[i][1];
        int maior = (valores[i][0] > valores[i][1]) ? valores[i][0] : valores[i][1];

        // Inicializa a soma dos inteiros consecutivos entre os valores
        int soma = 0;

        // Imprime a sequência do menor até o maior e calcula a soma
        for (int j = menor; j <= maior; j++) {
            printf("%d ", j);
            soma += j;
        }

        // Imprime a soma dos inteiros consecutivos
        printf("Sum=%d\n", soma);
    }

    return 0;
}
