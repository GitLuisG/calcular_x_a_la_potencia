

#include<stdio.h>
#include<conio.h>
main()
{
	int x,y,i=1,potencia=1;
	printf("Programa que calcula x a la potencia y\n");
	printf("Escriba el valor de x:\n");
	scanf("%d",&x);
	printf("Escribe el valor de y:\n");
	scanf("%d",&y);
	while (i<=y)
	{
		potencia *= x;
		i++;
	}
	printf("\nEl resultado es: %d",potencia);
	getch();
}
