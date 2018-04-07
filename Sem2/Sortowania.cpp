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

void wypisz(int *t, int n){
	int i;
	for(i=0; i<n; i++){
		printf("%d\n", t[i]);	
		
	}
	
}

void bubble_sort(int *t, int n){
	
	int schowek,zamiana,i;
	do{
		zamiana=0;
		for (i=0; i<n-1; i++){
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
	

}

void wst_sort(int *tab, int n)
{
     int pom, j, i;
     for(i=1; i<n; i++)
     {
             //wstawienie elementu w odpowiednie miejsce
             pom = tab[i]; //ten element bedzie wstawiony w odpowiednie miejsce
             j = i-1;
             
             //przesuwanie elementów wiekszych od pom
             while(j>=0 && tab[j]>pom) 
             {
                        tab[j+1] = tab[j]; //przesuwanie elementów
                        --j;
             }
             tab[j+1] = pom; //wstawienie pom w odpowiednie miejsce
     }     
}


int main(){
	int n = 10, i;

	
	int *tab = GenerujTab(n);
	
	printf("Tablica\n");
	wypisz(tab, n);
	
	
	bubble_sort(tab, n);
	printf("\nBubble\n");
	wypisz(tab, n);
	
	wst_sort(tab, n);
	printf("\nWstawianie\n");
	wypisz(tab, n);
	
	free(tab);
	return 0;
}
