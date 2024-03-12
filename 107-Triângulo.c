/*Leia 3 valores reais (A, B e C) e verifique se eles formam ou não um triângulo. 
Em caso positivo, calcule o perímetro do triângulo e apresente a mensagem:


Perimetro = XX.X


Em caso negativo, calcule a área do trapézio que tem A e B como base e C como 
altura, mostrando a mensagem


Area = XX.X

Entrada
A entrada contém três valores reais.

Saída
O resultado deve ser apresentado com uma casa decimal.*/


#include <stdio.h>

int main() {
    double A, B, C;

    // Leitura dos três valores reais
    scanf("%lf %lf %lf", &A, &B, &C);

    // Verificação se os valores formam um triângulo
    if (A + B > C && B + C > A && A + C > B) {
        // Se formam um triângulo, calculamos o perímetro
        double perimetro = A + B + C;
        printf("Perimetro = %.1lf\n", perimetro);
    } else {
        // Se não formam um triângulo, calculamos a área do trapézio
        double area = ((A + B) * C) / 2;
        printf("Area = %.1lf\n", area);
    }

    return 0;
}
