#include<stdio.h>
int main()

{
	float a,b,c;
	printf ("a= ");
	scanf("%f",&a);
	
	printf ("b= ");
	scanf("%f",&b);
	
	printf ("c= ");
	scanf("%f",&c);
if (a>0)
if (b<0) ++a;
else if(c>0)
if (a<5) ++b;
else if (c<5 ) ++c;
else --a;
else if (c<5) --b;
else --c;
else 
a=0; 
printf("%f",a,b,c);	
}

