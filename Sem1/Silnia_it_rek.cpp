#include<stdio.h>
#include<stdlib.h>

int g_a;

unsigned int Silnia_it(unsigned int);
unsigned int Silnia_rek(unsigned int);

int main (void){
int a;
g_a = 5;

printf("%d", Silnia_it(5));
printf("\n%d", Silnia_rek(5));
return 0;
}

unsigned int Silnia_it(unsigned int n){
unsigned wynik = 1;

while(n>0){
wynik = wynik * n;
n = n-1;	
}
}

unsigned int Silnia_rek(unsigned int n){
if (n==0) return 1;
if (n==1) return 1;

return Silnia_rek(n-1) * n;
	
} 


