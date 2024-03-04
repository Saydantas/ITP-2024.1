//Faça um programa que leia o nome de um vendedor, o seu salário fixo e o total de vendas 
//efetuadas por ele no mês (em dinheiro). Sabendo que este vendedor ganha 15% de comissão 
//sobre suas vendas efetuadas, informar o total a receber no final do mês, com duas casas decimais.

//Entrada
//O arquivo de entrada contém um texto (primeiro nome do vendedor) e 2 valores de dupla precisão 
//(double) com duas casas decimais, representando o salário fixo do vendedor e montante total 
//das vendas efetuadas por este vendedor, respectivamente.

//Saída
//Imprima o total que o funcionário deverá receber, conforme exemplo fornecido.


#include <stdio.h>

int main() {
    char nome_vendedor[50];
    double salario_fixo, total_vendas, total_receber;

    // Leitura dos dados
    scanf("%s %lf %lf", nome_vendedor, &salario_fixo, &total_vendas);

    // Cálculo da comissão (15% das vendas)
    double comissao = 0.15 * total_vendas;

    // Cálculo do total a receber (salário fixo + comissão)
    total_receber = salario_fixo + comissao;

    // Impressão do resultado
    printf("TOTAL = R$ %.2lf\n", total_receber);

    return 0;
}
