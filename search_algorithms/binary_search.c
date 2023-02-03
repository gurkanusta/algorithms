#include <stdio.h>

int binary(int numbers[],int left,int right,int key){
	if (right>=left){
		int mid=left+(right-left)/2;
		if(numbers[mid]==key)
		   return mid;
		
		if(numbers[mid]>key)
		   return binary(numbers,left,mid-1,key);
		
		return binary(numbers,mid+1,right,key);      
	}
	return -1;
}
int main(void){
	int numbers[]={6,4,8,3,9,22,68,21};
	int n=sizeof(numbers)/sizeof(numbers[0]);
	int key=68;
	int result=binary(numbers,0,n-1,key);
	(result == -1)
	   ? printf("element is not present in numbers")
	   : printf("element is present at index %d",result);
	return 0;
}