/*Em cada fase do jogo do Pula Sapo você deve conduzir seu anfíbio através de uma 
sequência de canos de alturas diferentes até chegar a salvo no cano mais à direita. 
Entretanto, o sapo só consegue sobreviver se a diferença de altura entre canos consecutivos 
for de, no máximo, a altura do pulo do sapo. Caso a altura do cano seguinte seja muito alta, 
o sapo bate no cano e cai. Se a altura do cano seguinte for muito baixa, o sapo não aguenta 
a queda. O sapo sempre começa em cima do cano mais à esquerda.

Neste jogo, a distância entre os canos é irrelevante, ou seja, o sapo sempre consegue alcançar 
o próximo cano com um pulo.



Você deve escrever um programa que, dadas as alturas dos canos e a altura do pulo do sapo, 
mostra se a fase do jogo pode ser vencida ou não.

Entrada
A entrada é dada em duas linhas. A primeira tem dois inteiros positivos P e N, a altura do pulo 
do sapo e o número de canos (1 ≤ P ≤ 5 e 2 ≤ N ≤ 100). A segunda linha tem N inteiros positivos 
que indicam as alturas dos canos ordenados da esquerda para a direita. Não há altura maior do que 10.

Saída
A saída é dada em uma única linha. Se o sapo pode chegar no cano mais à direita, escreva "YOU WIN". 
Se o sapo não consegue, escreva "GAME OVER".*/


#include <stdio.h>
#include <stdlib.h>

// Função para verificar se o sapo pode vencer o jogo
char* jogo_pula_sapo(int P, int* alturas, int N) {
    for (int i = 0; i < N - 1; i++) {
        int diferenca = abs(alturas[i+1] - alturas[i]);
        if (diferenca > P) {
            return "GAME OVER";
        }
    }
    return "YOU WIN";
}

int main() {
    int P, N;
    
    // Lê a altura do pulo do sapo e o número de canos
    scanf("%d %d", &P, &N);
    
    // Aloca memória para armazenar as alturas dos canos
    int* alturas = (int*)malloc(N * sizeof(int));
    
    // Lê as alturas dos canos
    for (int i = 0; i < N; i++) {
        scanf("%d", &alturas[i]);
    }
    
    // Verifica se o jogo pode ser vencido
    char* resultado = jogo_pula_sapo(P, alturas, N);
    
    // Imprime o resultado
    printf("%s\n", resultado);
    
    // Libera a memória alocada
    free(alturas);
    
    return 0;
}
