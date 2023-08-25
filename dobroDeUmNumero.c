#include<stdio.h>

int main(){
    float num, dobro;

//receber um número
    printf("Digite um numero: ");
    scanf("%f", &num);

//calcular o dobro
    dobro = 100 * num;

//resultado da operação        
    printf("O dobro de %.0f e %.0f", num, dobro);

}
