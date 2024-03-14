/*Leia um valor inteiro N. Este valor será a quantidade 
de valores inteiros X que serão lidos em seguida.
Mostre quantos destes valores X estão dentro do intervalo 
[10,20] e quantos estão fora do intervalo, mostrando essas 
informações.

Entrada
A primeira linha da entrada contém um valor inteiro N 
(N < 10000), que indica o número de casos de teste.
Cada caso de teste a seguir é um valor inteiro X (-107 < X <107).
 

Saída
Para cada caso, imprima quantos números estão dentro (in) e 
quantos valores estão fora (out) do intervalo.*/


#include <stdio.h>

int main() {
    int N, X, dentro = 0, fora = 0;

    // Leitura do valor N
    scanf("%d", &N);

    // Iteração para ler os valores X e verificar se estão dentro ou fora do intervalo
    for (int i = 0; i < N; i++) {
        scanf("%d", &X);

        // Verifica se X está dentro do intervalo [10, 20]
        if (X >= 10 && X <= 20) {
            dentro++;
        } else {
            fora++;
        }
    }

    // Imprime a quantidade de valores dentro e fora do intervalo
    printf("%d in\n", dentro);
    printf("%d out\n", fora);

    return 0;
}
