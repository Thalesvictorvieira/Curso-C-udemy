#include <stdio.h>
#include <math.h>

int main()
{
    double a,b,c,delta,x1,x2;
    printf("DIGITE O COEFICIENTE A : ");
    scanf("%lf",&a);
    
    printf("DIGITE O COEFICIENTE B : ");
    scanf("%lf",&b);
    
    printf("DIGITE O COEFICIENTE C : ");
    scanf("%lf",&c);
    
    delta = (pow(b,2) - 4*a*c);
    
    
    if (a == 0 || delta < 0)
    {
        printf("O valor de a nao pode ser menor ou igual a zero ");
    }
    else
    {
        x1 = (-b + sqrt(delta)) / (2*a) ;
        x2 = (-b - sqrt(delta)) / (2*a) ;
        printf("o valor de x1 e de %lf\n",x1);
        printf("o valor de x2 e de %lf\n",x2);
    
    }

    
    
    
    
    
    
    
    
    
    
    return 0;
}
