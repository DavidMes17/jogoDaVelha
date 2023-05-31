#include "../bibliotecas.h"

int main (void){
setlocale(LC_ALL,"pt_br");
int jogadorPontos = 0, cpuPontos = 0, jogada, jogadaCPU;
    srand(time(NULL));

    while (jogadorPontos < 3 && cpuPontos < 3) {
        printf("Escolha sua jogada:\n");
        printf("0 - Pedra\n");
        printf("1 - Papel\n");
        printf("2 - Tesoura\n");
        scanf("%d", &jogada);

        if (jogada < 0 || jogada > 2) {
            printf("Jogada inválida! Tente novamente.\n");
            continue;
        }

        jogadaCPU = rand() % 3;

        if ((jogada == 0 && jogadaCPU == 2) || (jogada == 1 && jogadaCPU == 0) || (jogada == 2 && jogadaCPU == 1)) {
            printf("Você venceu esta rodada!\n");
            jogadorPontos++;
        } else if (jogada == jogadaCPU) {
            printf("Rodada empatada!\n");
        } else {
            printf("CPU venceu esta rodada!\n");
            cpuPontos++;
        }

        printf("Placar: Você %d x %d CPU\n", jogadorPontos, cpuPontos);
    }

    return 0;
}