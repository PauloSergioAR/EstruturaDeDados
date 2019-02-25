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

int comprimento(Lista* l){
	int i;
	Lista* p = l;
	
	for(i = 0; p != NULL; p = p->prox, i++);
	
	return i;
}

int maiorQueN(Lista* l, int n){
	Lista* p = l;
	int i = 0;
	
	while(p != NULL){
		if(p->info > n)
			i++;
			
		p = p->prox;					
	}	
	return i;
}

Lista* substitui(Lista* l, int old, int n){
	Lista* p = l;
	
	while(p != NULL){
		if(p->info == old)
			p->info = n;
			
		p = p->prox;
	}
	return l;
}
int pos = 0;

Lista* ultimo_x(Lista* l, int x){
	Lista* p = l;
	Lista* ultimo;
	
	while(p != NULL){
		if(p->info == x){
			ultimo = p;
		}
		p = p->prox;
		pos++;
	}
	
	return ultimo;
}

Lista* concatena(Lista* l1, Lista* l2){
	Lista* final = l1;
	
	for( ;final->prox != NULL; final = final->prox);
	
	final->prox = l2;
	
	return l1;
}

int main(){
	Lista* lista = inicializa();
	Lista* ultimo;
	
	Lista* lista2 = inicializa()	;
	
	int i = 0;
	int j = 10;
	
	for(i ; i < 10; i++){
		lista = insere(lista, i);
	}
	
	for(j; j < 20; j++){
		lista2 = insere(lista2, j);
	}
	
	lista = concatena(lista, lista2);		
	
	imprime(lista);	
}
