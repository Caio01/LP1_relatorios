#include <stdio.h>

int main()
{
    int idade;
    float valor, desconto, precoFinal;

    puts("Digite a sua idade > ");
    scanf("%d", &idade);

    puts("Digite o valor do produto > ");
    scanf("%f", &valor);

    if(idade<=18){
        desconto = 0.1*valor;

        precoFinal = valor - desconto;

        printf("Desconto = %.2f\n", desconto);
        printf("Preco Final = %.2f\n", precoFinal);
        }


    if(idade>18){
        desconto = valor*0.2;


        precoFinal = valor - desconto;

        printf("Desconto = %.2f\n", desconto);
        printf("Preco Final = %.2f\n", precoFinal);
        }


        return 0;


}
