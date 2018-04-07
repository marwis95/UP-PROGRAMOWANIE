#include <stdio.h>
#include <stdlib.h>

#define N 30

int tab[N] = {30,29,28,27,26,25,1,2,3,4,5,6,7,24,23,22,21,20,19,18,8,9,10,11,17,16,15,13,14,12};
int t[N]; 

void merge(int poczatek, int srodek, int koniec) {
	int i, j, k;
	
	for ( i = poczatek; i <= koniec; i++) 
		t[i] = tab[i];
		i = poczatek; j = srodek + 1;  k = poczatek;
		
	while (i <= srodek && j <= koniec) {
		if (t[i] < t[j])
			tab[k++] = t[i++];
		else
			tab[k++] = t[j++];
	}
	
	while ( i <= srodek)
		tab[k++] = t[i++];
		
	
}

void merge_sort(int poczatek, int koniec) {
	int srodek;
	
	if ( poczatek < koniec) {
		srodek = (poczatek + koniec)/2;
		merge_sort(poczatek, srodek);
		merge_sort(srodek + 1, koniec);
		merge(poczatek, srodek, koniec);
	}
}

int main() {
	
	int i;
	
	printf("Zbior przed sortowaniem:\n");
	for ( i = 0; i < N; i++)
		printf("%d ", tab[i]);
		
	merge_sort(0, N - 1);
	
	printf("\nZbior po sortowaniu:\n");
	for (i=0; i<N; i++)
		printf("%d ", tab[i]);
	
	return 0;
}
