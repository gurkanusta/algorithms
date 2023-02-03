//QuickSort
#include <stdlib.h>
#include <stdio.h>

using namespace std;

void swap(int *a,int *b){
	int t=*a;
	*a=*b;
	*b=t;
}

int partition (int numbers[],int low,int high){
	int pivot=numbers[high];
	int i=(low-1);
	
	for(int j=low;j<=high-1;j++){
		if(numbers[j]<pivot){
			i++;
			swap(&numbers[i],&numbers[j]);
		}
	}
	swap(&numbers[i+1],&numbers[high]);
	return (i+1);
}

void quick(int numbers[],int low ,int high){
	if(low<high){
		int pi=partition(numbers,low,high);
		
		quick(numbers,low,pi-1);
		quick(numbers,pi+1,high);
	}
}

void print(int numbers[],int size){
	int i;
	for(i=0;i<size;i++){
		printf("%d",numbers[i]);
		printf("\n");
	}
}


int main(){
	int n;
	int numbers[]={10,12,4,6,9,11};
	n=sizeof(numbers)/sizeof(numbers[0]);
	quick(numbers,0,n-1);
	printf("sorted: \n");
	print(numbers,n);
	return 0;
}



