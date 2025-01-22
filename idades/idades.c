#include <stdio.h>

int main()
{
    double media;
    int idade1,idade2;
    char nome[50], nome2[50];
    
    printf("Dados da primeira pessoa:\n");
    printf("Nome: ");
    fgets(nome,50,stdin);
    printf("Idade: ");
    scanf("%d",&idade1);
    
    
    
    printf("Dados da segunda pessoa:\n");
    printf("Nome: ");
    fseek(stdin,0,SEEK_END);
    fgets(nome2,50,stdin);
    printf("Idade: ");
    scanf("%d",&idade2);
    
    media = (idade1 + idade2) / 2.0;

    printf("A idade media de %s e %s eh de %.1lf",nome,nome2,media);
    /* code */
    return 0;
}
