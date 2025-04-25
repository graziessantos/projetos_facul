#include <stdio.h>
int main() {

    int h_inicio, m_inicio, h_fim, m_fim, m_inicio, m_fim, total_inicio, total_fim;

    scanf("%d %d %d %d", &h_inicio, &m_inicio, &h_fim, &m_fim);

    // Convertendo tudo pra minutos
     total_inicio = h_inicio * 60 + m_inicio;
     total_fim = h_fim * 60 + m_fim;

     
     if ((h_inicio == 0 && h_fim == 0) || ((h_inicio * 60 + m_inicio) == (h_fim * 60 + m_fim)))
     {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
     }
     else if ((h_inicio > h_fim) || (h_inicio == h_fim && m_inicio > m_fim)) {
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n");
    } else {
        // O jogo passou da meia-noite
        int total = (24 * 60 - inicio_total) + fim_total;
        m_inicio = total / 60;
        m_fim = total % 60;
    }

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", m_inicio, m_fim);

    return 0;
}