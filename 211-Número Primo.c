/*Na matemática, um Número Primo é aquele que pode ser dividido somente 
por 1 (um) e por ele mesmo. Por exemplo, o número 7 é primo, pois pode 
ser dividido apenas pelo número 1 e pelo número 7.

Entrada
A entrada contém vários casos de teste. A primeira linha da entrada contém 
um inteiro N (1 ≤ N ≤ 100), indicando o número de casos de teste da entrada. 
Cada uma das N linhas seguintes contém um valor inteiro X (1 < X ≤ 107), 
que pode ser ou não, um número primo.

Saída
Para cada caso de teste de entrada, imprima a mensagem “X eh primo” ou “X nao 
eh primo”, de acordo com a especificação fornecida.*/


#include <stdio.h>

// Função para verificar se um número é primo
int ehPrimo(int x) {
    if (x <= 1) {
        return 0; // Não é primo se for menor ou igual a 1
    }
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) {
            return 0; // Não é primo se for divisível por algum número diferente de 1 e ele mesmo
        }
    }
    return 1; // É primo
}

int main() {
    int n, x;

    // Lendo o número de casos de teste
    scanf("%d", &n);

    // Verificando cada caso de teste
    for (int i = 0; i < n; i++) {
        // Lendo o número
        scanf("%d", &x);
        
        // Verificando se o número é primo e imprimindo o resultado
        if (ehPrimo(x)) {
            printf("%d eh primo\n", x);
        } else {
            printf("%d nao eh primo\n", x);
        }
    }

    return 0;
}
