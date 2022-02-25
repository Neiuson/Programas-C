#include <stdio.h> 

#include <stdlib.h> 

int main (){ 
    float *pv;// vetor/ponteiro 
    float x = 1; 
    int i = 1, q;// contador 

    pv = (float *) (malloc (i * sizeof(int))); 
 
    while (x != 0){ 
        printf ("Insira qualquer numero(0 para sair):"); 
        scanf ("%f", &x); 
		if(x!=0){
        	pv = (float *)realloc(pv, i*sizeof(int)); 
        	pv[i - 1] = x; 
        	i++;
		}
    } 

    for (q=0;q<i;q++){ 
        printf("%.1f ", pv[q]);
    } 
    printf("\n");
    i=i-1;
    for (q=0;q<i;q++){ 
        printf("%.1f ", pv[q]);
    }

    free(pv); 

  return 0; 
} 

