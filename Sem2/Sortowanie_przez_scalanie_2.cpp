#include<stdio.h>
#include<stdlib.h>
#define N 10

void isSorted(int *tablica, int rozmiar){
    int i;
    for(i=0; i<rozmiar-1;i++)
        if(tablica[i+1]<tablica[i])
            printf("BLAD!!!!\n\n\n");
   
}
void merge(int *x,int mstart, int mmid,int mend){
    int i=0, a=mstart, b=mmid+1, msize=mend-mstart+1;
    int *tmp = (int*) malloc(msize * sizeof(int)); //malloc(sizeof(int)*msize);
    for (i=0;i<msize;i++){
        if(a==mmid+1){
            tmp[i]=x[b];
            b++;
            continue;
        }
        if(b==mend+1){
            tmp[i]=x[a];
            a++;
            continue;
        }
        if(x[a]>x[b]){
            tmp[i]=x[b];
            b++;
        }
        else{
            tmp[i]=x[a];
            a++;
        }      
    }
   
    for(i=0;i<msize;i++)
        x[i+mstart]=tmp[i];
   
    free(tmp);
}
 
void split(int *t, int start, int end){
if(start < end){
    int mid = (start + end)/2;
    split(t,start,mid);
    split(t, mid+1, end);
    merge(t, start, mid, end); 
}
}
 
void mergeSort(int *x, int size){
    split(x, 0, N-1);
}
 
 
int main(){
    int tab[N];
    int i;
    for(i=0;i<N;i++)
        tab[i]= rand()%100;
  for(i=0;i<N;i++)
      printf("%d ",tab[i]);
   
    mergeSort(tab, N);
   
   
    printf("\n\n");
    for(i=0;i<N;i++)
        printf("%d ",tab[i]);
   
    isSorted(tab, N);
}
