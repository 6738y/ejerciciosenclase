#include <stdio.h>
# define MAX 25
int main()
{

//ejemplo1/
char i;
for (i= 'A'; i<= 'z';++i)
{
    printf ("%c\n",i);
}
printf ("\n");
printf ("\n");
/* ejemplo 2*/
char c;
for (c= '0'; c<='9';++c)
{
    printf("%d",&i);
}
printf ("\n");
printf ("\n");
/* ejemplo 3*/
for (int i = 0; i <= 100; i=i+2)
    printf("%d\n",i);
/* ejemplo 4 */

int o,j;
for (o = 0, j=MAX; o > j; ++o, j--)
{
	 printf("%d",(i+2*j));	 
}
   
}
