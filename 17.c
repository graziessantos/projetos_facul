#include <stdio.h>
int main (){

    float valormonetario;
    int d100, d50, d20, d10, d5, d2, m1, m050, m025, m010, m005, m001;

    scanf("%f", &valormonetario);

    d100 = valormonetario/100;
    d50 = (valormonetario - d100*100)/50;
    d20 = ((valormonetario - d100*100) - d50*50)/20;
    d10= (((valormonetario - d100*100) - d50*50) - d20*20)/10;
    d5 = ((((valormonetario - d100*100) - d50*50) - d20*20) - d10*10)/5;
    d2 = (((((valormonetario - d100*100) - d50*50) - d20*20) - d10*10) - d5*5)/2;

    m1 = valormonetario - (d100*100 + d50*50 + d20*20 + d10*10 + d5*5 + d2*2);
    m050 = (valormonetario - (d100*100 + d50*50 + d20*20 + d10*10 + d5*5 + d2*2 + m1*1)) / 50;
    m025 = (valormonetario - (d100*100 + d50*50 + d20*20 + d10*10 + d5*5 + d2*2 + m1*1 + m050*0.5)) / 25;
    m010 = (valormonetario - (d100*100 + d50*50 + d20*20 + d10*10 + d5*5 + d2*2 + m1*1 + m050*0.5 + m025*0.25)) / 10;
    m005 = (valormonetario - (d100*100 + d50*50 + d20*20 + d10*10 + d5*5 + d2*2 + m1*1 + m050*0.5 + m025*0.25 + m010*0.10)) / 5;
    m001 = (valormonetario - (d100*100 + d50*50 + d20*20 + d10*10 + d5*5 + d2*2 + m1*1 + m050*0.5 + m025*0.25 + m010*0.10 + m005*0.05)) / 1;
    
    
    
    printf("NOTAS\n");
    printf("%d nota (s) de R$ 100,00\n", d100);
    printf("%d nota (s) de R$ 50,00\n", d50);
    printf("%d nota (s) de R$ 20,00\n", d20);
    printf("%d nota (s) de R$ 10,00\n", d10);
    printf("%d nota (s) de R$ 5,00\n", d5);
    printf("%d nota (s) de R$ 2,00\n", d2);

    printf("MOEDAS:\n");
    printf ("%d moeda (s) de R$ 1,00\n", m1);
    printf ("%d moeda (s) de R$ 0,50\n", m050);
    printf ("%d moeda (s) de R$ 0,25\n", m025);
    printf ("%d moeda (s) de R$ 0,10\n", m010);
    printf ("%d moeda (s) de R$ 0,05\n", m005);
    printf ("%d moeda (s) de R$ 0,01\n", m001);


    return 0;
}