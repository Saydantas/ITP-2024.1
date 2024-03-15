/*System of a Download é uma famosa banda de Hacker Metal! Certa vez, eles criaram um 
dispositivo, com seis botões, numerados de 0 a 5, e colocaram nesse dispositivo os 
seus 11 maiores sucessos. Para tocar uma destas músicas, é preciso pressionar dois 
botões. Com isso, os números destes dois botões são somados, e então toca-se a música 
correspondente ao número da soma, conforme a relação abaixo:

0 - PROXYCITY
1 - P.Y.N.G.
2 - DNSUEY!
3 - SERVERS
4 - HOST!
5 - CRIPTONIZE
6 - OFFLINE DAY
7 - SALT
8 - ANSWER!
9 - RAR?
10 - WIFI ANTENNAS


Por exemplo, se os botões pressionados forem 3 e 4, irá tocar a música 7 - SALT
Escreva um programa que, dados os dois botões que forem pressionados, determine qual 
música irá tocar.

Entrada
Um número inteiro C será informado, que será a quantidade de casos de teste. Cada caso 
tem dois valores inteiros, X e Y, representando quais botões foram pressionados.

Saída
Para cada caso de teste, imprima o nome da música correspondente.*/


#include <stdio.h>

int main() {
    int C;
    scanf("%d", &C);

    while (C--) {
        int X, Y;
        scanf("%d %d", &X, &Y);

        int soma = X + Y;
        switch (soma) {
            case 0:
                printf("PROXYCITY\n");
                break;
            case 1:
                printf("P.Y.N.G.\n");
                break;
            case 2:
                printf("DNSUEY!\n");
                break;
            case 3:
                printf("SERVERS\n");
                break;
            case 4:
                printf("HOST!\n");
                break;
            case 5:
                printf("CRIPTONIZE\n");
                break;
            case 6:
                printf("OFFLINE DAY\n");
                break;
            case 7:
                printf("SALT\n");
                break;
            case 8:
                printf("ANSWER!\n");
                break;
            case 9:
                printf("RAR?\n");
                break;
            case 10:
                printf("WIFI ANTENNAS\n");
                break;
        }
    }

    return 0;
}
