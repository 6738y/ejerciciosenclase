#include<stdio.h>
int main ()
{
	int a [10] ={10,1,2,-3,-100,1000,-200,7,1,0};
	
	int mayor=a[0],r=0;
	for (int i=1;i<10; i++){
		if (a[i]>mayor){
			mayor=a[i];
			r=i;
		}
}
	printf("numero de arreglo:%d\n ",mayor);
		printf("posicion: %d\n",r);
		return 0;
	
}
