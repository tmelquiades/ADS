/*
**	Função: Ler o horário (hora, minuto e segundo) de início e a duração 
(em segundos) de uma experiência biológica. O programa deve resultar com 
o novo horário (hora, minuto e segundo) do término da experiência.
**	Autor: Thaís Melquíades Macêdo - ADS P2 - TDA - TURMA B
**	Data: 21/09/2023
**	Observações:
*/

#include <stdio.h>

int main() {
	
	int h_ini, min_ini, s_ini, d, h_ter, min_ter, s_ter;

	printf("Digite a hora de inicio: ");
	scanf("%d", &h_ini);
	printf("\nDigite o minuto de inicio: ");
	scanf("%d", &min_ini);
	printf("\nDigite os segundos de inicio: ");
	scanf("%d", &s_ini);

	printf("\nAgora, digite a duracao da experiencia em SEGUNDOS: ");
	scanf("%d", &d);

	s_ter = s_ini+d;
	min_ter = min_ini+(s_ter/60);
	h_ter = h_ini+(min_ter/60);

	s_ter%=60;
	min_ter%=60;
	h_ter%=24;

	printf("\nO horario de termino da experiencia sera %dh%dmin%ds.", h_ter, min_ter, s_ter);

}
