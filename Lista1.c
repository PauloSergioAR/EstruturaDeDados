#include <stdlib.h>
#include <stdio.h>

struct lista {
	int info;
	struct lista* prox;
};

typedef struct lista Lista;


Lista* inicializa(){
	return NULL;
}

Lista* insere (Lista* l, int n){
	Lista* novo = (Lista*) malloc(sizeof(Lista));
	novo->info = n;
	novo->prox = l;
	
	return novo;
}

void imprime(Lista* l){
	Lista* q;	
	
	do{
		printf(" %i ", l->info);
		l = l->prox;
	} while(l != NULL);
}

int main(){
	Lista* lista = inicializa();
	
	int i = 0;
	
	for(i ; i < 10; i++){
		lista = insere(lista, i);
	}
		
	imprime(lista);
}



