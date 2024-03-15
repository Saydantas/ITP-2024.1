/*Leia 5 valores Inteiros. A seguir mostre quantos valores 
digitados foram pares, quantos valores digitados foram ímpares, 
quantos valores digitados foram positivos e quantos valores 
digitados foram negativos.

Entrada
O arquivo de entrada contém 5 valores inteiros quaisquer.

Saída
Imprima a mensagem conforme o exemplo fornecido, uma mensagem por 
linha, não esquecendo o final de linha após cada uma.*/


#include <stdio.h>

int main() {
    int valores[5];
    int pares = 0, impares = 0, positivos = 0, negativos = 0;

    // Lendo os 5 valores inteiros
    for (int i = 0; i < 5; i++) {
        scanf("%d", &valores[i]);
        
        // Verificando se o valor é par ou ímpar
        if (valores[i] % 2 == 0) {
            pares++;
        } else {
            impares++;
        }

        // Verificando se o valor é positivo ou negativo
        if (valores[i] > 0) {
            positivos++;
        } else if (valores[i] < 0) {
            negativos++;
        }
    }

    // Imprimindo os resultados
    printf("%d valor(es) par(es)\n", pares);
    printf("%d valor(es) impar(es)\n", impares);
    printf("%d valor(es) positivo(s)\n", positivos);
    printf("%d valor(es) negativo(s)\n", negativos);

    return 0;
}
