#include<stdio.h>
#include<stdarg.h>
void maximo(void)
int main(void)

{
	puts("\t\t primera busqueda del maximo\n");
	maximo(6,3.0,4.0,-12.5,1.2,4.5,6.4);
	puts("\n\t nueva busqueda del maximo\n");
	maximo (4,55.4,17.8,9,-17.99);
 
	
}
void maximo (int n,...)
{
    double mx,actual;
    va_list puntero;
    int i;
    va_start(puntero,n);
    mx=actual=va_arg(puntero,double);
    printf ("\n\t argumento actual: %.1lf\n",actual);
    for (i=2;1<=n;i++)
	{
		actual=va_arg(puntero,double);
		printf ("\t\t argumento actual: %.2lf\n",actual);
		if (actual>mx)
		{
			mx=actual;
			    
			
		}
		   
	}

}
