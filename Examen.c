#include <stdio.h>

int list[0];

void ord(int list[],int n){
   int min, temporal;     
	for(int i=0; i<n; i++){
		min = i;
	       for(int j=i+1; j<n;j++){
	       	if(list[j] < list[min])
			min = j;
	     	}
	  if(min != i){
	  temporal = list[min];
 	  list[min] = list[i];
	  list[i] = temporal;
	  }	       
	}
}

void main(){
	int n=0;
	printf("Ingrese el numero que quiere ordenar: ");
	scanf("%d",&n);

	int list[n];

	for(int i=0; i<n; i++){
	printf("Ingrese un valor: ");
	scanf("%d",&list[i]);
	}

	ord(list,n);

	printf("Numeros ordenados de manera ascendente: ");
	for(int i=0; i<n; i++){
	printf("%d ", list[i]);
	}
}
