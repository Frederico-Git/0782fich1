#include <stdio.h>

int main (void){
    char nome [100];
    int nota1;
    int nota2;
    int nota3;

    //Insira o seu nome//
    printf("Aluno: \n");
    scanf("%s", &nome);

    //Insira a nota do teste 1//
    printf("Nota do teste1: \n");
    scanf("%d",nota1);

    //Insira a nota do teste2//  
    printf("Nota do teste2: \n");
    scanf("%d", nota2);

    //Insira a nota do teste3// 
    printf("Nota do teste3: \n");
    scanf("%d",nota3);

    //Calculo de cada teste com a media ponderada//
    nota1 = nota1 * 0.25;
    printf("a media poderada do 1ºteste e de: %d",nota1);
    nota2 = nota2 * 0.35;
    printf("a media poderada do 2ºteste e de: %d",nota2);
    nota3 = nota3 * 0.40;
    printf("a media poderada do 3ºteste e de: %d",nota3);
}