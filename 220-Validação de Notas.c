/*Faça um programa que leia as notas referentes às duas avaliações de 
um aluno. Calcule e imprima a média semestral. Faça com que o algoritmo 
só aceite notas válidas (uma nota válida deve pertencer ao intervalo 
[0,10]). Cada nota deve ser validada separadamente.

Entrada
A entrada contém vários valores reais, positivos ou negativos. O programa 
deve ser encerrado quando forem lidas duas notas válidas.

Saída
Se uma nota inválida  for lida, deve ser impressa a mensagem "nota invalida".
Quando duas notas válidas forem lidas, deve ser impressa a mensagem "media = 
" seguido do valor do cálculo. O valor deve ser apresentado com duas casas após 
o ponto decimal.*/


#include <stdio.h>

int main() {
    double nota1, nota2;
    int notas_validas = 0;
    double notas[2];

    while (notas_validas < 2) {
        scanf("%lf", &nota1);
        if (nota1 >= 0 && nota1 <= 10) {
            notas[notas_validas] = nota1;
            notas_validas++;
        } else {
            printf("nota invalida\n");
        }

        if (notas_validas < 2) {
            scanf("%lf", &nota2);
            if (nota2 >= 0 && nota2 <= 10) {
                notas[notas_validas] = nota2;
                notas_validas++;
            } else {
                printf("nota invalida\n");
            }
        }
    }

    double media = (notas[0] + notas[1]) / 2.0;
    printf("media = %.2lf\n", media);

    return 0;
}
