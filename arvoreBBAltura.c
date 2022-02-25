#include <stdlib.h>
#include <stdio.h>

int x=0;

 struct arvore{
	int valor;
	struct arvore *direita;
	struct arvore *esquerda;
};
typedef struct arvore ARVORE;

ARVORE * criaArvore();
int BuscaArvore(ARVORE *raiz, int value);
ARVORE * insert(ARVORE * no, int value);

int main(void)
{
	ARVORE *raiz=criaArvore();


	raiz = insert(raiz, 19);
	raiz = insert(raiz, 20);
	raiz = insert(raiz, 70);
	raiz = insert(raiz, 56);
	raiz = insert(raiz, 14);
	raiz = insert(raiz, 27);
	raiz = insert(raiz, 99);
	raiz = insert(raiz, 13);
	int num=20;
	int y=BuscaArvore(raiz, num);

	if(y!=0)
		if(x==0)
		printf("\nO elemento %d, esta na altura %d entao ele é a raiz",num, x); 
		else printf("\nO elemento %d, esta na altura %d",num, x); 
		

	else printf("Nao foi encontrado o elemento %d  na arvore", num);
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

int BuscaArvore(ARVORE *raiz, int value)
{
	if(raiz==NULL)return 0;

	ARVORE *atual=raiz;

	while(atual != NULL){
		if(value == atual->valor){
			return 1;
		}
		if(value > atual->valor){
			atual=atual->direita;
			x++;
		}
		else{
			atual=atual->esquerda;
			x++;
		}
	}
	return 0;
}
