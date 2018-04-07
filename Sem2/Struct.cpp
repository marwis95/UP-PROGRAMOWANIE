#include <stdio.h>
#include <stdlib.h>
#include <time.h>


struct Student {
	
	int Wiek;
	double Ocena;
	
};

double zaokr(double x){
	double temp;
	temp = x-(int)x; // wyciagniecie liczb po przecinku
	
	if(temp>=0.5){
		return (int)x+0.5;
	}else{
		return (int)x;
	}
}

void f(struct Student * Lista, int rozmiar){
	int i;
	int zarodek;
	time_t tt;
	srand(time(&tt));

	
	for(i=0; i<rozmiar; i++){
		

		
		Lista[i].Wiek = rand() % 12 + 18; //18-OD 18+12-DO
		Lista[i].Ocena = zaokr((double)rand()/RAND_MAX * 3 + 2);
		
		//(*Lista).Wiek = 19;
		//(*Lista).Ocena = 5.0;
		
		
	}
	
}

void wypisz(struct Student * L, int rozmiar){
	int i;
	for(i=0; i<rozmiar; i++){
		
		printf("%i : %i : %.1f \n", i, L[i].Wiek, L[i].Ocena);
		
	}
	
}

int main(){
	//struct Student S1, S2;
	//printf("%d", sizeof(struct Student));
	int zmienna, i, zarodek;
	struct Student ListaStudentow[15];
	
	f(ListaStudentow, 15);
	wypisz(ListaStudentow, 15);
	
	
	printf("Rand max: %d", RAND_MAX);
	
	
	return 0;
}
