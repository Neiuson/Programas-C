
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void quickSort(int *vetor, int inicio, int fim);
int partition(int *vetor, int inicio, int final);

int main(void)
{
	int i;
	int vetor[] = {15,44,84,65,33,2,78,44,51};
	
	quickSort(vetor, 0, (sizeof(vetor)/4)-1);
	
	for(i=0;i<9;i++){
		printf("%d\t", vetor[i]);
	}
	return 0;
}

void quickSort(int *vetor, int inicio, int fim)
{
	int pivo;
	if(fim > inicio){
		pivo = partition(vetor, inicio, fim);
		quickSort(vetor, inicio, pivo-1);
		quickSort(vetor, pivo+1,  fim);
	}
}
	
int partition(int *vetor, int inicio, int final)
{
	int esq, dir, pivo, aux;
	esq = inicio;
	dir = final;
	pivo = vetor[inicio];
	while(esq<dir){
		while(vetor[esq] <= pivo)
			esq++;
		while(vetor[dir] > pivo)
			dir --;
		if(esq<dir){
			aux=vetor[esq];
			vetor[esq] = vetor[dir];
			vetor[dir] = aux;
		}
	}
	vetor[inicio] = vetor[dir];
	vetor[dir] = pivo;
	return dir;	
}
	










