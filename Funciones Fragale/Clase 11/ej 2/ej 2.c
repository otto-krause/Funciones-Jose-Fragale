#include <stdio.h>
#include <stdlib.h>

	void area();
	void perimetro();
	int total(int num, int num1, int area, int peri);

		int main( )
		 {
			int num=0,num1=0,resul=0;
			printf(" Ingrese un numero ");
			scanf("%d",&num);
			printf(" Ingrese otro numero ");
			scanf("%d",&num1);
			area(num,num1);
			perimetro(num,num1);
		}

	void area(int num, int num1)
	{
		int area=0;
		area=num*num1;
		printf("\n El area de los dos numeros es : %d ",area);
	}

	void perimetro(int n, int n1)
	{
		int peri=0;
		peri=(2*n)+(2*n1);
		printf("\n El perimetro de los dos numeros es : %d",peri);
	}
