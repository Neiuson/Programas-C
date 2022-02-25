
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int searchRecursive(int *vetor, int len, int num, int index);
int main(void)
{
	
	int vetor[] = {44,54,2,41,9,66,73,37,89,71};
	searchRecursive(vetor, sizeof(vetor)/4, 71, 0);

	
	
}

int searchRecursive(int *vetor, int len, int num, int index)
{
	if(vetor[index] == num){
	 	printf("O numero procurado se encontra na posicao %d do array(0-9)", index);
		return 0;
	}
	else return searchRecursive(vetor, len, num, index + 1);
	
	
}
