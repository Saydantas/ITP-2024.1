/*Maria acabou de iniciar seu curso de graduação na faculdade de medicina 
e precisa de sua ajuda para organizar os experimentos de um laboratório 
o qual ela é responsável. Ela quer saber no final do ano, quantas cobaias 
foram utilizadas no laboratório e o percentual de cada tipo de cobaia utilizada.

Este laboratório em especial utiliza três tipos de cobaias: sapos, ratos e 
  coelhos. Para obter estas informações, ela sabe exatamente o número de 
experimentos que foram realizados, o tipo de cobaia utilizada e a quantidade 
de cobaias utilizadas em cada experimento.

Entrada
A primeira linha de entrada contém um valor inteiro N que indica os vários 
casos de teste que vem a seguir. Cada caso de teste contém um inteiro Quantia 
(1 ≤ Quantia ≤ 15) que representa a quantidade de cobaias utilizadas e um 
caractere Tipo ('C', 'R' ou 'S'), indicando o tipo de cobaia (R:Rato S:Sapo C:Coelho).

Saída
Apresente o total de cobaias utilizadas, o total de cada tipo de cobaia utilizada 
e o percentual de cada uma em relação ao total de cobaias utilizadas, sendo que o 
percentual deve ser apresentado com dois dígitos após o ponto.*/


#include <stdio.h>

int main() {
    int N;
    int total = 0, coelhos = 0, ratos = 0, sapos = 0;
    char tipo;
    int quantidade;

    // Leitura do número de casos de teste
    scanf("%d", &N);

    // Iteração sobre os casos de teste
    for (int i = 0; i < N; i++) {
        // Leitura da quantidade e tipo de cobaia
        scanf("%d %c", &quantidade, &tipo);

        // Atualização dos contadores de acordo com o tipo de cobaia
        if (tipo == 'C') {
            coelhos += quantidade;
        } else if (tipo == 'R') {
            ratos += quantidade;
        } else if (tipo == 'S') {
            sapos += quantidade;
        }

        // Atualização do total de cobaias
        total += quantidade;
    }

    // Cálculo dos percentuais
    double percentual_coelhos = (coelhos * 100.0) / total;
    double percentual_ratos = (ratos * 100.0) / total;
    double percentual_sapos = (sapos * 100.0) / total;

    // Impressão dos resultados
    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", coelhos);
    printf("Total de ratos: %d\n", ratos);
    printf("Total de sapos: %d\n", sapos);
    printf("Percentual de coelhos: %.2lf %%\n", percentual_coelhos);
    printf("Percentual de ratos: %.2lf %%\n", percentual_ratos);
    printf("Percentual de sapos: %.2lf %%\n", percentual_sapos);

    return 0;
}
