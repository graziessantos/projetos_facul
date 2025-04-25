/*Este programa atribui nome, sexo, salario, idade de uma pessoa a variáveis e em seguida as imprime
Criadora: Grazielle
Data: 25/02/2025*/

#include <stdio.h>

int main(){
    char nome[] = "Gojo Satoru";
    char sexo = 'M';
    double salario;
    salario = 1000000.90;
    int idade = 28;

    printf("Seus dados sao: \n");
    printf("\tNome: %s \n", nome);
    printf("\tSexo: %c \n", sexo);
    printf("\tVoce ganha %.2lf reais por dia \n", salario);
    printf("\tVoce tem %d anos.", idade);

    return 0;
}