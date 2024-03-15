/*A Federação Gaúcha de Futebol contratou você para escrever um programa 
para fazer uma estatística do resultado de vários GRENAIS. Escreva um 
programa para ler o número de gols marcados pelo Inter e pelo Grêmio em 
um GRENAL. Logo após escrever a mensagem "Novo grenal (1-sim 2-nao)" e 
solicitar uma resposta. Se a resposta for 1, o algoritmo deve ser executado 
novamente solicitando o número de gols marcados pelos times em uma nova 
partida, caso contrário deve ser encerrado imprimindo:

- Quantos GRENAIS fizeram parte da estatística.
- O número de vitórias do Inter.
- O número de vitórias do Grêmio.
- O número de Empates.
- Uma mensagem indicando qual o time que venceu o maior número de GRENAIS 
(ou "Nao houve vencedor", caso termine empatado).

Entrada
O arquivo de entrada contém 2 valores inteiros, correspondentes aos gols 
marcados pelo Inter e pelo Grêmio respectivamente. Em seguida háverá um 
inteiro (1 ou 2), correspondente à repetição do programa.

Saída
Após cada leitura dos gols, deve ser impressa a mensagem 
"Novo grenal (1-sim 2-nao)". Quando o algoritmo for encerrado devem 
ser mostradas as estatísticas conforme a descrição apresentada acima. 
Obs: a palavra "Gremio" deve ser impressa sem acento, conforme o exemplo abaixo.*/


#include <stdio.h>

int main() {
    int grenais = 0, inter_vitorias = 0, gremio_vitorias = 0, empates = 0;
    int gols_inter, gols_gremio, continuar;
    
    do {
        // Leitura dos gols marcados pelo Inter e pelo Grêmio
        scanf("%d %d", &gols_inter, &gols_gremio);
        
        // Contagem do número de GRENAIS
        grenais++;
        
        // Verificação do vencedor ou empate
        if (gols_inter > gols_gremio) {
            inter_vitorias++;
        } else if (gols_gremio > gols_inter) {
            gremio_vitorias++;
        } else {
            empates++;
        }
        
        // Solicitação para continuar ou encerrar o programa
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &continuar);
    } while (continuar == 1);
    
    // Impressão das estatísticas
    printf("%d grenais\n", grenais);
    printf("Inter:%d\n", inter_vitorias);
    printf("Gremio:%d\n", gremio_vitorias);
    printf("Empates:%d\n", empates);
    
    // Verificação do time que venceu o maior número de GRENAIS
    if (inter_vitorias > gremio_vitorias) {
        printf("Inter venceu mais\n");
    } else if (gremio_vitorias > inter_vitorias) {
        printf("Gremio venceu mais\n");
    } else {
        printf("Nao houve vencedor\n");
    }
    
    return 0;
}
