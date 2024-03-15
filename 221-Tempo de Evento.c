/*Pedrinho está organizando um evento em sua Universidade. O evento deverá ser no mês de 
Abril, iniciando e terminando dentro do mês. O problema é que Pedrinho quer calcular o 
tempo que o evento vai durar, uma vez que ele sabe quando inicia e quando termina o evento.

Sabendo que o evento pode durar de poucos segundos a vários dias, você deverá ajudar 
Pedrinho a calcular a duração deste evento.

Entrada
Como entrada, na primeira linha vai haver a descrição “Dia”, seguido de um espaço e o 
dia do mês no qual o evento vai começar. Na linha seguinte, será informado o momento no 
qual o evento vai iniciar, no formato hh : mm : ss. Na terceira e quarta linha de entrada 
haverá outra informação no mesmo formato das duas primeiras linhas, indicando o término 
do evento.

Saída
Na saída, deve ser apresentada a duração do evento, no seguinte formato:

W dia(s)
X hora(s)
Y minuto(s)
Z segundo(s)

Obs: Considere que o evento do caso de teste para o problema tem duração mínima de 1 minuto.*/


#include <stdio.h>

int main() {
    char inicio_dia[5], fim_dia[5];
    int inicio_hh, inicio_mm, inicio_ss, fim_hh, fim_mm, fim_ss;
    int dias, horas, minutos, segundos;

    // Leitura das informações de início do evento
    scanf("%s %d", inicio_dia, &dias);
    scanf("%d : %d : %d", &inicio_hh, &inicio_mm, &inicio_ss);

    // Leitura das informações de término do evento
    scanf("%s %d", fim_dia, &dias);
    scanf("%d : %d : %d", &fim_hh, &fim_mm, &fim_ss);

    // Cálculo da diferença entre os tempos de início e término
    segundos = fim_ss - inicio_ss;
    minutos = fim_mm - inicio_mm;
    horas = fim_hh - inicio_hh;
    dias = 0;

    // Correção dos valores caso os segundos sejam negativos
    if (segundos < 0) {
        segundos += 60;
        minutos--;
    }
    // Correção dos valores caso os minutos sejam negativos
    if (minutos < 0) {
        minutos += 60;
        horas--;
    }
    // Correção dos valores caso as horas sejam negativas
    if (horas < 0) {
        horas += 24;
        dias--;
    }
    // Cálculo dos dias
    if (fim_dia[0] == 'D' && inicio_dia[0] == 'D') {
        dias += fim_dia[1] - inicio_dia[1];
    }

    // Impressão da duração do evento
    printf("%d dia(s)\n", dias);
    printf("%d hora(s)\n", horas);
    printf("%d minuto(s)\n", minutos);
    printf("%d segundo(s)\n", segundos);

    return 0;
}
