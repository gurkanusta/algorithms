//Ternary_Search
#include <stdio.h>

int ternary(int left,int right,int key,int numbers[]){
	if(right>=left){
		int mid1=left+(right-1)/3;
		int mid2=right-(right-1)/3;
		if(numbers[mid1]==key){
			return mid1;
		}
		if(numbers[mid2]==key){
			return mid2;
		}
		if(numbers[mid1]>key){
			return ternary(left,mid1-1,key,numbers);
		}
		else if (key>numbers[mid2]){
			return ternary(mid2+1,right,key,numbers);
		}
		else {
			return ternary(mid1+1,mid2-1,key,numbers);
		}
	}
	return -1;
}

int main(){
	int left,right,p,key;
	int numbers[]={1,2,3,4,5,6,7,8,9,10};
	left =0;
	right =9;
	key= 5;
	p=ternary(left,right,key,numbers);
	printf("index of %d is %d\n",key,p);
	key=50;
	p=ternary(left,right,key,numbers);
	printf("index of %d is %d",key,p);
	
}