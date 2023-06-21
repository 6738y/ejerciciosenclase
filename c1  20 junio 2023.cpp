#include <stdio.h>
float area_rectangulo(float b, float a);//prototipo de funcion o declaracion
float entrada(void);                     //prototipo de la funcion

int main()
{
	float b, h;
	
	printf("\n BASE DEL RECTANGULO:");
	b=entrada();
	printf("\n ALTURA DEL RECTANGULO:");
	h=entrada();
	printf("\n AREA DEL RECTANGULO %.2f ,area",area_rectangulo(b,h));
	return 0;	
}
float entrada(){
	float m;
	do{
		scanf("%f",&m);
		
	}
	while(m<=0.0);
	
	return m;
	
}
float area_rectangulo(float b,float a){
	return (b*a);
}
