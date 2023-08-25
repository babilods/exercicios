#include<stdio.h>

int main(){
    float comprimento, largura, area;

//Medidas da sala
    printf("O comprimento da sala e: ");
    scanf("%f", &comprimento);

    printf("A largura da sala e: ");
    scanf("%f", &largura);
  
//Calcular a área da sala
    area = comprimento * largura;

//resolução da área da sala
    printf("A area da sala e %.0f", area);    

}
