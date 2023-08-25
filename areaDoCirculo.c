#include <stdio.h>
#include <math.h>

int main() {
    float raio, area;
    
// Ler o raio do círculo
    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);
    
// Calcular a área do círculo usando a fórmula A = π * raio^2
    area = MPI * pow(raio, 2);
    
// Exibir a área do círculo
    printf("A área do circulo é %.2f", area);

}