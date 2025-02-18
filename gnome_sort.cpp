//Gnome_Sort
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
void swap(int*,int);


void gnome(int numbers[],int n){
	int indx=0;
	
	while(indx<n){
		if(indx==0){
			indx++;
		}
		if(numbers[indx]>=numbers[indx-1]){
			indx++;
		}
		else {
			swap(numbers[indx],numbers[indx-1]);
			indx--;
		}
	}
	return;
}
void swap(int *x,int *y){
	int temp;
	temp=*y;
	*y=*x;
	*x=temp;
}

void print(int numbers[],int n){
	for(int i=0;i<n;i++){
		printf("sorted: \n",numbers[i]);
	}
}

int main(){
	int numbers[]={10,9,3,-4,-21,5};
	int n =sizeof(numbers)/sizeof(numbers[0]);
	
	gnome(numbers,n);
	print(numbers,n);
	
	return 0;
}
