#include<stdio.h>
#include<stdlib.h>


void Wielokrotnosci(unsigned int, unsigned int);

int main (void){
unsigned int n=6,m=3;

Wielokrotnosci(n,m);	
	
return 0;
}


void Wielokrotnosci(unsigned int x, unsigned int y){
	int i=0;
	
	for(i=1; i<=y; i++){
	printf("%d\n", x*i);	
	}
	
	
}
