/*ALUNA: GRAZIELLE SANTANA DOS SANTOS
RA: 22510450*/
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){

    char nomevendedor[20];
    float salariofixo, totalvendas;

    scanf("%s", nomevendedor);
    scanf("%f %f", &salariofixo, &totalvendas);

    printf("TOTAL = R$ %.2f\n",
    (salariofixo + (totalvendas * 0.15)));

    return 0;

}

