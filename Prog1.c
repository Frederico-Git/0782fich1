#include <stdio.h>

int main (void) {
    char mes [100];
    int receitas;
    int despesas;
    int saldo;

    //Introduzir o mes para que saber// 
    printf("Qual o mes? \n");
    scanf("%s", &mes);

    //Valor das receitas introduzido pelo utilizador// 
    printf("Introduza o valor para as receitas: \n");
    scanf("%d",receitas); 

    //Valor das despesas introduzido pelo utilizador// 
    printf("Introduza o valor para as despesas \n");
    scanf("%d",despesas);

    //Diferença entre o total de receitas (valores recebidos) e o total de despesas (valores pagos)//
    saldo = receitas - despesas ;

    printf ("O seu saldo e de: %d\n",saldo);
}    