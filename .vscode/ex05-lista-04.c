/*Faça um programa que receba um número real e imprima:
• a parte inteira do número;
• a parte fracionária do número;
• arredondamento do número (sem casas decimais. Pesquise o floor(), ceil() e round()).*/
#include <stdio.h>
#include <math.h>

int main(){
    float numeroReal;
    int parteInteira;
    printf("Informe um número do tipo real: ");
    scanf("%f",&numeroReal);
    parteInteira = numeroReal;
    printf("Parte inteira: %d\n",parteInteira);
    printf("Parte real: %g\n",numeroReal-parteInteira);
    printf("Valor arredondado: %lf\n",round(numeroReal));
}