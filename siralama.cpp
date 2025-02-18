#include <stdio.h>
int i,sayac1,sayac2,sayac3,dizi1,dizi2,dizi1boyut,dizi2boyut,j;
int main(){
	
	
	printf("1. dizinin boyutu kaç olucak:");scanf("%d",&dizi1boyut);
	printf("2. dizinin boyutu kaç olucak:");scanf("%d",&dizi2boyut);
	
	int dizi1[dizi1boyut];
    int dizi2[dizi2boyut];
    int toplamdizi[dizi1boyut + dizi2boyut];
	
	for(i=0;i<dizi1boyut;i++){
		printf("dizi1 deki %d. elemani giriniz:");scanf("%d",&dizi1[i]);
	}
	for(j=0;j<dizi2boyut;j++){
		printf("dizi2 deki %d. elemani giriniz:");scanf("%d",&dizi2[j]);
	}
	sayac3=0;
	for(sayac1=0;sayac1<dizi1boyut;sayac1++){
		toplamdizi[sayac3]=dizi1[sayac1];
		sayac3++;
	}
	for(sayac2=0;sayac2<dizi2boyut;sayac2++){
		toplamdizi[sayac3]=dizi2[sayac2];
		sayac3++;
	}
	int tutucu;
	
	for(i=0;i<dizi1boyut + dizi2boyut;i++){
		for(j=0;j<dizi1boyut + dizi2boyut-1;j++){
			if(toplamdizi[j]<toplamdizi[j+1]){
				tutucu=toplamdizi[j];
				toplamdizi[j]=toplamdizi[j+1];
				toplamdizi[j+1]=tutucu;
				
			}
		}
		
	}
	printf("dizinin son hali");
	for(i=0;i<dizi1boyut+dizi2boyut;i++){
		printf("  %d",toplamdizi[i]);
	}
	
	
	
	
}
