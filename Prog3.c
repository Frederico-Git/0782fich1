#include <stdio.h>

int main (void){
    float potencia = 5.42;
    float PrecokWh = 0.16;
    float IVA = 0.18;
    float preco;
    int consumokWh;

    //Obrigatorio apresentar o valor a pagar SEM IVA//
    preco = potencia + (consumokWh * PrecokWh) ;

    //Mostrar ao Utilizador o preço a pagar SEM IVA//
    printf("o valor a pagar sem iva e de: %f",preco);

    //Obrigatorio apresentar o valor a pagar COM IVA//
    preco = potencia + (consumokWh * PrecokWh) * IVA;

    //Mostrar ao Utilizador o preço a pagar COM IVA//
    printf("o valor a pagar sem iva e de: %f",preco);
}