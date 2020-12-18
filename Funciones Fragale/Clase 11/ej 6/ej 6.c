#include <stdio.h>
#include <stdlib.h>


	void ocho(float n);

	int main()
	{
	float num=0;
	printf(" Ingrese un numero ");
	scanf("%f",&num);
	ocho(num);
	}

	void ocho (float num)
	{
		float res=0;
		res=num/8;
		printf(" La octava parte del numero %f es %f ",num,res);
	}
