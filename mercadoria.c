#include<stdio.h>

int main(){
    float custoMercadoria, custoFrete, despesas, valorVenda, lucroMercadoria; 
   
// Receber os custos e as despesas
    printf("Digite o custo da mercadoria: ");
    scanf("%f", &custoMercadoria);
    
    printf("Digite o valor do frete: ");
    scanf("%f", &custoFrete);

    printf("Digite o valor das despesas: ");
    scanf("%f", &despesas);

 // Calcular o custo total (custo da mercadoria + o frete + as despesas)
    float custoTotal = custoMercadoria + custoFrete + despesas;    

// Valor de vendas da marcadoria
    printf("Digite o valor de venda: ");
    scanf("%f", &valorVenda);

// Calcular o lucro e a percentagem de lucro de mercadoria
    lucroMercadoria = valorVenda - custoTotal;
 
    lucroMercadoria = (lucroMercadoria / custoTotal) * 100;
    
// Lucro e a percentagem de lucro
    printf("O lucro da mercadoria é %.2f e a percentagem de lucroMercadoria é %.2f", lucroMercadoria);
}
