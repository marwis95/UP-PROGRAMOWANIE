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


int *pom; //tablica pomocnicza, potrzebna przy scalaniu

//scalenie posortowanych podtablic
void scal(int *tab, int lewy, int srodek, int prawy) 
{
	int i = lewy, j = srodek + 1;
 
  //kopiujemy lew¹ i praw¹ czêœæ tablicy do tablicy pomocniczej
  for(int i = lewy;i<=prawy; i++) 
    pom[i] = tab[i];  
  
  //scalenie dwóch podtablic pomocniczych i zapisanie ich 
  //we w³asciwej tablicy
  for(int k=lewy;k<=prawy;k++) 
  if(i<=srodek)
    if(j <= prawy)
         if(pom[j]<pom[i])
             tab[k] = pom[j++];
         else
             tab[k] = pom[i++];
    else
        tab[k] = pom[i++];
  else
      tab[k] = pom[j++];
}

void sortowanie_przez_scalanie(int *tab,int lewy, int prawy)
{
	//gdy mamy jeden element, to jest on ju¿ posortowany
	if(prawy<=lewy) return; 
	
	//znajdujemy srodek podtablicy
	int srodek = (prawy+lewy)/2;
	
	//dzielimy tablice na czêsæ lew¹ i prawa
	sortowanie_przez_scalanie(tab, lewy, srodek); 
	sortowanie_przez_scalanie(tab, srodek+1, prawy);
	
	//scalamy dwie ju¿ posortowane tablice
	scal(tab, lewy, srodek, prawy);
}


int main(){
	int tab[N], i;
	
	for(i=0; i<N; i++){
		tab[i] = rand() % 100;
	}
	
	wypisz(tab, N);
	
	sortowanie_przez_scalanie(tab, 0, N-1);
	
	wypisz(tab, N);
	
	return 0;
}
