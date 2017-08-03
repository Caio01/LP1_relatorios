#include <stdio.h>
#include <stdlib.h>

int main(){
	int n, i, a = 1, b = 1;
	printf("Digite o valor de n: ");
	 scanf("%d", &n);


	for( i = 0; i < n; i++){
	       if( i < 2){ printf("1 "); }
	       else{
		       b = a + b;
		       printf("%d ", b);	
		}
	}	
	printf("\n\n");
	return 0;

}
