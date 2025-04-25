/* ALUNA: GRAZIELLE SANTANA DOS SANTOS
RA: 22510450 */
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){

    float A, B, C;
    
    do{

    scanf("%f %f %f", &A, &B, &C);

        if (A < 0 || A > 10 || B < 0 || B > 10 || C < 0 || C > 10) {
        printf("Valor invalido! Ultilize apenas valores de 0 a 10.\n");}
        
    }while (A < 0 || A > 10 || B < 0 || B > 10 || C < 0 || C > 10);

    printf("MEDIA = %.1f\n",
    ((A*2)+(B*3)+(C*5))/10);

    return 0;

}