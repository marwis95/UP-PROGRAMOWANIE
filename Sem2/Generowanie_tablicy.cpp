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
}

int main(){
	int n = 10;
	
	int *tab = GenerujTab(n);
	
	WypiszTab(tab, n);
	
	return 0;
}
