#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define ARRAY_SIZE 1024

void max(int numbers[],int n){
	int mx=numbers[0];
	for(int i=1;i<n;i++){
		if(numbers[i]>mx){
			mx=numbers[i];
		}
	}
	
}

void count(int numbers[],int n,int exp){
	int output[n];
	int i,count[10]={ 0 };
	for(i=0;i<n;i++){
		count[(numbers[i]/exp)%10]++;
	}
	for(i=1;i<10;i++){
		count[i] += count[i-1];
	}
	for (i=n-1;i>=0;i--){
		output[count[(numbers[i]/exp)%10]-1]=numbers[i];
	}
	
	for(i=0;i<n;i++){
		numbers[i]=output[i];
	}

}

void radix(int numbers[],int n){
	int m=max(int numbers[],int n);
	
	for(int exp=1;m/exp>0;exp*=10){
		count(numbers,n,exp);
	}
}

void print(int numbers[],int n){
	for(int i=0;i<n;i++){
		printf("%d",numbers[i]);
	}
}

int main(void){
	int numbers[]={12,56,34,890,43,66,2,7,8};
	int n=sizeof(numbers)/sizeof(numbers[0]);
	srand(time(0));
	radix(numbers,ARRAY_SIZE);
	
	  radix(numbers,n);
	print(numbers,n);
	return 0;  
}






