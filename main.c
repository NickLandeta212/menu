#include <stdio.h>

int main (int argc, char *argv[]) {
    int a,b,opc;
    int m1=0,m2=1,m3,n;
    float d1,d2,result=0;
    float n1,n2,r=1;
    printf("1.serie de fibonnaci:\n");
    printf("2.Multiplicacion (Sumas sucesivas):\n");
    printf("3.Potenciacion (Multiplicaciones sucesivas):\n");
    printf("Ingrese la opcion:");
    scanf("%d",&opc);
    switch (opc)
    {
    case 1:
        printf("Serie Fibonnaci:\n");
        printf("Ingrese la cantidad de terminos de Febonnaci que desea:");
        scanf("%d",&n);

        if (n<2)
        {
            printf("El numero de elementos debe ser mayor a 2\n");
            return 0;
        }

        printf("%d %d ",m1,m2);
        for (int i = 2; i < n; i++)
        {
            m3=m1+m2;
            m1=m2;
            m2=m3;
            printf("%d ",m3);
        }
        break;

    case 2:
        printf("Multiplicacion:\n");
        printf("Ingrese Numero 1:\n");
        scanf("%f",&d1);
        printf("Ingrese Numero 2:\n");
        scanf("%f",&d2);
        if (d2<0)
        {
            printf("El valor es negativo\n");
            return 0;
        }
       for (int i = 0; i < d2; i++)
       {
        result= result+d1;
       }
       printf("El resultado es:%.2f\n",result);
        break;

    case 3:
        printf("Potenciacion:\n");
         printf("Ingrese Numero 1:\n");
        scanf("%f",&n1);
        printf("Ingrese Numero 2:\n");
        scanf("%f",&n2);
        if (n2<0)
        {
            printf("El valor es negativo\n");
            return 0;
        }
        for (int i = 0; i < n2; i++)
        {
            r=r*n1;
        }
        printf("El resultado es:%.2f\n",r);
        break;
    default:
        break;
    }
    return 0;
}