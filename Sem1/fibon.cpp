#include<stdio.h>
#include<stdlib.h>

int FibonIt(int);
int FibonRek(int);


int main(){
	
int tab[10] = {5};
int i;
char znak[10] = "tekst";


printf("%i", FibonIt(9));
printf("\n");
printf("%i", FibonRek(9));
printf("\n");
printf("%d\n", tab[i]);
printf("\n");

for(i=0; i<10; i++){
	
	printf("%d: %d\n", i, tab[i]);
	
}

printf("\n");
printf("%s", znak);
printf("\n");

for (i=0; i<10; i++){
	
	znak[i]++;
	
}
printf("%s", znak);
printf("\n");


return 0;	
}

int FibonIt(int n){
	int i, poprzedni = 1, przedpoprzedni = 0;
	int temp;
	
	if (n==0)return 0;
	if (n==1) return 1;
	
	for(i=2; i<=n; i++){
		temp = poprzedni + przedpoprzedni;
		przedpoprzedni = poprzedni;
		poprzedni = temp;
	}

return temp;
	
}

int FibonRek(int n){
	
	if (n==0)return 0;
	if (n==1) return 1;
	
	return FibonRek(n-2) + FibonRek(n-1);
	
}
