#include <stdio.h>
#include <time.h>
#include <stdlib.h>


 int main(){
    int opicao;
    int palpite, numeroS;

    printf("Menu principal:\n");
    printf("1. Iniciar jogo\n");
    printf("2. Verregras\n");
    printf("3. Sarir do jogo\n");
    printf("Escolha uma opição\n");
    scanf("%d", &opicao);

    switch (opicao)
    {
    case 1:
        srand(time(0));
        numeroS = rand () % 10;
        printf("Digite um numero de 0 a 9:");
        scanf("%d", &palpite);
        if (numeroS == palpite)
        {printf("VC venceu!\n ");
        printf("O numero secreto é %d", numeroS);
        }
        else {
            printf("VC perdeu!\n");
            printf("O numero secreto é %d", numeroS);
        }

        
        break;

    case 2:

        break;
    case 3:
        break;

    default:
        printf("Opição emvalida");
        break;
    }






 }
