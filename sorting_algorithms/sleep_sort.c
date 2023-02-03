//Sleep_Sort
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include <process.h>

void check(void *a){
	int n=*(int *) a;
	Sleep(n);
	printf("%d ",n);
}
void sleep(int numbers[],int n){
	HANDLE threads[n];
	for(int i=0;i<n;i++){
		threads[i]=(HANDLE)_beginthread(&check,0,&numbers[i]);
	}
	WaitForMultipleObjects(n,threads,TRUE,INFINITE);
	return;
}
int main(){
	int numbers[]={34,23,122,9,158,88};
	int n = sizeof(numbers)/ sizeof(numbers[0]);
    
    sleep(numbers,n);
	
	return(0);
}

