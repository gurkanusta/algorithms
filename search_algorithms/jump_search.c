#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int min(int a,int b){
	if(b>a){
		return a;
	}
	else{
		return b;
	}
}

int jump(int numbers[],int key,int n){
	int step=sqrt(n);
	int prev=0;
	while(numbers[min(step,n)-1]<key){
		prev=step;
		step+=sqrt(n);
		if(prev>=n){
			return -1;
		}
	}
	while(numbers[prev]<key){
		prev++;
		if(prev==min(step,n)){
			return -1;
		}
	}
	if(numbers[prev]==key){
		return prev;
	}
	return -1;
}
int main(){
	int numbers[]={23,6,3,658,34,86,24,97,2342,78,456,237,8,21,5};
	int key=97;
	int n = sizeof(numbers)/sizeof(numbers[0]);
	int index=jump(numbers,key,n);
	if(index>=0){
		printf("number is at %d index",index);
	}
	else{
		printf("number is not exist in the numbers");
	}
	return 0;
}
