#include <stdio.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define MAX 5

typedef struct{
char info;
}Dado;

typedef struct{
	Dado v[MAX];
	int topo;
}tPilha;

void inicia(tPilha *Pilha){
	int i;
	Pilha->topo=0;
	for(i=0;i<MAX;i++){
		Pilha->v[i].info=' ';
	}
}

bool vazio(tPilha *Pilha){
	if(Pilha->topo==0){
		return true;
	}else{
		return false;
	}
}

bool cheio(tPilha *Pilha){
	if(Pilha->topo==MAX){
		return true;
	}else{
		return false;
	}
}
void exibir(tPilha *Pilha){
	int i;
	for(i=0;i<Pilha->topo;i++){
		printf("%c\n",Pilha->v[i].info);
	}
}
void push(tPilha *Pilha){
	char info;
	if(cheio(Pilha)==true){
		printf("A pilha ta cheia!");
	}else{
		scanf(" %c",&info);
		Pilha->v[Pilha->topo++].info=info;
	}
}
void pop(tPilha *Pilha){
	if(vazio(Pilha)==true){
		printf("A pilha ta vazia!");
	}else{
		Pilha->topo--;
		Pilha->v[Pilha->topo].info=' ';
	}
}
void opcao(int opt,tPilha *Pilha){
	switch(opt){
		case 1:inicia(Pilha);
			   break;
        case 2:exibir(Pilha);
        	   break;
        case 3:push(Pilha);
        	   break;
        case 4:pop(Pilha);
        	   break;
	}
}
int main(){
	tPilha Pilha;
	int opt;
	inicia(&Pilha);
	do{
		printf("Escolha a opcao:\n");
		printf("0. Sair\n");
		printf("1. Zerar PILHA\n");
		printf("2. Exibir PILHA\n");
		printf("3. PUSH\n");
		printf("4. POP\n");
		printf("Opcao: "); 
		scanf("%d",&opt);
		opcao(opt,&Pilha);
	}while(opt!=0);
	return 0;
}
