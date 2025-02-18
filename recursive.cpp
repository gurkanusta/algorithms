#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h> 

int usta(int array[],int length){
	if(length<0){
		return 0;
	}
	return array[length-1]+usta(array,length-1);
	
	
	
}

int main(){
	int dizi[5]={1,2,3,4,5};
	int length= sizeof(dizi)/sizeof(dizi[0]);
	
	printf("%d",usta(dizi,length));
	
	
}
	
