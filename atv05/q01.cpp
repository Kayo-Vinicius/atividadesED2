#include <stdio.h>
#include <time.h>

    struct horario
    {
        int dia, mes, ano;
        int hora, min, seg;
        char comp[89];
	};

int main(void) {
	
    struct tm tempo;
	time_t tempoSeg;

	time(&tempoSeg);
	tempo = *localtime(&tempoSeg);

	struct horario Horario;

	Horario.dia = tempo.tm_mday;
	Horario.mes = tempo.tm_mon + 1;
	Horario.ano = tempo.tm_year + 1900;
	
	Horario.hora = tempo.tm_hour;
	Horario.min = tempo.tm_min;
	Horario.seg = tempo.tm_sec;

	printf("Crie seu compromisso: ");
	scanf("%s", Horario.comp);
	printf("\nCompromisso criado: %s", Horario.comp);
	printf("\nData: %02d/%02d/%d", Horario.dia, Horario.mes, Horario.ano);
	printf("\nHora: %02d:%02d:%02d", Horario.hora, Horario.min, Horario.seg);
    
	
	return 0;
}
