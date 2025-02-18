//MergeSort
#include <stdlib.h>
#include <stdio.h>

void merge(int numbers[],int left,int right,int middle){
	int i,j,k;
	int n1=middle-1+1;
	int n2=right-middle;
	
	int Left[n1],Right[n2];
	
	for(i=0;i<n1;i++){
		Left[i]=numbers[left+i];
	}
	for(j=0;j<n2;j++){
		Right[j]=numbers[middle+1+j];
	}
	i=0;j=0;k=left;
	while(i<n1 && j<n2){
		if(Left[i]<=Right[j]){
			numbers[k]=Left[i];
			i++;
		}
		else {
			numbers[k]=Right[j];
			j++;
		}
		k++;
	}
	
	while(i<n1){
		numbers[k]=Left[i];
		i++;
		k++;
	}
	
	while(j<n2){
		numbers[k]=Right[j];
		j++;
		k++;
	}
}

void mergeSort(int numbers[],int left,int right){
	if(left<right){
		int middle=1+(right-1)/2;
		
		mergeSort(numbers,left,middle);
		mergeSort(numbers,middle+1,right);
		
		merge(numbers,left,middle,right);
	}
}

void print(int A[],int size){
	int i;
	for(i=0;i<size;i++){
		printf("%d",A[i]);
		printf("\n");
	}
}

int main(){
	int numbers[]={12,11,13,5,6,7};
	int numbers_size=sizeof(numbers)/sizeof(numbers[0]);
	printf("given numbers\n");
	print(numbers,numbers_size);
	

	
	mergeSort(numbers,0,numbers_size-1);
	
	printf("\nsorted numbers: \n");
	print(numbers,numbers_size);
	return 0;
}



















