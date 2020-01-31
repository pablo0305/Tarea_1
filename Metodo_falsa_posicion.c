#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float f_x(float x);
float posicion(float x_l, float x_u);
float absoluto(float lam);
int main(void)
{
    float x_l, x_u, x_r, antx_r, dif = 1, err;
    int n, i;
    i = 0;
    antx_r = 1;
    printf("Raiz x^3 + 4 * x^2 - 10");
    //printf("\ningrese en valor de Xl: ");
    x_l = 0;
    x_u = 5;
    //scanf("%f", &x_l);
    //printf("\ningrese en valor de XU: ");
    //scanf("%f", &x_u);
    printf("\ningrese el error: ");
    scanf("%f", &err);
    printf("\ningrese el numero de iteraciones: ");
    scanf("%i", &n);
    while((dif > err) && (i < n))
    {
        i++;
        printf("iteracion %i\n", i);
        x_r=posicion(x_l,x_u);
        if(f(x_r)*f(x_l)<0)
        {
            x_u = x_r;
        }
        else
        {
            x_l = x_r;
        }
        dif=absoluto(x_r-antx_r);
        printf("\nxr = %f \t vant = %f \t error = %f\n ",x_r,antx_r,dif);
        antx_r = x_r;
    }
    return 0;
}
float f_x(float x)
{
    return x * x * x + 4 * x * x - 10;
}
float posicion(float x_l, float x_u)
{
    return x_l-f(x_l)*(x_u-x_l)/(f(x_u)-f(x_l));
}
float absoluto(float num)
{
    if (num< 0)
        return (-num);
    else
        return num;
}
