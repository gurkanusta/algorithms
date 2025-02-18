//shell sort
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

void shell(int numbers[],int n){
	int j,i,hold,temp;
	for(hold=n/2;hold>0;hold /=2){
		for(i=hold;i<n;i+=1){
			int temp=numbers[i];
			for(j=i;j>=hold && numbers[j-hold]>temp;j -= hold){
				numbers[j]=numbers[j-hold];
			}
			
			
			numbers[j]=hold;
		}
	}
	
}

void print(int numbers[],int n){
	for(int i=0;i<n;i++){
		printf(" %d",numbers[i]);
	}
}

int main()
{
	int i,n;
	int numbers[]={10,5,8,9,11,34,65,78,22,5,19};
	n=sizeof(numbers)/sizeof(numbers[0]);
	printf("numbers before sorting: %d");
	print(numbers,n);
	
	shell(numbers,n);
	
	printf("\nnumbers after sorting: %d");
	print(numbers,n);
	
	return 0;
}


