#include <stdio.h>
#include <stdlib.h>

struct lista {
	int info;
	struct lista* prox;	
};
typedef struct lista Lista;

Lista* inicializa(){
	return NULL;
}

Lista* insere (Lista* l, int i){
	Lista* p = l;
	Lista* novo = (Lista*) malloc(sizeof(Lista));
	novo->info = i;
	
	if(!l){
		l = novo;
		l->prox = novo;		
	} else {
		for(p; p->prox != l; p = p->prox);
		p->prox = novo;
		novo->prox = l;		
	}
	return(l);
}

Lista* insere ordenado(Lista* l, int i){
	Lista*p = l;
	lista* novo = (Lista*) malloc(sizeof(lista));
	novo->info = i;
	
	if(!l){
		l = novo;
		l->prox = novo;
	}else{
		for(p; p->prox->info < n; p = p->prox);	
		
	}
}

