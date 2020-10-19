#include <stdio.h>
typedef struct{
	int hora;
	int min;
}thorario;
thorario lerhorario(){
	thorario x;
	printf("Digite as horas:\n");
	scanf("%d",&x.hora);
	printf("Digite os minutos:\n");
	scanf("%d",&x.min);
	return x;
}
void despertador(thorario a,thorario d){
	int mintotalA,mintotalD,dif;
	mintotalA=(a.hora*60)+(a.min);
	mintotalD=(d.hora*60)+(d.min);
	if(mintotalD>mintotalA){
		dif=(mintotalD-mintotalA);
		printf("Faltam %d horas e %d minutos para despertar.",(dif/60),(dif%60));
	}
}
int main(){
	thorario a,d;
	printf("Digite as horas e minutos do despertador:\n");
	d=lerhorario();
	printf("Digite as horas e minutos atuais:\n");
	a=lerhorario();
	despertador(a,d);
	return 0;
}