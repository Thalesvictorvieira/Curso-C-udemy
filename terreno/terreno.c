#include <stdio.h>
#include <math.h>

int main()
{
    double area,largura,comprimento,valor,resultado;
    printf("Digite a larguta do terreno: ");
    scanf("%lf",&largura);
    
    printf("DIgite o comprimento do Terreno:  ");
    scanf("%lf",&comprimento);
    
    printf("Digite o valor por metro quadradro: ");
    scanf("%lf",&valor);

    area = largura * comprimento;
    resultado = area * valor;
    printf("Area do terreno = : %.2lf\n ",area);
    printf("Preco do terreno = : %.2lf\n",resultado);


    return 0;
}
