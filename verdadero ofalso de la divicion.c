

#include<stdio.h>


#define SIN_TIPO float


SIN_TIPO si_divide(int num1, int num2);

SIN_TIPO si_divide(int num1, int num2) {
	scanf("%s",num1);
	scanf("%s",num2);
	if (num1 % num2==0) {
		printf("verdadero\n");
	} else {
		printf("falso\n");
	}
	return 0;
}

int main() {
	SIN_TIPO num1;
	SIN_TIPO num2;
	printf("%s\n",si_divide(num1,num2));
	return 0;
}

