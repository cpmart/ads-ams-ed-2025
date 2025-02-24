/*Faça um programa que receba o valor de um depósito e o valor da taxa de juros. Calcule e imprima o valor do rendimento e o valor total depois do rendimento.*/

#include <stdio.h>
 
int main(){
    float deposito, taxaJuros;
    printf("Valor do depósito: ");
    scanf("%f",&deposito);
    printf("Valor da taxa de juros (em %%): ");
    scanf("%f",&taxaJuros);
    printf("Valor do rendimeento: %g\n",deposito*taxaJuros/100);
    printf("Valor total com o rendimeento: %g\n",deposito+(deposito*taxaJuros/100));
}