//Bubble Sorte
#include <stdio.h>

void swap(int *ab,int *ba){
	int hold=*ab;
	*ab=*ba;
	*ba=hold;
}

void bubble(int numbers[5],int n){
	int i,j;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(numbers[j]>numbers[j+1]) swap(&numbers[j],&numbers[j+1]);
		}
	}
}
void print(int numbers[5],int size){
	int i;
	for(i=0;i<size;i++)
		printf(" %d",numbers[i]);
		printf("\n");
	
}

int main(){
	int numbers[5];
	for(int i=0;i<5;i++){
		printf("%d. enter the number:",i);scanf("%d",&numbers[i]);
	}
	int n=sizeof(numbers)/sizeof(numbers[0]);
	bubble(numbers,n);
	printf("sorted: \n");
	print(numbers,n);
	return 0;
}
