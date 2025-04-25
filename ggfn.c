/*ALUNA: GRAZIELLE SANTANA DOS SANTOS
RA: 22510450*/
#include <stdio.h>
int main() {

    float Salario, Reajuste, NovoSalario;
    int percentual;

    scanf("%f", &Salario);

    if (Salario <= 400.00) {
        percentual = 15;
    }
    else if (Salario <= 800.00) {
        percentual = 12;
    }
    else if (Salario <= 1200.00) {
        percentual = 10;
    }
    else if (Salario <= 2000.00) {
        percentual = 7;
    }
    else {
        percentual = 4;
    }

    Reajuste = Salario * percentual / 100;
    NovoSalario = Salario + Reajuste;

    printf("Novo Salario: %.2f\n", NovoSalario);
    printf("Reajuste ganho: %.2f\n", Reajuste);
    printf("Em percentual: %d %%\n", percentual);

    return 0;
}