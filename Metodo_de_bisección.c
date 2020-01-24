#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float f_x(float x);
float fbiseccion(float xl, float xu, float e, bool &state);
int main(void)
{
    float xl,xu,e;
    printf("dame los parametros: ");
    scanf("%f",&xl);
    scanf("%f",&xu);
    printf("dame el error: ");
    scanf("%f",&e);
    fbiseccion(xl,xu,e);
}


float f_x(float x)
{
    return pow(x,3) + 4 * pow(x,2) - (10 * x);
}


float fbiseccion(float xl, float xu, float e, bool &state)
{
    float f_xl,f_xu,f_xr,xr,xr_ant = 0,e_test, raiz;
    int i=1;
    while(1)
    {
        f_xl = f_x(x_l);
        f_xu = f_x(x_u);
        printf("la f(%f) = %f",xl,f_xl);
        printf("la f(%f) = %f",xu,f_xu);
        xr = (xl + xu) / 2;
        f_xr = f_x(x_r);
        printf("xr = %f",xr);
        printf("f(%) = %f",f_xr);
        if(f_xl * f_xr < 0)
            {
                if(f_xl * f_xr > 0)
                    {
                        xl = xr;
                    }
                else if(f_xl * f_xr < 0)
                    {
                        xu = xr;
                    }
                else
                    {
                        state = true;
                        raiz = xr;
                        bleak;
                    }
                e_test = abs((xr - xr_ant) / xr);
            }
    }
}
