#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>
#define min

int binary(int numbers[],int, int, int);

int  exponential(int numbers[],int n,int key){
	if(numbers[0]==key){
		return 0;
	}
	int i=1;
	while(i<n && numbers[i]<=key)
	   i=i*2;
	
	return binary(numbers,i/2,min(i,n-1),key);    
}

int binary(int numbers[],int left,int right,int key){
	if(right>=left){
		int mid = left + (right - left)/2;
		
		if(numbers[mid]==key)
		   return mid;
		
		if(numbers[mid]>key)
		   return binary(numbers,left,mid-1,key);
		
		
		return binary(numbers,mid+1,right,key);      
	}
	return -1;
}


int main(void){
	int numbers[]={2,3,5,10,40};
	int n=sizeof(numbers)/sizeof(numbers[0]);
	int key=10;
	int result=exponential(numbers,n,key);
	(result == -1)? printf("element is not present in numbers")
	              : printf("element is present at index %d",result);
	
	
	return 0;              
}
