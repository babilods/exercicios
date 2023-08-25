#include <stdio.h>

int main() {
    float custoFabrica, custoConsumidor;
    const float percentualDistribuidor = 0.28;
    const float impostos = 0.45;
    
// Ler o custo de fábrica do carro
    printf("Digite o custo de fabrica do carro: ");
    scanf("%f", &custoFabrica);
    
// Calcular o custo ao consumidor (custo de fábrica + distribuidor + impostos)
    custoConsumidor = custoFabrica + (custoFabrica * percentualDistribuidor) + (custoFabrica * impostos);
    
// Resultado
    printf("O custo final ao consumidor e %.2fn", custoConsumidor);
}