/*Leia a hora inicial e a hora final de um jogo. A seguir calcule a duração do jogo, sabendo 
que o mesmo pode começar em um dia e terminar em outro, tendo uma duração mínima de 1 hora e máxima de 24 horas.

Entrada
A entrada contém dois valores inteiros representando a hora de início e a hora de fim do jogo.

Saída
Apresente a duração do jogo conforme exemplo abaixo.*/


#include <stdio.h>

int main() {
    int hora_inicio, hora_fim, duracao;

    // Leitura das horas de início e fim do jogo
    scanf("%d %d", &hora_inicio, &hora_fim);

    // Cálculo da duração do jogo
    if (hora_inicio < hora_fim) {
        duracao = hora_fim - hora_inicio;
    } else {
        duracao = 24 - hora_inicio + hora_fim;
    }

    // Impressão da duração do jogo
    printf("O JOGO DUROU %d HORA(S)\n", duracao);

    return 0;
}
