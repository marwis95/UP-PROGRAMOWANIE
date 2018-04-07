#include <stdio.h>
#include <stdlib.h>

void wypisz(char tab[]);

int main(){
	
char tab[] = "tekst";
printf("%s\n", tab);
wypisz(tab);

return 0;
}

void wypisz(char tab[]){
	
	printf("%c", tab[0]);
	
}
