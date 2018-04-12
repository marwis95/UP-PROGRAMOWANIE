#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>

int losuj(int od, int ddo){	
	return od  + rand() % (ddo -od);
}

int main(){
	int i;
	time_t tt;
	srand(time(&tt));

	for(i=0; i<100; i++){
	printf("%d \n", losuj(80, 100));
	}

	return 0;
}
