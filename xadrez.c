#include <stdio.h>
#include <stdlib.h>

void imprimirBispo() // Defini o procedimento para imprimir a mensagem da peça Bispo.
{ int i; while (i <= 5){ int j = 1; while (j <= 1){ printf("Cima\n"); j++;}printf("Direita\n");i++;}
printf("\n");}
void imprimirRainha() // Defini o procedimento para imprimir a mensagem da peça Rainha.
{ int i; i = 0; do{ printf("Esquerda\n"); i++;} while(i < 8); printf("\n");}
void imprimirTorre() // Defini o procedimento para imprimir a mensagem da peça Torre.
{ int i;for (i = 0; i < 5; i++){printf("Direita\n");}printf("\n");}
void imprimirCavalo() // Defini o procedimento para imprimir a mensagem da peça Cavalo.
{ int i; int movimentoCavalo = 1; while (movimentoCavalo--){for(i = 0; i < 2; i++){printf("Cima\n");
}printf("Direita\n");}printf("\n");}

int main(){

int i, moverPeca, resultado; // Variáveis
// Início do jogo
printf("**********BEM VINDO AO JOGO DE XADREZ**********\n\n");

printf("Escolha uma peça para mover:\n\n");

printf("1. Bispo\n");
printf("2. Rainha\n");
printf("3. Torre\n");
printf("4. Cavalo\n\n");

scanf("%i", &moverPeca);
printf("\n");

switch (moverPeca)
{
case 1:
    printf("Você escolheu o Bispo:\n");
    imprimirBispo(i);
    break;
    case 2:
    printf("Você escolheu a Rainha:\n");
    imprimirRainha(i);
    break;
    case 3:
    printf("Você escolheu a Torre:\n");
    imprimirTorre(i); 
    break;
    case 4:
    printf("Você escolheu o Cavalo:\n");
    imprimirCavalo(i);
    break;

default:
    printf("Opção inválida!\n");
    break;
}

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
