/*ALUNA: GRAZIELLE SANTANA DOS SANTOS
RA: 22510450*/
#include <stdio.h>
int main() {

    int h_inicio, m_inicio, h_fim, m_fim, duracao_horas, duracao_minutos;

    scanf("%d %d %d %d", &h_inicio, &m_inicio, &h_fim, &m_fim);

    if ((h_inicio == 0 && h_fim == 0) || (h_inicio == h_fim && m_inicio == m_fim)) {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }

    else if ((h_inicio > h_fim) || (h_inicio == h_fim && m_inicio > m_fim)) {
        duracao_horas = 24 - h_inicio + h_fim;
        duracao_minutos = m_fim - m_inicio;

        if (duracao_minutos < 0) {
            duracao_minutos += 60;
            duracao_horas -= 1;
        }

        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", duracao_horas, duracao_minutos);
    }

    else {
        duracao_horas = h_fim - h_inicio;
        duracao_minutos = m_fim - m_inicio;

        if (duracao_minutos < 0) {
            duracao_minutos += 60;
            duracao_horas -= 1;
        }
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", duracao_horas, duracao_minutos);
    }

    return 0;
}
