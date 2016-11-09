#include <stdio.h>

int main ()
{
	
char letra;
int numero;

printf("Entre com uma letra\n");
scanf("%c", &letra);

if ((letra>=65) && (letra<=90))
{
	printf ("\nEsta letra e maiuscula!");
}

else if((letra>=48) && (letra<=57))
{
	printf("\nVoce digitou um numero");
}

else if ((letra>=97 && letra<=122))
{
     printf("Letra Minuscula!!\n");
}
system ("pause");
return 0;
}
