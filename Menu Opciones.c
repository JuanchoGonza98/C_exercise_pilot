#include<stdio.h>
#include<conio.h>
int main()
{
	int num1,num2,opc,sum,rest;
	printf("Ingrese un numero: ");
	scanf("%d",&num1);
	printf("\nIngrese otro numero: ");
	scanf("%d",&num2);
	do
	{
		printf("\nBIENVENIDO AL PROGRAMA DE JUANCHO\n");
		printf("1-SUMAR\n 2-RESTAR\n 3-SALIR\n");
		printf("Ingrese su opcion: ");
		scanf("%d",&opc);
		switch(opc)
		{
			case 1:
				sum= num1+num2;
				printf("\nLa suma es: %d",sum);
				break;
			case 2:
				rest = num1-num2;
				printf("La resta num1-num2 es: %d",rest);
				break;
			case 3:
				break;
			default :
				printf("\nERROR\n Ustes es un pendejo!!!");
				break;
		}
	getch();
	}while(opc != 3);
}
