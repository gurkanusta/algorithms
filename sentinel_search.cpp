//Sentinel_Search
#include <stdio.h>
#include <stdlib.h>

void sentinel(int numbers[],int n,int key){
	int last=numbers[n-1];
	numbers[n-1]=key;
	int i=0;
	while(numbers[i]!=key)
	    i++;
	
	numbers[n-1]=last;
	if(i<n-1 || (numbers[n-1]==key)){
		printf("is present at index",i,key);
	}
	else{
		printf("element not found");
	}    
}

int main(){
	int numbers[]={13,76,4,9,34,21,6,99};
	int n=sizeof(numbers)/sizeof(numbers[0]);
	int key=9;
	sentinel(numbers,n,key);
	
	return 0;
}
