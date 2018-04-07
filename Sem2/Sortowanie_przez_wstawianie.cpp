#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int* GenerujTab(int n){
	int i;
	int *wsk = (int*) malloc(n * sizeof(int));
	
	time_t tt;
	srand(time(&tt));
	
	for(i=0; i<n; i++){
		wsk[i] = rand()%100;
	}
	
	return wsk;
}

void WypiszTab(int *tab, int n){
	int i;
	
	for(i=0; i<n; i++){
		printf("%i ", tab[i]);
	}
	
	printf("\n\n");
}


void Wstawianie(int *tab, int n){
	int element, i, j;
	
	for(i=1; i<n; i++){
		element = tab[i];
		j = i-1;
		
		while((j>=0) && (tab[j]>element)){
			tab[j+1] = tab[j];
			--j;
		}
		tab[j+1] = element;
	}
}

int main(){
	int n = 10;
	
	int *tab = GenerujTab(n);
	
	WypiszTab(tab, n);
	Wstawianie(tab, n);
	WypiszTab(tab, n);
	
	return 0;
}
