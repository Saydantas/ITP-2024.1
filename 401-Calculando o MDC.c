/*Considere o método a seguir para calcular o Máximo Divisor Comum de dois números 
x e y: - Se y=0, MDC(x,y) = x. - Caso contrário, calcule o MDC de y e o resto da 
divisão x % y. Implemente uma função para calcular o MDC como descrito acima.

Entrada
10
2

Saída
MDC(10 , 2) = 2*/

#include <stdio.h>

int mdc(int x, int y) {
    if (y == 0) {
        return x;
    } else {
        return mdc(y, x % y);
    }
}

int main() {
    int x, y;
    scanf("%d %d", &x, &y);

    printf("MDC(%d, %d) = %d\n", x, y, mdc(x, y));

    return 0;
}
