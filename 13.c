/*Aluna: Grazielle Santana dos Santos
RA: 22510450*/
#include <stdio.h>
#include <math.h>

int main (){
float volume, pi, raio;

    scanf("%f", &raio);

    pi = 3.14159;

    volume = (4.0/3)*pi*pow(raio,3);

    printf("VOLUME = %.3f\n", volume);

    return 0;
}