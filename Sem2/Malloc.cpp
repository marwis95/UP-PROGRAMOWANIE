#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int* GenerujTab(int n){
	int *wsk = (int*) malloc (n * sizeof(int));
	int i;
	
	time_t tt;
	srand(time(&tt));
	
	for(i=0; i<n; i++){
		
		wsk[i] = rand();
		
	}
	return wsk;
	
}

int* sort(int * t, int n){
	
	int schowek,zamiana;
	do{
		zamiana=0;
		for (int i=0; i<n; i++){
		if (t[i]>t[i+1])
		{
		zamiana=zamiana+1; 
		schowek=t[i];
		t[i]=t[i+1];
		t[i+1]=schowek;
		}
		}
		}
		while(zamiana!=0);
	
	return t;
}



int main(){
	int n = 30, i;

	
	int * tab = GenerujTab(n);
	
		for(i=0; i<15; i++){
		printf("%d\n", tab[i]);	
		
	}
	
	printf("\n\n\n");
	
	sort(tab, n);
	
	
	for(i=0; i<15; i++){
		printf("%d\n", tab[i]);	
		
	}
	
	free(tab);
	return 0;
}
