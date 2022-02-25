
int main (void)
{
	int i;
	int vet[] = {10, 100,55,20,90};
	
	insert_sort(vet, (sizeof(vet)/4));
	
	for(i=0; i < 5; i++){
		printf("%d\t", vet[i]);
	}
	
	return 0;
}

void insert_sort(int *str, int len)
{				

	int i, j, seg;	
	for(i=1; i < len; i++){
		seg = str[i];
		j = i - 1;		
		while((j>=0) && (seg < str[j])){
			str[j+1] = str[j];
			j--;
		}				
		
		str[j+1] = seg;
	}
}
