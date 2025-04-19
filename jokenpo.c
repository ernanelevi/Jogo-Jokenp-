#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int escolha_jogador, escolha_pc;
    srand(time(0));

    printf("===Jogo de Jokenpó===\n"); // título
    printf("Escolha uma opção:\n");    // menu do jogo
    printf("1. Pedra\n");
    printf("2. Papel\n");
    printf("3. Tesoura\n");

    printf("Escolha: ");
    scanf("%d", &escolha_jogador);

    escolha_pc = rand() % 3 + 1;

    switch (escolha_jogador) // opções do jogador
    {
    case 1:
        printf("Jogador: Pedra\n");
        break;
    case 2:
        printf("Jogador: Papel\n");
        break;
    case 3:
        printf("Jogador: Tesoura\n");
        break;

    default:
        printf("Opção inválida\n");
        break;
    }

    switch (escolha_pc) // opções pc
    {
    case 1:
        printf("PC: Pedra\n");
        break;
    case 2:
        printf("PC: Papel\n");
        break;
    case 3:
        printf("PC: Tesoura\n");
        break;
    }

    if (escolha_pc == escolha_jogador) // respostas possíveis
    {
        printf("===EMPATE===\n");
    }
    else if ((escolha_jogador == 1) && (escolha_pc == 3) ||
             (escolha_jogador == 2) && (escolha_pc == 1) ||
             (escolha_jogador == 3 && (escolha_pc == 2)))
    {
        printf("===VITÓRIA===\n");
    }
    else
    {
        printf("===DERROTA===\n");
    }
    return 0;
}