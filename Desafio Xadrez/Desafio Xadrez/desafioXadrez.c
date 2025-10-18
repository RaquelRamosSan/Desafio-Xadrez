#include <stdio.h>

// Torre: move em linha reta horizontalmente (Direita)
void moverTorre(int casas) {
    if (casas <= 0) return; // Condição de parada
    printf("Direita\n");
    moverTorre(casas - 1); // Chamada recursiva
}

// Bispo: move na diagonal (Cima Direita) usando recursividade + loops aninhados
void moverBispo(int casas) {
    if (casas <= 0) return; // Condição de parada

    // Loop externo: movimento vertical
    for (int i = 1; i <= 1; i++) { // sempre 1 passo por chamada
        // Loop interno: movimento horizontal
        for (int j = 1; j <= 1; j++) {
            printf("Cima Direita\n");
        }
    }

    moverBispo(casas - 1); // Chamada recursiva
}

// Rainha: move em linha reta horizontalmente (Esquerda)
void moverRainha(int casas) {
    if (casas <= 0) return; // Condição de parada
    printf("Esquerda\n");
    moverRainha(casas - 1); // Chamada recursiva
}

// Cavalo: movimento em "L" (2 casas para cima e 1 para a direita)
void moverCavalo(int casasCima, int casasDireita) {
    // Loop externo para movimento vertical
    for (int i = 1; i <= casasCima; i++) {
        if (i > casasCima) break;
        printf("Cima\n");
    }

    // Loop interno para movimento horizontal
    int contador = 1;
    while (contador <= casasDireita) {
        if (contador < 0) { 
            contador++;
            continue;
        }
        printf("Direita\n");
        contador++;
    }
}

// FUNÇÃO PRINCIPAL
int main() {
    // Variáveis para número de casas
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;
    int cavaloCima = 2;
    int cavaloDireita = 1;

    // Torre (recursivo)
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);

    printf("\n"); // separador

    // Bispo (recursivo + loops aninhados)
    printf("Movimento do Bispo:\n");
    moverBispo(casasBispo);

    printf("\n"); // separador

    // Rainha (recursivo)
    printf("Movimento da Rainha:\n");
    moverRainha(casasRainha);

    printf("\n"); // separador

    // Cavalo (loops complexos)
    printf("Movimento do Cavalo:\n");
    moverCavalo(cavaloCima, cavaloDireita);

    return 0;
}
