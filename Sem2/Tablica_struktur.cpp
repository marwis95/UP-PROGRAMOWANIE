#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 30

struct Student{
	int wiek;
	int ocena;
};

Student* GenerujTab(int n){
	int i;
	Student *wsk = (Student*) malloc(n * sizeof(Student));
	
	time_t tt;
	srand(time(&tt));
	
	for(i=0; i<n; i++){
		wsk[i].ocena = 2 + rand()%4;
		wsk[i].wiek = 20 + rand()%10;
	}
	
	return wsk;
}

void WypiszTab(Student *tab, int n){
	int i;
	
	for(i=0; i<n; i++){
		printf("Student: %i Ocena: %i Wiek: %i \n", i, tab[i].ocena, tab[i].wiek);
	}
}

int main(){
	int i;
	
	Student *tab = GenerujTab(N);
	
	WypiszTab(tab, N);
	
}
