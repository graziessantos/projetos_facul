#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv){

    int codigoprod1, codigoprod2, numerounidade1, numerounidade2;
    float precounidade1, precounidade2;

    scanf("%d %d %f", &codigoprod1, &numerounidade1, &precounidade1);
    scanf("%d %d %f", &codigoprod2, &numerounidade2, &precounidade2);

    printf("VALOR A PAGAR = %.2f\n",
    ((numerounidade1*precounidade1)+(numerounidade2*precounidade2)));

    return 0;

}