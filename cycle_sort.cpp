#include <stdlib.h>
#include <stdio.h>
void swap(int*,int*);




void cycle(int numbers[],int n,int swap){
	int writes=0;
	for(int start=0;start<=n-2;start++){
		int item=numbers[start];
		int pos =start;
		for(int i=start+1;i<n;i++){
			if(numbers[i]<item){
				pos++;
			}
		}
		if(pos==start)
		continue;
		while(item==numbers[pos])
		pos+=1;
		if(pos!=start){
			swap(item,numbers[pos]);
			writes++;
		}
		while(pos!=start){
			pos=start;
			for(int i=start+1;i<n;i++)
			  if(numbers[i]<item)
			     pos +=1;
			
			while(item==numbers[pos])
			  pos +=1;
			
			if(item !=numbers[pos]){
				swap(item,numbers[pos]);
				writes++;
			}       
		}
		    
		
	}
}

int main(){
	int numbers[]={10,5,63,5,9,1,4,3};
	int n=sizeof(numbers)/sizeof(numbers[0]);
	cycle(numbers,n);
	
	printf("sorted: \n");
	for(int i=0;i<n;i++){
		printf(" %d",numbers[i]);
	}
	return 0;
}





















