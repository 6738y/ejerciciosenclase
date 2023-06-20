
#include<stdio.h>


#define SIN_TIPO float

SIN_TIPO determina_el_mayor(SIN_TIPO a, SIN_TIPO b);

SIN_TIPO determina_el_mayor(SIN_TIPO a, SIN_TIPO b) {
	scanf("%s",a);
	printf("Ingresa otro numero\n");
	scanf("%s",b);
	if (a==b) {
		printf("Los numeros son iguales\n");
	} else {
	}
	if (a>b) {
		printf("El numero «,a,» es mayor al numero%s\n",b);
	} else {
		printf("El numero %s es mayor al numero %s\n",b,a);
	}
	return 0;
}

int main() {
	SIN_TIPO a;
	SIN_TIPO b;
	printf("%s\n",determina_el_mayor(a,b));
	return 0;
}

