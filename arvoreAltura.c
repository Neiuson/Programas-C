#include <stdlib.h>
#include <stdio.h>

 struct arvore{
	int valor;
	struct arvore *direita;
	struct arvore *esquerda;
};
typedef struct arvore ARVORE;

ARVORE * criaArvore();
int alturaArvore(ARVORE *raiz);
ARVORE * insert(ARVORE * no, int value);

int main(void)
{

	ARVORE *raiz=criaArvore();
	
	raiz = insert(raiz, 25);
	raiz = insert(raiz, 60);
	raiz = insert(raiz, 40);
	raiz = insert(raiz, 99);
	raiz = insert(raiz, 12);
	raiz = insert(raiz, 9);
	raiz = insert(raiz, 49);
	raiz = insert(raiz, 1);

	int x = alturaArvore(raiz);
	printf("\nAltura da arvore : %d (0 a %d)", x, x-1);

	return 0;
}

ARVORE* insert(ARVORE *raiz, int value)
{
	if(raiz == NULL){
		raiz=(ARVORE*)malloc(sizeof(ARVORE));
		raiz->valor=value;
		raiz->direita=NULL;
		raiz->esquerda=NULL;

		printf("\n%d cricao de um numero %x\n", raiz->valor, &raiz);
	}
	else if(value < raiz->valor){
		printf("%d<-%d \n",value, raiz->valor);
		raiz->esquerda = insert(raiz->esquerda, value);
	}
	else if(value > raiz->valor){
		printf("%d->%d \n", raiz->valor, value);
		raiz->direita = insert(raiz->direita, value);
	}
	return raiz;
}

ARVORE* criaArvore()
{
	return NULL;
}

int alturaArvore(ARVORE *raiz)
{
	if(raiz==NULL)return 0;
	int altura_esquerda = alturaArvore(raiz->esquerda);
	int altura_direita = alturaArvore(raiz->direita);
	if(altura_esquerda> altura_direita)
		return (altura_esquerda + 1);
	else
		return (altura_direita + 1);
}
