#include <stdio.h>

int main() {
    int X, Y;

    // Leitura das coordenadas X e Y
    scanf("%d", &X);
    scanf("%d", &Y);

    // Verificando se a coordenada está dentro do campo de jogo
    if ((X >= -8 && X <= 8) && (Y >= 0 && Y <= 8)) {
        printf("S");  // Dentro do campo
    } else {
        printf("N");  // Fora do campo
    }

    return 0;
}
