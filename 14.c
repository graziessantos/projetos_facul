/*Aluna: Grazielle Santana dos Santos
RA: 22510450*/
#include <stdio.h>
int main(){

int X;
float Y, consumomedio;

    scanf("%d", &X);
    scanf("%f", &Y);

    consumomedio = X/Y;

    printf("%.3f km/l\n", consumomedio);

    return 0;

}