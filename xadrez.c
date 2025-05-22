#include <stdio.h>

int main(){

int i = 1;                  // Variável
printf("Mover o Bispo;\n\n"); // Nome da peça
while (i <= 5)              // Move o Bispo para a direita:
{
int j = 1;           
while (j <= 1)              // Move o Bispo para cima:
{
printf("Cima\n");           // Imprime a direção do movimento
j++;                 
}  
printf("Direita\n");        // Imprime a direção do movimento
i++;                 
}

printf("\n");
printf("Mover a Rainha:\n\n");// Nome da peça

i = 0;
do                          // Move a Rainha 8 casas para Esquerda:
{
printf("Esquerda\n");       // Imprime a direção do movimento
i++;
}while(i < 8);

printf("\n");
printf("Mover a Torre:\n\n"); // Nome da peça

for (i = 0; i < 5; i++)     // Move a Torre 5 casas para a direita:
{
printf("Direita\n");        // Imprime a direção do movimento
}

printf("\n");
printf("Mover o Cavalo:\n\n");

int pecaCavalo = 1;

while (pecaCavalo--)
{
for(i = 0; i < 2; i++){     // Move o cavalo duas casas para cima e uma para a direita:
printf("Cima\n");           // Imprime a direção do movimento
}
printf("Direita\n");        // Imprime a direção do movimento
}
printf("\n");

return 0;
}
// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.


    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.
