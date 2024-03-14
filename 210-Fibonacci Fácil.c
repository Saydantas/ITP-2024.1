/*A seguinte sequência de números 0 1 1 2 3 5 8 13 21... é conhecida como série de Fibonacci. Nessa 
sequência, cada número, depois dos 2 primeiros, é igual à soma dos 2 anteriores. Escreva um 
algoritmo que leia um inteiro N (N < 46) e mostre os N primeiros números dessa série.

Entrada
O arquivo de entrada contém um valor inteiro N (0 < N < 46).

Saída
Os valores devem ser mostrados na mesma linha, separados por um espaço em branco. Não deve haver 
espaço após o último valor.*/


#include <stdio.h>

int main() {
    int n, i;
    long long int fib[46];

    // Inicializando os dois primeiros números da série de Fibonacci
    fib[0] = 0;
    fib[1] = 1;

    // Lendo o valor de N
    scanf("%d", &n);

    // Calculando os números de Fibonacci
    for (i = 2; i < n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    // Imprimindo os N primeiros números da série de Fibonacci
    for (i = 0; i < n - 1; i++) {
        printf("%lld ", fib[i]);
    }
    
    // Imprimindo o último número sem espaço após ele
    printf("%lld\n", fib[n - 1]);

    return 0;
}
