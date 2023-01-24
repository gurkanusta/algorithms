//heap_sort

#include <stdio.h>

void swap(int *a,int *b){
	int hold=*a;
	*a=*b;
	*b=hold;
}

void heap(int numbers[],int n,int i){
	int large=i;
	int left=2*i+1;
	int right=2*i+2;
	
	if(left<n && numbers[left]> numbers[large])
	large=left;
	
	if(right<n && numbers[right]> numbers[large])
	large=right;
	
	if(large !=i){
		swap(&numbers[i],&numbers[large]);
		heap(numbers,n,large);
	}
}

void sort(int numbers[],int n){
	for(int i=n/2-1;i>=0;i--)
		heap(numbers,n,i);
	
	for(int i=n-1;i>=0;i--){
		swap(&numbers[0],&numbers[i]);
		
		heap(numbers,i,0);
	}
}

void print(int numbers[],int n){
	for(int i=0;i<n;i++){
		printf("%d",numbers[i]);
		printf("\n");
	}
}

int main(){
	int numbers[]={44,63,5,9,11,85,7};
	int n=sizeof(numbers)/sizeof(numbers[0]);
	sort(numbers,n);
	printf("sort:\n");
	print(numbers,n);
}



