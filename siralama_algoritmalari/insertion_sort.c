#include <math.h>
#include <stdio.h>

void insertion(int numbers[5],int n){
	int i,key,j;
	for(int i=1;i<n;i++){
		int key=numbers[i];
		int j=i-1;
		while(j>=0 && numbers[j]>key){
			numbers[j+1]=numbers[j];
			j=j-1;
		}
		numbers[j+1]=key;
	}
}

void print(int numbers[5],int n){
	for(int i=0;i<n;i++){
		printf("%d",numbers[i]);
	printf("\n");
	}
}
	
int main()
{
	int i,numbers[5],n;
	for(i=0;i<5;i++){
			printf("%d. enter the number:",i);scanf("%d",&numbers[i]);
		}
		n= sizeof(numbers)/sizeof(numbers[0]);
		insertion(numbers,n);
		print(numbers,n);
		return 0;
	}
	
	

	
