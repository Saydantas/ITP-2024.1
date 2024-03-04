//Calcule o consumo médio de um automóvel sendo fornecidos a distância total percorrida (em Km) e o total 
//de combustível gasto (em litros).

//Entrada
//O arquivo de entrada contém dois valores: um valor inteiro X representando a distância total percorrida 
//(em Km), e um valor real Y representando o total de combustível gasto, com um dígito após o ponto decimal.

//Saída
//Apresente o valor que representa o consumo médio do automóvel com 3 casas após a vírgula, seguido da mensagem "km/l".


#include <stdio.h>

int main() {
    int distancia_total;
    double combustivel_gasto, consumo_medio;

    // Leitura da distância total percorrida e do total de combustível gasto
    scanf("%d %lf", &distancia_total, &combustivel_gasto);

    // Cálculo do consumo médio
    consumo_medio = distancia_total / combustivel_gasto;

    // Impressão do resultado
    printf("%.3lf km/l\n", consumo_medio);

    return 0;
}
