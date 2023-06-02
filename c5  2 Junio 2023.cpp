#include<stdio.h>
#include<math.h>
int main()
{
	float f,x;
	printf("\n Ejige un valor de x: ");
	scanf("%f",&x);
	/*seleccion de rango donde se encuentra x*/
	if (x<= 0.0)// si x es menor o igual a 0 entonces ...
	f= -pow(x,2) -x;// f va a ser igual a menos potencia de x cuadrada menos el valor inicial de x 
	else //si no
	f= -pow(x,2)+3*x;// d va a ser igual a monos la potencia de x cuadrada mas 3 por x
	printf("f(%.1f) = %.3f",x,f);//escribe el valor de f y si equis es positiva o negaiva
	return 0;
}
