
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void retornaChar(char string[]);

int main(void)
{
	char exercicio1[]="zabumba";
	retornaChar(exercicio1);
	printf("\n%s", exercicio1);

return 0;
	
}

void retornaChar(char *string)
{
	int i,j;
	char *change;
	
	for(j=0; j < (sizeof(string)-1); j++){
		for(i=0; i < (sizeof(string)-2); i++)
		{	
			if(string[i]  > string[i+1]){
				change[0] = string[i];				
				string[i] =  string [i +1];				
				string[i + 1] = change[0];				
			}
		}
	}
}


