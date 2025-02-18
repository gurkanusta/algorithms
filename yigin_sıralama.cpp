#include <stdio.h>
#define boyut 10
int i,yigin[boyut];
int es=0;
int veri=0;


void Push(int veri){
	if(es>10){
		printf("\n yigin doldu.");
		return;
	}
	yigin[es]=veri;
	printf("sayi yigina eklendi.\n");
	es++;
	printf("\n");
	for(i=0;i>es;i++){
		printf("%d",yigin[i]);
	}
	printf("\n");
	
}

void Pop(){
	if(es<0){
		printf("yigin artýk boþ");
		return;
	}
	printf("%d sayisi yigindan cikartildi.",yigin[es-1]);
	es--;
	printf("\n");
	for(i=0;i>es;i++){
		printf("%d",yigin[i]);
	}
	printf("\n");
	
}

int main(){
	int secim,sayi;
	do{
		printf("hangi islemi yapmak istiyorsunuz: Push -> 1 , Pop -> 2 : ");
		scanf("%d",&secim);
		if(secim == 1){
			printf("sayiyi giriniz: ");
			scanf("%d",&sayi);
			Push(sayi);
		}
		if(secim == 2){
			Pop();
		}
		printf("yigin son durum:\n");
		for(i=0;i<es;i++){
			printf("[%d]=%d\n",i,yigin[i]);
			printf("\n");
		}
		printf("dizide su an %d sayi var \n",i);
	}
	while(secim>=0);
  
}
