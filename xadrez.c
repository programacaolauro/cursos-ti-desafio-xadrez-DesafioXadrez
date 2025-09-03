#include <stdio.h>

int main() {
    
    // Quantidade de casas para cada peça do jogo
    int movTorre = 5;
    int movBispo = 5;
    int movRainha = 8;
    int movCavalo = 2;

    int i;
    
    // Movimento da Torre (FOR)
    printf("Movimento da Torre:\n");
    for (i = 1; i <= movTorre; i++) {
        printf("Direita\n");
    }

    // Movimento do Bispo (WHILE)
    printf("\nMovimento do Bispo:\n");
    i = 1;
    while (i <= movBispo) {
        printf("Cima Direita\n");
        i++;
    }

    // Movimento da Rainha (DO-WHILE)
    printf("\nMovimento da Rainha:\n");
    i = 1;
    do {
        printf("Esquerda\n");
        i++;
    } while (i <= movRainha);

    // Movimento do Cavalo
    
    printf("\nMovimento do Cavalo:\n");

    int movBaixo = 2;     // número movimentos para baixo
    int movEsquerda = 1;  // número movimentos para esquerda

    // Loop externo com FOR para organizar os dois estágios do movimento

    int etapa;

    for (int etapa = 0; etapa < 2; etapa++) {
        if (etapa == 0) {

            // parte 1 - duas casas para baixo

            int cont = 0;
            while (cont < movBaixo) { // loop interno (while)
                printf("Baixo\n");
                cont++;
            }
        } else {

            // parte 2 - uma casa para esquerda
            int cont = 0;
            while (cont < movEsquerda) { // loop interno (while)
                printf("Esquerda\n");
                cont++;
            }
        }
    }

    return 0;
}
