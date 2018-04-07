#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void wypisz(int *t, int n){
	int i;
	for(i=0; i<n; i++){
		printf("%d ", t[i]);
	}
	printf("\n");
}

void quick(int *t, int a, int b){
	int i, j, x, temp;
	i = a;
	j = b;
	x = t[a];
	
	do{
	while(t[i]<x)
		i++;
	while(t[j]>x)
		j--;
	
	if(i<=j){
		temp = t[i];
		t[i] = t[j];
		t[j] = temp;
		
		i++;
		j--;
	}
	
	wypisz(t, b+1);
}while(i<=j);

if(a<j){
quick(t, a, j);
}

if(b>i){
quick(t, i, b);	
}

}

void quickSort(int *t, int n){
	quick(t, 0, n-1);
}



int main(){
	int n=20, i;
	int * tab = (int*) malloc(sizeof(int) * (n));
	time_t tt;
	srand(time(&tt));
	
	for(i=0; i<n; i++){
		tab[i] = rand()%100;
	}
	
	wypisz(tab, n);
	quickSort(tab, n);
	printf("\n");
	wypisz(tab, n);
	
	return 0;
}
