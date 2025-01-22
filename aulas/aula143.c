#include <stdio.h>
#include <string.h>

void ler_texto(char *buffer, int length) 
{
 fgets(buffer, length, stdin);
 strtok(buffer, "\n");
}

int main()
{
    int idade;
    double salario,altura;
    char genero;
    char nome[50];

   printf("Digite o valor da idade: ");
   scanf("%d",&idade);

   printf("Digite o valor do salario: ");
   scanf("%lf",&salario);

   printf("Digite o valor do altura: ");
   scanf("%lf",&altura);
   
   
   printf("Digite Genero: ");
   scanf(genero);   

   
   printf("Digite o valor do nome: ");
   fgets(nome,50,stdin);

    
    printf("Idade = %d\n",idade);
    printf("SALARIO = %.2lf",salario);
    printf("ALTURA = %.2LF\n",altura);
    printf("GENERO = %c\n",genero);
    printf("NOME = %s\n",nome);
    return 0;
}
