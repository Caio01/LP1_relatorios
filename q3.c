#include <stdio.h>

int x1, maior;

int main()
{
    printf("Insira no MINIMO 2 VALORES (PARA FINALIZAR DIGITE 0) > \n");

    scanf("%d", &x1);
    maior = x1;
    while(x1 != 0){

        scanf("%d", &x1);

        if(x1>maior){
            maior = x1;
        }

        if(x1==0){

            printf("MAIOR VALOR > %d", maior);
            break;
        }

    }



    return 0;

}
