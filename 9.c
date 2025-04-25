#include <stdio.h>
int main (){

    int numero, horatrabalhada;
    float valorhora;
    
    scanf ("%d %d %f", &numero, &horatrabalhada, &valorhora);

    printf("NUMERO = %d\n", numero);
    printf("SALARIO = U$%.2f\n", horatrabalhada * valorhora);

    return 0;

}