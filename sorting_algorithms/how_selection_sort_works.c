//How selection sort works?
#include <stdio.h>



void swap(int *ab,int *ba){
	int hold=*ab;
	*ab=*ba;
	*ba=hold;
}
void selection(int a[5],int n){
	int i,j,min;
	for(i=0;i<n-1;i++){
		min=i;
		for(j=i+1;j<n;j++){
			if(a[j]<a[min])
			min=j;
			if(min!=i)
			swap(&a[min],&a[i]);
		}
	}
}
void print(int a[5],int size){
	int i;
	for(i=0;i<size;i++)
	   printf("%d ",a[i]);
	printf("\n");   
	
}

int main(){
	int i,a[5];
	for(i=0;i<=5;i++){
		printf("%d. enter the number:",i);scanf("%d",&a[i]);
	}
	int n= sizeof(a)/sizeof(a[0]);
	selection(a,n);
	printf("sorted a: \n");
	print(a,n);
	return 0;
	
}