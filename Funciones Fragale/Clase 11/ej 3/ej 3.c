#include <stdlib.h>
#include <stdio.h>
int hm, mj;
void Por();

int main()
{
    Por();
    return 0;
}

void Por()
{
    int porH=0, porM=0;
    printf("Ingrese la cantidad de hombres que enviaron su curricular ");
    scanf("%d", &hm);

    printf("Ingrese la cantidad de mujeres que enviaron su curricular ");
    scanf("%d", &mj);

    porH=h*100/(hm+mj);
    porM=m*100/(mj+hm);
    printf("El porcentaje de hombres que enviaron su curricular es de %d y el de mujeres de %d ", porH, porM);
}
