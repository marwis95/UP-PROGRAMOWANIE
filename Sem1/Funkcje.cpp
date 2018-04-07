#include <stdio.h>
//1.odwracanie textu
//2.Sortowanie

void odwroc(char *);
void sort(char *);
void swap(char *, char *);

int main(){
	int i;
	char tab[5] = {'t','e','k','s','t'};
	char *wsk;
	wsk = &tab[0];
	for(i=0; i<5; i++){
		printf("%c", tab[i]);
	}
	
	printf("\n");
	
	odwroc(wsk);
	
	printf("\n");
	
	sort(wsk);
	
	return 0;
}

void odwroc(char *tablica){
	int i;
	
	for(i=4; i>=0; i--){
			printf("%c", tablica[i]);
	}
	
}

void swap(char *a, char *b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void sort(char *tab)
{
	int n=5;
  	for(int i=0;i<n;i++){
    	for(int j=1;j<n-i;j++){ //pêtla wewnêtrzna
    	if(tab[j-1]>tab[j])
      		swap(&tab[j-1], &tab[j]);
  		}
	}
	
    int k;
    for (k=0; k<n; k++){
      	
      	printf("%c", tab[k]);
      	
	  }
}
