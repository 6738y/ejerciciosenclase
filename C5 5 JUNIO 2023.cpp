//a partir de una ponderacion asignada con la siguiente escala a(Exelente) b(notable) c(suficiente) d,f(no aplicable para esta nota)
#include<stdio.h>
int main ()
{
	char escala;
	scanf("%c",&escala);
	switch(escala)
	{
		case'a':case 'A':
			printf ("%c exelente");
			break;
					case'b':case'B':
			printf ("%c notable");
			break;
								case'c':case 'C':
												printf ("%c suficiente");
break;

	case'd':case'D':
			printf ("%c no aplicable para esta nota");
			break;
				case'f':case'F':
			printf ("%c no aplicable para esta nota");
			break;
			
	}
}
