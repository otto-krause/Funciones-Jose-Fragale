#include <stdio.h>
#include <stdlib.h>


	void presi(float fue, float sup);

	int main()
	{
	float sup=0,fue=0;
	printf(" Ingrese la fuerza ");
	scanf("%f",&fue);
	printf(" Ingrese la superficie ");
	scanf("%f",&sup);
	presi (fue,sup);
	}

	void presi (float fue, float sup)
	{
	float pres=0;
	pres=fue/sup;
	printf("La presion es = %f ",pres);
	}
