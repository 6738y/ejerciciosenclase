/* programa numero 6
titulo: 
fecha:31 de mayo 2023
nombre: ximena toscano flores */
#include<stdio.h>
int main()
{
	int edad, mayoredad,juvenil,menoredad;
	scanf("%i",&edad);
	mayoredad=(edad>18);
	juvenil=(edad>15) && (edad<=18);
	menoredad=(edad<15) && (edad<=0);
	printf("%i\n",mayoredad);
		printf("%i\n",juvenil);

	printf("%i\n",menoredad);

	
}
