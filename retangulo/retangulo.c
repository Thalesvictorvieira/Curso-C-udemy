#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    double base, altura, area, perimetro, diagonal;

    printf("Base do retangulo: ");
    scanf("%lf", &base);

    printf("Altura do Retangulo: ");
    scanf("%lf", &altura);

    area = base * altura;
    perimetro = (base * 2 ) + (altura * 2) ;
    diagonal = sqrt((base * base)+(altura *altura));

    printf("AREA = %.4lf \n", area);
    printf("PERIMETRO = %.4lf \n", perimetro);
    printf("DIAGONAL = %.4lf \n", diagonal);
    return 0;
}
