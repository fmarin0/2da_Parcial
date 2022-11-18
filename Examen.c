#include <stdio.h>
#include <stdlib.h>

int list[0];

int ordenamiento(int list[], int n)
{
	int min=0;
	int indexMin=0;
	for(int i=0; i<n-1; i++)
	{
		min = i;

		for(int j=i+1; j<n; j++){
			if(list[j] < list[min]){
				min = j;
			}
		}
		if(indexMin !=i){
			swap(&list[min], &list[i]);
		}
	}


} 

	int swap(int *x, int *y){
		int temp = *x;
		*x = *y;
		*y = temp;
	}

int main(){
	int n=0;
	printf("Ingrese el tamaño del arreglo: ");
	scanf("%d", &n);
	int list[n];
	for(int i=0; i<n; i++)
	{
		printf("Ingrese un valor: ");
		scanf("%d", &list[i]);
	
	}
	printf("Numeros desordenados: ");
	for(int i=0; i<n; i++)
	{
		printf("%d, ", list[i]);
	}
	ordenamiento(list, n);
	printf("Numeros ordenados:");
	for(int i=0; i<n; i++)
	{
		printf("%d, ", list[i]);
	}

	return 0;

}
