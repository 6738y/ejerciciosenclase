#include<stdio.h>
int main ()
{
	
	float c[5],r=0;
	
	printf ("depurar el siguiente programa\n");
	
	for (int i=0; i<5; i++){
		printf("%d",i+1);
		scanf("%f",&c[i]);
		r+= c[i];//en r se guarda la suma de las 5 cantidades que ingresamos
		
		
			}
			// aqui ya suma las 5 cantidades ingesadas y las divide entre 5=promedio
			printf("%.2f\n",r/5);
			   return 0;
}
