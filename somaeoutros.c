#include<stdio.h>

int main(){
   float num1,num2,soma,sub,mult,div;

//receber dois numeros
   printf("Digite o primeiro numero: ");
   scanf("%f", &num1);
   printf("Digite o segundo numero: "); 
   scanf("%f", &num2);

//Soma 
    soma = num1 + num2;

//Subtração
    sub = num1 - num2;

//Multiplicação
    mult = num1 * num2;

//Divisão
    div = num1 / num2;

    printf("%.0f + %.0f = %.0f\n", num1, num2, soma);
    printf("%.0f - %.0f = %.0f\n", num1, num2, sub);
    printf("%.0f * %.0f = %.0f\n", num1, num2, mult);
    printf("%.0f / %.0f = %.0f\n", num1, num2, div);


}