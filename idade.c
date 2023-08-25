#include <stdio.h>

int main() {
    int anos, meses, dias;
    
// Ler a idade em anos depois em meses e dias
    printf("Digite a idade em anos: ");
    scanf("%d", &anos);
    
    printf("Digite a idade em meses: ");
    scanf("%d", &meses);
    
    printf("Digite a idade em dias: ");
    scanf("%d", &dias);
    
// Calculando a idade total em dias
     int idadeEmDias = anos * 365 + meses * 30 + dias;
    
// Resultado
    printf("A idade em dias e: %d", idadeEmDias);

}
