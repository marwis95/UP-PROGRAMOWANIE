#include<stdio.h>
#include<stdlib.h>
#include<time.h>


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

int* GenerujTab(int n){
	int i;
	int *wsk = (int*) malloc(n * sizeof(int));
	
	time_t tt;
	srand(time(&tt));
	
	for(i=0; i<n; i++){
		wsk[i] = rand()%20;
	}
	
	return wsk;
}

int szukaj(int *t, int szukana, int n){
	int i;
	for(i=0; i<n; i++){
		if(t[i] == szukana) return i;
	}
	
	return -1;
	
}

int szukajBin(int *t, int szukana, int n){
	int lewy = 0;
	int prawy = n-1;
	int srodek = (lewy+prawy)/2; 

	while(lewy <= prawy){
		srodek = (lewy+prawy)/2;
		
		if(t[srodek] == szukana) 
			return srodek;
		
		if(t[srodek] > szukana) 
			prawy = srodek-1;	
		else
			lewy = srodek+1;		
	}
	
	return -1;

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
	printf(" \n%i\n", szukaj(tab, 5, n));
	
	Babelkowe(tab, n);
	WypiszTab(tab, n);
	printf(" \n%i\n", szukajBin(tab, 5, n));
	
	return 0;
}

