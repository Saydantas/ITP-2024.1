/*Leia quatro números (N1, N2, N3, N4), cada um deles com uma casa decimal, correspondente 
às quatro notas de um aluno. Calcule a média com pesos 2, 3, 4 e 1, respectivamente, 
para cada uma destas notas e mostre esta média acompanhada pela mensagem "Media: ". Se 
esta média for maior ou igual a 7.0, imprima a mensagem "Aluno aprovado.". Se a média 
calculada for inferior a 5.0, imprima a mensagem "Aluno reprovado.". Se a média calculada 
for um valor entre 5.0 e 6.9, inclusive estas, o programa deve imprimir a mensagem "Aluno 
em exame.".

No caso do aluno estar em exame, leia um valor correspondente à nota do exame obtida pelo 
aluno. Imprima então a mensagem "Nota do exame: " acompanhada pela nota digitada. Recalcule 
a média (some a pontuação do exame com a média anteriormente calculada e divida por 2). e 
imprima a mensagem "Aluno aprovado." (caso a média final seja 5.0 ou mais ) ou "Aluno 
reprovado.", (caso a média tenha ficado 4.9 ou menos). Para estes dois casos (aprovado ou 
reprovado após ter pego exame) apresente na última linha uma mensagem "Media final: " seguido 
da média final para esse aluno.

Entrada
A entrada contém quatro números de ponto flutuante correspendentes as notas dos alunos.

Saída
Todas as respostas devem ser apresentadas com uma casa decimal. As mensagens devem ser impressas 
conforme a descrição do problema. Não esqueça de imprimir o enter após o final de cada linha, 
caso contrário obterá "Presentation Error".*/


#include <stdio.h>

int main() {
    double N1, N2, N3, N4, media, nota_exame, media_final;

    // Leitura das notas
    scanf("%lf %lf %lf %lf", &N1, &N2, &N3, &N4);

    // Cálculo da média
    media = (N1 * 2 + N2 * 3 + N3 * 4 + N4) / 10;

    // Impressão da média
    printf("Media: %.1lf\n", media);

    // Verificação do status do aluno
    if (media >= 7.0) {
        printf("Aluno aprovado.\n");
    } else if (media < 5.0) {
        printf("Aluno reprovado.\n");
    } else {
        printf("Aluno em exame.\n");

        // Leitura da nota do exame
        scanf("%lf", &nota_exame);

        // Impressão da nota do exame
        printf("Nota do exame: %.1lf\n", nota_exame);

        // Recálculo da média final
        media_final = (media + nota_exame) / 2;

        // Verificação do status do aluno após o exame
        if (media_final >= 5.0) {
            printf("Aluno aprovado.\n");
        } else {
            printf("Aluno reprovado.\n");
        }

        // Impressão da média final
        printf("Media final: %.1lf\n", media_final);
    }

    return 0;
}
