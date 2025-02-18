//Linear_Search 

#include <stdio.h>
#include <stdlib.h>

int search(int numbers[],int n,int x){
	int i;
	for(i=0;i<n;i++){
		if(numbers[i]==x){
			return i;
		}
	}
	return -1;
}

int main(void){
	int arr[] = { 2, 3, 4, 10, 40 };
    int x = 10;
    int N = sizeof(arr) / sizeof(arr[0]);
 
    
    int result = search(arr, N, x);
    (result == -1)
        ? printf("Element is not present in array")
        : printf("Element is present at index %d", result);
    return 0;
}
