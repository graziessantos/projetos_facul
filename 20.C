/*ALUNA: GRAZIELLE SANTANA DOS SANTOS
RA: 22510450*/
#include <stdio.h>
int main (){
    float A, B, C, D, E, media, NotaExame;

    scanf("%f %f %f %f", &A, &B, &C,&D);
    
    media = ((A * 2)+(B * 3)+(C * 4)+(D * 1))/10 ;

    printf("Media %.1lf\n", media);

    if (media >= 7.0){
      printf("Aluno aprovado.\n");
    }

    if (media < 5) {
        printf("Aluno reprovado.\n");
        return 0;
    }

    if (media >= 5 && media <= 6.9)
    {
        printf("Aluno em exame.\n");
    }

        printf("Nota do exame: ");
        scanf("%f", &E);
    
        NotaExame = (E + media)/2;

    if (NotaExame >= 5)
        printf("Aluno aprovado.\n");
    else
    {
        printf("Aluno reprovado.\n");
    }
        printf("Media Final: %.1f", NotaExame);
    return 0;
}