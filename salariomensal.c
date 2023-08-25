#include <stdio.h>

int main() {
    float salarioAtual, percentualReajuste;
    
//ler o salário atual e o do percentual de reajuste
    printf("Digite o salario atual do mes: ");
    scanf("%f", &salarioAtual);
    
    printf("Digite o percentual de reajuste: ");
    scanf("%f", &percentualReajuste);
    
//Calculando o novo salário
    float novoSalario = salarioAtual + salarioAtual * (percentualReajuste / 100);
    
//Mostrando o resultado do novo salário
    printf("O novo salario e: R$%.2f", novoSalario);
}

