#include <stdio.h>
#include <math.h>

int main() {
    int h_inicio, h_fim, m_inicio, m_fim;

    scanf("%d %d %d %d", &h_inicio, &m_inicio, &h_fim, &m_fim);

    if (h_inicio > 12 && h_fim < 12 && m_inicio > 0 && m_fim < 59) {
        printf("O JOGO DUROU %d HORA(S)\n",
        abs(abs(h_inicio-12)-(h_fim+12)) - abs(abs((m_inicio*60)-12) - ((m_fim*60)-12)));
    }
    if (h_inicio==0 && h_fim==0 || h_inicio==h_fim||m_inicio==0 && m_fim==0 || m_inicio==m_fim) {
        printf("O JOGO DUROU 24 HORA(S)\n");
    }
    if (h_inicio<12 && h_fim>12||m_inicio<12 && m_fim>12) {
        printf("O JOGO DUROU %d HORA(S)\n",
        abs(abs(h_inicio+12))- abs(abs(h_fim+12)-((m_inicio*60)+12)-((m_fim*60)+12)));
    }
}