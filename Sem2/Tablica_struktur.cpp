#include <stdio.h>
#include <stdlib.h>
#define N 30

struct Student{
	int wiek;
	int ocena;
}tab[N];

void WypiszTab(Student *tab, int n){
	int i;
	
	for(i=0; i<n; i++){
		//printf("Student: %i Ocena: %i Wiek: %i ", i, tab[i].ocena, tab[i].wiek);
	}
}

int main(){
	int i;
	
	for(i=0; i<N; i++){
		tab[i].ocena = i;
		tab[i].wiek = i*2;
	}
	
	
	for(i=0; i<N; i++){
		printf("Student: %i Ocena: %i Wiek: %i \n", i, tab[i].ocena, tab[i].wiek);
	}
	
	WypiszTab(tab, N);
	
}
