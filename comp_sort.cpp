//Comp_Sort

#include <stdio.h>
#include <stdlib.h>
void swap(int* ,int*)


int swap(int *a,int *b){
	int temp;
	*a=*b;
	*b=temp;
	temp=*a;
	
}


int nexthold(int hold){
	hold=(hold*10)/13;
	if(hold<1){
		return 1;
	}
	return hold;
}

void comb(int numbers[],int n){
	int hold=n;
	bool swapped=true;
	
	while(hold != 1 || swapped==true){
		hold = nexthold(hold);
		swapped=false;
		for(int i=0;i<n-hold;i++){
			if(numbers[i]>numbers[i+hold]){
				swap(numbers[i],numbers[i+hold]);
				swap=true;
			}
		}
	}
}

int main(){
	int numbers[]={3,7,5,12,98,45,-12,5-3,0,4};
	int n=sizeof(numbers)/sizeof(numbers[0]);
	
	comb(numbers,n);
	
	printf("sorted: \n");
	for(int i=0;i<n;i++){
		printf("%d",numbers[i]);
	}
	return 0;
}
