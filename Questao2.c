#include <stdio.h>
#include <stdlib.h>


int main()
{
	double salarioBruto, INSS, salarioLiquido;
	
	printf("Digite o salario bruto: ");
         scanf("%lf", &salarioBruto);
	
	if( salarioBruto < 420){
		INSS = salarioBruto*8/100;
		salarioLiquido = salarioBruto - INSS;
	}
	if( salarioBruto >= 420.0 && salarioBruto <= 1350){
		INSS = salarioBruto*9/100;
		salarioLiquido = salarioBruto - INSS;
	}
	if( salarioBruto > 1350){
		INSS = salarioBruto*9/100;
		salarioLiquido = salarioBruto - INSS;
	}
	
	printf("Desconto INSS: %.2lf\n", INSS);
	printf("Salario Liquido: %.2lf\n\n", salarioLiquido);
	
	return 0;
}
