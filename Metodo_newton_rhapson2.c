#include<stdio.h>
#include<math.h>
#include<stdlib.h>
float f_x(float x);
float fprima_x(float x);

int main(void)
{
    float x0, x1, f0, f1, df0, e;
    int i=0;
    printf("\t\tPROGRAMA PARA EVALUAR LA FUNCION e^-x - x\t\t");
    printf("\n\t\t\tMETODO DE NEWTON RHAPSON\t\t");
    printf("\nIngrese el valor de x0: ");
    scanf("%f", &x0);
    printf("ingrese el error: ");
    scanf("%f", &e);
    do
    {
            f0 = f_x(x0);
            df0 = fprima_x(x0);
            x1 = x0 - (f0 / df0);
            f1 = f_x(x1);
            x0 = x1;
            i++;
            printf("No. de iteraciones: %d\t ",i);
            printf("raiz: %f\t",x1);
            printf("Error: %f\n", f1);
            printf("la raiz  de la funcion es: %f\n", x1);
    }
    while(abs(f1)>e);
    return 0;
}
float f_x (float x)
{
    return exp(-x) - x;
}
float fprima_x(float x)
{
    return -exp(-x) - 1;
}
