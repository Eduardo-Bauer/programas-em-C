#include<stdio.h>

void escrevehora(int horario){
	int hora;
	int minuto;
	int segundo;
	segundo = horario & 0x3f;
	minuto = (horario>>6) & 0x3f;
	hora = (horario>>12) & 0x3f;
	printf("%02d/%02d/%02d\n", hora, minuto, segundo);
}

int add(int horario){
	int hora;
	int minuto;
	int segundo;
	segundo = horario & 0x3f;
	minuto = (horario>>6) & 0x3f;
	hora = (horario>>12) & 0x3f;
	segundo++;
	if(segundo >= 60){
		segundo = 0;
		minuto++;
	}
	if(minuto >= 60){
		minuto = 0;
		hora++;
	}
	if(hora >= 24){
		hora = 0;
	}
	int novo = hora;
	novo = (novo<<6) | minuto;
	novo = (novo<<6) | segundo;
	return novo;
}

int main(){
	int horario = 0x17ebb;
	escrevehora(horario);
	int novo = add(horario);
	escrevehora(novo);
}
