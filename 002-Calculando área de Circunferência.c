//A fórmula para calcular a área de uma circunferência é: area = π . raio2. 
//Considerando para este problema que π = 3.14159:

//- Efetue o cálculo da área, elevando o valor de raio ao quadrado e multiplicando por π.

//Entrada
//A entrada contém um valor de ponto flutuante (dupla precisão), no caso, a variável raio.

//Saída
//Apresentar a mensagem "A=" seguido pelo valor da variável area, conforme exemplo abaixo, 
//com 4 casas após o ponto decimal. Utilize variáveis de dupla precisão (double). Como todos 
//os problemas, não esqueça de imprimir o fim de linha após o resultado.




#include <stdio.h>

int main() {
    double raio, area, pi;

    // Definição do valor de pi
    pi = 3.14159;

    // Leitura do valor do raio
    scanf("%lf", &raio);

    // Cálculo da área
    area = pi * raio * raio;

    // Impressão do resultado com 4 casas decimais
    printf("A=%.4lf\n", area);

    return 0;
}
