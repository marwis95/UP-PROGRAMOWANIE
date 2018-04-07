#include <stdio.h>
#include <stdlib.h>

#define N 10

void wypisz(int *t, int n){
	int i;
	for(i=0; i<N; i++){
		printf("%i ", t[i]);
	}
	printf("\n");
	
}

void scal(int * t, int pocz, int kon){
	int rozmiar = kon - pocz + 1;
	int srodek = (kon+pocz)/2;
	int i;
	int * tabTemp = (int*) malloc(sizeof(int) * (rozmiar));
	int srodekTemp = (kon - pocz)/2;
	
	for(i=0; i<rozmiar; i++){
		tabTemp[i] = t[pocz+i];
	}
	
	int wsk1 = pocz;
	int wsk2 = srodek+1;
	
	int wsk1Temp = 0;
	int wsk2Temp = srodekTemp+1;
	
	while((wsk1Temp <= srodek) && (wsk2Temp <= kon)){
		if(tabTemp[wsk1Temp] < tabTemp[wsk2Temp]){
			t[wsk1++] = tabTemp[wsk1Temp++];
		}else{
			t[wsk1++] = tabTemp[wsk2Temp++];
		}
	}
	
	while(wsk1Temp <= )
	
	free(tabTemp);
}

void podziel(int * t, int pocz, int kon){
	int srodek = (pocz + kon)/2; //srodek
	
	if(kon-pocz > 0){	
		podziel(t, pocz, srodek);
		podziel(t, srodek+1, kon);
		scal(t, pocz, kon);
	}
	printf("%d .. %d\n", pocz, kon);
}

void mergeSort(int * t, int n){
	podziel(t, 0, n-1); 
	
	
}

int main(){
	int tab[N], i;
	
	for(i=0; i<N; i++){
		tab[i] = rand() % 100;
	}
	
	wypisz(tab, N);
	
	mergeSort(tab, N);
	
	wypisz(tab, N);
	
	return 0;
}
