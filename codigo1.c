/*ALUNA:GRAZIELLE SANTANA DOS SANTOS
RA: 22510450*/
#include <stdio.h>
#include <math.h>
int main (){

    float A, B, C, delta, R1, R2;

    scanf("%f %f", &A, &B, &C);

    delta = (pow(B,2)) - 4*A*C;
    R1 = (-B + sqrt(delta))/(2*A);
    R2 = (-B - sqrt(delta))/(2*A);

    if (A == 0 || delta < 0 || delta == 0) 
        printf("Impossivel calcular\n");
    else if (R1!=0 && R2!=0)
    {
        printf("R1 = %.5lf\n", R1);
        printf("R2 = %.5lf", R2);
    }
   
    return 0;
}