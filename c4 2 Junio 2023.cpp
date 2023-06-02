#include <stdio.h>
int main()
{
	float num1,num2;
	printf("ingresa el numero 1= ");
	scanf("%f",&num1);
	printf("ingresa el numero 2= ");
	scanf("%f",&num2);
	if (num1<num2){
		printf ("numero 2 es mayor");
	}
	if (num1>num2){
		printf("numero 1 es mayor");
	}
}
