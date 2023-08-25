#include<stdio.h>

int main(){
    float valorEmReais, cotacaoDoDolar, valorEmDolares; 
   
//Receber os valores em reais e a cotação do dólar 
    printf("O valor em reais e: ");
    scanf("%f", &valorEmReais);
    
    printf("A cotacao do dolar e: ");
    scanf("%f", &cotacaoDoDolar);

//Caulcular o valor em dólares
     valorEmDolares = valorEmReais / cotacaoDoDolar;

//Resultado do valor convertido em dólares
     printf("O valor convertido em dolar e %2.f", valorEmDolares, valorEmReais);

}
