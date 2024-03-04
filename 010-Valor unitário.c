//Neste problema, deve-se ler o código de uma peça 1, o número de peças 1, o valor unitário de cada peça 1, 
//o código de uma peça 2, o número de peças 2 e o valor unitário de cada peça 2. Após, calcule e mostre o valor a ser pago.

//Entrada
//O arquivo de entrada contém duas linhas de dados. Em cada linha haverá 3 valores, respectivamente dois inteiros 
//e um valor com 2 casas decimais.

//Saída
//A saída deverá ser uma mensagem conforme o exemplo fornecido abaixo, lembrando de deixar um espaço após os dois 
//pontos e um espaço após o "R$". O valor deverá ser apresentado com 2 casas após o ponto.


#include <stdio.h>

int main() {
    int codigo_peca1, numero_peca1, codigo_peca2, numero_peca2;
    double valor_unitario_peca1, valor_unitario_peca2, total_pagar;

    // Leitura dos dados da peça 1
    scanf("%d %d %lf", &codigo_peca1, &numero_peca1, &valor_unitario_peca1);

    // Leitura dos dados da peça 2
    scanf("%d %d %lf", &codigo_peca2, &numero_peca2, &valor_unitario_peca2);

    // Cálculo do total a pagar
    total_pagar = (numero_peca1 * valor_unitario_peca1) + (numero_peca2 * valor_unitario_peca2);

    // Impressão do resultado
    printf("VALOR A PAGAR: R$ %.2lf\n", total_pagar);

    return 0;
}
