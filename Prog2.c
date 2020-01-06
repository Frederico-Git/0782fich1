#include <stdio.h>

int main (void){
    int Salario;
    int SubsidioAlimentacao;
    int Descontos;
    int SalarioLiquido;

    //Introduzir o salario Mensal//
    printf("Introduza o salario: \n");
    scanf("%d",Salario);

    //Introduzir o valor do Subsidio de Alimentacao Mensal//
    printf("Introduza o valor do Subsidio da Alimentacao: \n");
    scanf("%d",SubsidioAlimentacao);

    //Introduzir o valor dos Descontos//
    printf("Introduza o valor dos Descontos: \n");
    scanf("%d",Descontos);

    //Introduzir o valor do Salario Liquido//
    printf("Introduza o valor para o Salario Liquido: \n");
    scanf("%d",SalarioLiquido);  

      SalarioLiquido = Salario + SubsidioAlimentacao - Descontos ;

      printf(" O Salario Liquido deste mes e de: %d",SalarioLiquido);
}