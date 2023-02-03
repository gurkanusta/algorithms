#include <stdio.h>
#include <stdlib.h>

int min(int a,int b){
	return(a<=b) ? a:b;
}

int fibmonacci(int numbers[],int key,int n){
	int fib1=1;
	int fib2=0;
	int fibt=fib1+fib2;
	
	while(fibt<n){
		fib2=fib1;
		fib1=fibt;
		fibt=fib1+fib2;
	}
	
	int offset=-1;
	
	while(fibt>1){
		int i=min(offset+fib2,n-1);
		
		if(numbers[i]<key){
			fibt=fib1;
			fib1=fib2;
			fib2=fibt-fib1;
			offset=i;
		}
		else if(numbers[i]>key){
			fibt=fib2;
			fib1=fib1-fib2;
			fib2=fibt-fib1;
		}
		else
		   return i;
	}
	
	if(fib1 && numbers[offset+1]==key)
	   return offset+1;
	
	return -1;   
}


int main(void){
	int numbers[]={10,22,35,40,45,50,80,82,85,90,100,235};
	int n=sizeof(numbers)/sizeof(numbers[0]);
	int key=90;
	int index=fibmonacci(numbers,key,n);
	if(index>=0)
	  printf("found at index %d",index);
	else
	  printf("%d isn't present in the numbers",key);
	  return 0;   
}