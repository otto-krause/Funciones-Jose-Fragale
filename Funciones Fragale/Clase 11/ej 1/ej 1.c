#include <stdlib.h>
#include <stdio.h>
void lol();
int main()
{
    lol();
    return 0;
}

void  lol()
{
int num=0, numn=0;
    printf("Ingrese un numero: ");
    scanf("%d", &num);
    printf("Ingrese un numero: ");
    scanf("%d", &numn);
    system ("cls");
    printf("%d \n%d\n", num, numn);
}
