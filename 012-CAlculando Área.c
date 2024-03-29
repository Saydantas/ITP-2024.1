//Escreva um programa que leia três valores com ponto flutuante de dupla precisão: A, B e C. Em seguida, calcule e mostre:
//a) a área do triângulo retângulo que tem A por base e C por altura.
//b) a área do círculo de raio C. (pi = 3.14159)
//c) a área do trapézio que tem A e B por bases e C por altura.
//d) a área do quadrado que tem lado B.
//e) a área do retângulo que tem lados A e B.

//Entrada
//O arquivo de entrada contém três valores com um dígito após o ponto decimal.

//Saída
//O arquivo de saída deverá conter 5 linhas de dados. Cada linha corresponde a uma das áreas descritas acima, sempre com mensagem 
//correspondente e um espaço entre os dois pontos e o valor. O valor calculado deve ser apresentado com 3 dígitos após o ponto decimal.


#include <stdio.h>

int main() {
    double A, B, C, area_tri_retangulo, area_circulo, area_trapezio, area_quadrado, area_retangulo;
    double pi = 3.14159;

    // Leitura dos valores de A, B e C
    scanf("%lf %lf %lf", &A, &B, &C);

    // Cálculo da área do triângulo retângulo
    area_tri_retangulo = (A * C) / 2.0;

    // Cálculo da área do círculo
    area_circulo = pi * C * C;

    // Cálculo da área do trapézio
    area_trapezio = ((A + B) * C) / 2.0;

    // Cálculo da área do quadrado
    area_quadrado = B * B;

    // Cálculo da área do retângulo
    area_retangulo = A * B;

    // Impressão dos resultados
    printf("TRIANGULO: %.3lf\n", area_tri_retangulo);
    printf("CIRCULO: %.3lf\n", area_circulo);
    printf("TRAPEZIO: %.3lf\n", area_trapezio);
    printf("QUADRADO: %.3lf\n", area_quadrado);
    printf("RETANGULO: %.3lf\n", area_retangulo);

    return 0;
}
