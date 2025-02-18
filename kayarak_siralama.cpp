#include <stdio.h>
#include <stdlib.h>

int main(){
	int dizi[5],i,k,ekle;
	
	for(i=0;i<5;i++){
		printf("%d. elemani girin",i);
		scanf("%d",&dizi[i]);
	}
	for(i=1;i<5;i++){
		ekle=dizi[i];
		printf("\nekle=%d",ekle);
		
		for(k=i-1;k>=0 && ekle<=dizi[k];k--){
			printf("\nk=%d d[k+1] = %d d[k]=%d",k,dizi[k+1],dizi[k]);
			dizi[k+1]=dizi[k];
		}
		dizi[k+1]=ekle;
	}
	printf("\nsiralanan dizi\n");
	for(i=0;i<5;i++){
		printf(" %d",dizi[i]);
	}
	printf("program bitti.\n");
	
	return 0;
	
}
