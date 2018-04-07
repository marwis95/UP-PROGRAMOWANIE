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

void Swap(int *a, int *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void Babelkowe(int *tab, int n){
	int temp, zamiana, i;
	
	do{
		zamiana = 0;
		for(i=0; i<n-1; i++){
			if(tab[i]>tab[i+1]){
				zamiana +=1;
				Swap(&tab[i], &tab[i+1]);
			}
		}
		
	}while(zamiana != 0);
}

int main(){
	int n = 10;
	
	int *tab = GenerujTab(n);
	
	WypiszTab(tab, n);
	Babelkowe(tab, n);
	WypiszTab(tab, n);
	
	return 0;
}
