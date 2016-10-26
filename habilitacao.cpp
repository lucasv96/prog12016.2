
#include <stdio.h>

int main ()
{
	
int idade;

printf("\nQual a sua idade?");
scanf("%d", &idade);

if ((idade>=18))
{
	printf ("\nVocê está habilitado para dirigir!!");
}
else
{
	printf("\nVocê ainda não pode dirigir!!");
}
}

