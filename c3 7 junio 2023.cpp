#include<stdio.h>
int main(){
	int x,suma,valor,prom;
	x=1;
	suma=0;
	while(x<=6){
		scanf("%i",&valor);
	suma=suma+valor;
	x=x+1;
	}
	prom=suma/6;
	printf("%i ",prom);
	
}
