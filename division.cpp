#include<stdio.h>
int main ()
{
	int divisor,dividendo,cociente;
	int residuo;
	
	printf("ingresa el divisor \n");
	scanf("%i",&divisor);
		printf("ingresa el dividendo \n");
			scanf("%i",&dividendo);
				cociente=divisor/dividendo;
			if (divisor%dividendo == 0){
				printf ("si es divisible\n");
			
				printf("el cociente de la division es = %i",cociente);
				printf("\n el residuo de la divicion es = %i",residuo);
			}
else {
	printf ("no es divisible\n");
	printf("el cociente de la division es = \n%i",cociente);
				printf("el residuo de la divicion es = %i",residuo);
	
}


}
