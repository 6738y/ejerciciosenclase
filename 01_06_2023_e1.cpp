/*el recibo de luz visualiasar la tarifa de luz suegun el gasto de corriente electrica para uun gasto
gasto<1000 1.2
1000 y 1850 1.8n
>1850 2.1*/
#include<stdio.h>
int main()
{
float consa, consac, consumo, tarifa, consumototal;
printf("Ingrese el consumo de luz:\n ");
scanf("%f",&consa);
printf("Ingresa el consumo actual:\n");
scanf("%f", &consac);
consumo=consac-consa;

if(consa<1000){
printf("Su tarifa es de $1.2 \n");
tarifa=1.2;
}
else if (consa>999 && consa<1849){
printf("Su tarifa es de $1.8 \n");
tarifa=1.8;
}
else {
printf("Su tarifa es de $2.1 \n");
tarifa=2.1;
}
consumototal=consumo*tarifa;
printf("El consumo total es: $ %f \n",consumototal);


	
}
