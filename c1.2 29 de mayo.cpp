#include <stdio.h>
int minumero;
int main()
{
	/*variables al principio de la funcion main*/
	int j;
	printf ("¿cual es su numero favorito?");
	scanf("%d",&minumero);
	int numerodeiteracciones=12;
	int i;
	for(i=2; i<numerodeiteracciones; i+=2){
		printf("iteraccion numero: %d\n",i);
		
	}
	printf(" cuanto vale aqui la variable i: %d\n",i);
		printf(" cuanto vale aqui la variable minumero: %d\n",minumero);

	printf(" cuanto vale aqui la variable numerodeiteracciones : %d\n",numerodeiteracciones);

	
}
