#include<stdio.h>
int main ()
{
	int t_v,cuota,monto,cambio;
	printf("ingrese un numero dependiendo su tipo de vehiculo");
	printf("\n 1 particular");
	printf("\n 2 autobus");
	printf("\n 3 motocicleta");
	scanf(" %i",&t_v);
	switch(t_v)
	{
		case 1 :
		printf("su cuota es de :$500");
		cuota=500;
		break;
		case 2:
			printf("su cuota es de :$600");
		cuota=600;
		break;
		case 3:
			printf("su cuota es de :$100");
		cuota=100;
		break;
	}
	printf("\n ingrese su monto a pagar ");
	scanf("%i",&monto);
	
	if (monto>cuota){
		cambio=monto-cuota;
	printf ("su cambio es = %i\n",cambio);
	printf("que tenga buen viaje :) \n");	
	}
	
	else {
	printf("que tenga buen viaje :) \n");	
	}
	

}
