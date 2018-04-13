#include <stdio.h>
 
int tab[5] = {4,2,6,1,5};
int p[5];
 
void print_table(int tab[], int size){
	int i;
	for(i = 0; i<size; i++){
		printf("%d ", tab[i]);
	}printf("\n");
}
 
void merge_sort(int poczatek, int koniec){
	int is, i1, i2, i;
	is = (poczatek + koniec + 1) /2;
	if (is-poczatek > 1) merge_sort(poczatek, is-1);
	if (koniec - is > 0) merge_sort(is, koniec);
	i1 = poczatek;
	i2 = is;
	for (i = poczatek; i<=koniec; i++){
		p[i] = ((i1 == is) ||((i2 <= koniec) && (tab[i1] > tab[i2])))?tab[i2++]:tab[i1++];
	}
	for(i = poczatek;i<=koniec; i++){
		tab[i] = p[i];
	}
}
 
int main(void) {
 
	print_table(tab, 5);
	merge_sort(0, 4);
	print_table(tab, 5);
	return 0;
}
