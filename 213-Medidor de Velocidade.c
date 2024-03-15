/*A corrida de lesmas é um esporte que cresceu muito nos últimos anos, 
fazendo com que várias pessoas dediquem suas vidas tentando capturar 
lesmas velozes, e treina-las para faturar milhões em corridas pelo mundo. 
Porém a tarefa de capturar lesmas velozes não é uma tarefa muito fácil, 
pois praticamente todas as lesmas são muito lentas. Cada lesma é 
classificada em um nível dependendo de sua velocidade:


Nível 1: Se a velocidade é menor que 10 cm/h .
Nível 2: Se a velocidade é maior ou igual a 10 cm/h e menor que 20 cm/h .
Nível 3: Se a velocidade é maior ou igual a 20 cm/h .


Sua tarefa é identificar qual nível de velocidade da lesma mais veloz de um 
grupo de lesmas.

Entrada
A entrada consiste de múltiplos casos de teste, e cada um consiste em duas 
linhas: A primeira linha contém um inteiro L (1 ≤ L ≤ 500) representando o 
número de lesmas do grupo, e a segunda linha contém L inteiros Vi (1 ≤ Vi ≤ 50) 
representando as velocidades de cada lesma do grupo.

A entrada termina com o fim do arquivo (EOF).

Saída
Para cada caso de teste, imprima uma única linha indicando o nível de velocidade 
da lesma mais veloz do grupo.*/


#include <stdio.h>

int main() {
    int L, Vi, max_speed;
    
    while (scanf("%d", &L) != EOF) {
        // Inicializa a velocidade máxima como zero para cada caso de teste
        max_speed = 0;
        
        // Percorre as velocidades das lesmas para encontrar a velocidade máxima
        for (int i = 0; i < L; i++) {
            scanf("%d", &Vi);
            if (Vi > max_speed) {
                max_speed = Vi;
            }
        }
        
        // Determina o nível de velocidade da lesma mais veloz
        if (max_speed < 10) {
            printf("1\n");
        } else if (max_speed < 20) {
            printf("2\n");
        } else {
            printf("3\n");
        }
    }
    
    return 0;
}
