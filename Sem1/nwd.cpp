#include<stdio.h>
#include<stdlib.h>

unsigned int Nwd(unsigned int, unsigned int);

unsigned int NwdEuklides(unsigned int, unsigned int);

bool CzyPierwsza(unsigned int);

void StoPierwszych();

void PierwszePrzedzial(unsigned int, unsigned int);

void StoWzgledniePierwszych(unsigned int);

void Eratostenes();

int main(void){
	
	printf("%d\n",Nwd(80, 45));
	printf("\n");
	printf("%d\n",NwdEuklides(80, 45));
	printf("\n");
	printf("%d\n",CzyPierwsza(62));
	printf("\n");
	StoPierwszych();
	printf("\n");
	PierwszePrzedzial(20,60);
	printf("\n wzg");
//	StoWzgledniePierwszych();
	
	
	return 0;
}

unsigned int Nwd(unsigned int x, unsigned int y){
	int i, wynik=0, c;
	
	if (x<y) {
	c=x;
}else{
	c=y;
}
	
	for (i = 1; i<=c; i++){
		
		if ((y%i==0) && (x%i==0)){
			wynik = i;
		}
		
	}
	
	return wynik;
}


unsigned int NwdEuklides(unsigned int a, unsigned int b){
	while(a!=b){
		if(a > b){
			a = a - b;	
		} else{
			b = b - a;
		}
	}
	
	return a;
	
}

bool CzyPierwsza(unsigned int x){
	int i;
	if(x==1) return 0;
	for(i=2; i<x; i++){
		if(x%i==0){
			return 0;
		}
		
	}
	
	return 1;
	
}

void StoPierwszych(){
	int i;
	
	for(i=1; i<=100; i++){
		
		if(CzyPierwsza(i)==1){
			printf("\n%d", i);
		}
		
	}
	
}

void PierwszePrzedzial(unsigned int a, unsigned int b){

	int i;
	
	for(i=a; i<=b; i++){
		
		if(CzyPierwsza(i)==1){
			printf("\n%d", i);
		}
		
	}
	
}

void StoWzgledniePierwszych(){
	int i;
	
	for(i=1; i<=100; i++){
		
		if(Nwd(i+5, i) == 1){
			printf("\n%d %d", i, i+5);
		}
		
	}
	
}

//void Eratostenes(unsigned int zakres){
//	unsigned int tab[], i;
//	for
	
//}

