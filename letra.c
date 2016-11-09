#include <stdio.h>

int main ()
{
	
char letra;

printf("Entre com uma letra\n");
scanf("%c", &letra);

if ((letra>=65 && letra<=90))
{
	printf ("\nEsta letra e maiuscula!");
}

else
{
	printf("\nEssa letra e minuscula!");
}


system("pause");
return 0;
}
