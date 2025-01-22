#include <stdio.h>

int main()
{
    double nota1,nota2,notaFinal;
    printf("Digite o valor da primeira nota: ");
    scanf("%lf",&nota1);
    
    printf("Digite o valor da segunda  nota: ");
    scanf("%lf",&nota2);

    notaFinal = nota1 + nota2;

    printf("NOTA FINAL = %lf\n",notaFinal);

    if (notaFinal< 60.0);
    {
        printf("REPROVADO\n");
    }
        return 0;
}
