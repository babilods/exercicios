#include <stdio.h>

int main() {

// variáveis
    int numCarrosVendidos;
    float valorTotalVendas, salarioFixo, valorPorCarro;
    
// ler os dados de entrada
    printf("Digite o numero de carros vendidos: ");
    scanf("%d", &numCarrosVendidos);
    
    printf("Digite o valor total das vendas: ");
    scanf("%f", &valorTotalVendas);
    
    printf("Digite o salario fixo: ");
    scanf("%f", &salarioFixo);
    
    printf("Digite o valor por carro vendido: ");
    scanf("%f", &valorPorCarro);
    
// Cálculo da comissão referente ao número de carros vendidos
    float comissaoCarros = numCarrosVendidos * valorPorCarro;
    
// Cálculo da comissão referente ao valor total das vendas
    float comissaoVendas = 0.05 * valorTotalVendas;
    
// Cálculo salário final
    float salarioFinal = salarioFixo + comissaoCarros + comissaoVendas;
    
// resultado
    printf("O salario final do vendedor e: R$%.2f", salarioFinal);
    
}