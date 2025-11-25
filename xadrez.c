#include <stdio.h>
#include <stdlib.h>

int main (){

    //Desafio Xadrez - Nivel Novato

    int torre = 1, bispo = 1, rainha;

    printf ("*** JOGO DE XADREZ ***\n\n");

    //movimento da torre

    printf ("Movimento da Torre:\n\n");

    while (torre <= 5) {
        printf ("Direita\n");
        torre++;
    }

    //movimento do bispo

    printf ("\nMovimento do Bispo:\n\n");

    do {
        printf ("Cima, Direita\n");
        bispo++;
    
    } while (bispo <= 5);

    //movimento da rainha

    printf ("\nMovimento da Rainha:\n\n");

    for (rainha = 1; rainha <= 8; rainha++) {
        printf ("Esquerda\n");
    }



    system ("pause");
    return 0;
}
