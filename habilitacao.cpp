
#include <stdio.h>

int main ()
{
	
int idade;

printf("\nQual a sua idade?");
scanf("%d", &idade);

if ((idade>=18))
{
	printf ("\nVoc� est� habilitado para dirigir!!");
}
else
{
	printf("\nVoc� ainda n�o pode dirigir!!");
}
}

