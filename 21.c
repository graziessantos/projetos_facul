/*ALUNA: GRAZIELLE SANTANA DOS SANTOS
RA: 22510450*/
#include <stdio.h>

int main() {
    float a, b, c, Perimetro_Triangulo, Area_Trapezio;

    scanf("%f %f %f", &a, &b, &c);
    Perimetro_Triangulo = a + b + c; 
    Area_Trapezio = ((a + b) * c) / 2;

    if (a + b > c && a + c > b && b + c > a) {
        printf("Perimetro = %.1f\n", Perimetro_Triangulo);
    }
    else {
        printf("Area = %.1f\n", Area_Trapezio);
    }

    return 0;
}