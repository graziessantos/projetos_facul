#include <stdio.h>
int main (){

    float valormonetario;
    int d100, d50, d20, d10, d5, d2, m1, m050, m025, m010, m005, m001;

    scanf("%f", &valormonetario);
    int total = (int)(valormonetario*100 + 0.5);

    d100 = total / 10000;
    d50 = (total - d100*10000) / 5000;
    d20 = ((total - d100*10000) - d50*5000) / 2000;
    d10 = (((total - d100*10000 - d50*5000) - d20*2000) / 1000);
    d5  = ((((total - d100*10000 - d50*5000 - d20*2000) - d10*1000)) / 500);
    d2  = (((total - d100*10000 - d50*5000 - d20*2000 - d10*1000 - d5*500)) / 200);

    m1   = (total - d100*10000 - d50*5000 - d20*2000 - d10*1000 - d5*500 - d2*200) / 100;
    m050 = (total - d100*10000 - d50*5000 - d20*2000 - d10*1000 - d5*500 - d2*200 - m1*100) / 50;
    m025 = (total - d100*10000 - d50*5000 - d20*2000 - d10*1000 - d5*500 - d2*200 - m1*100 - m050*50) / 25;
    m010 = (total - d100*10000 - d50*5000 - d20*2000 - d10*1000 - d5*500 - d2*200 - m1*100 - m050*50 - m025*25) / 10;
    m005 = (total - d100*10000 - d50*5000 - d20*2000 - d10*1000 - d5*500 - d2*200 - m1*100 - m050*50 - m025*25 - m010*10) / 5;
    m001 = (total - d100*10000 - d50*5000 - d20*2000 - d10*1000 - d5*500 - d2*200 - m1*100 - m050*50 - m025*25 - m010*10 - m005*5) / 1;

    
    
    
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