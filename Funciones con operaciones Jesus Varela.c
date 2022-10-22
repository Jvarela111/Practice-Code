#include<stdio.h>
#include <windows.h>

void datos();
int suma (int a, int b);
int resta(int a, int b);
int multiplicacion(int a, int b);
float division(float a, float b);

int elec, valor1, valor2;
int main ()
{
	do
	{
		printf("\n Menu de opciones\n");
		printf("\nIngrese el valor de la opcion que desea\n");
		printf("\n1.Suma \n");
		printf("2.Resta \n");
		printf("3.Multiplicacion \n");
		printf("4.Division \n");
		printf("\nEleccion: ");
		scanf("%d",&elec);
		switch(elec)
		{
			case 1:
				datos();
				printf("\nEl resultado de su suma es: %d", suma(valor1, valor2));
				break;
			case 2:
				datos();
				printf("\nEl resultado de su resta es: %d", resta(valor1, valor2));
				break;
			case 3:
				datos();
				printf("\nEl resultado de su multiplicacion es: %d", multiplicacion(valor1, valor2));
				break;
			case 4:
				datos();
				printf("\nEl resultado de su division es: %.2f", division(valor1, valor2));
				break;
			default:
				printf("\nOpcion inexistente, ingrese otra por favor \n\n");
				system("pause");
				system("cls");
		}
	}while(elec<1||elec>4);
}

void datos()
{
	printf("\nIngrese el primer valor: ");
	scanf("%d",&valor1);
	printf("Ingrese el segundo valor: ");
	scanf("%d",&valor2);
}
int suma(int a, int b)
{
	int resultado;
	resultado = a+b;
	return resultado;
}

int resta(int a, int b)
{
	int resultado;
	resultado = a-b;
	return resultado;
}

int multiplicacion(int a, int b)
{
	int resultado;
	resultado = a*b;
	return resultado;
}

float division(float a, float b)
{
	float resultado;
	resultado = a/b;
	return resultado;
}