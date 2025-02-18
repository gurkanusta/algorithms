#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
#include<math.h>

int ussunu_alma(int sayi1,int sayi2){
	return pow(sayi1,sayi2);
}
int karekokunu_alma(int sayi1){
	return sqrt(sayi1);
}

void kosul(int sayi){
	if(sayi>=0 && sayi<=24){
		printf("sanssýz sayý",sayi);
	}
	if(sayi<=50 && sayi>=25){
		printf("doðru yerdesin",sayi);
	}
}






int main(){
	int sayi1=16;
	int sayi2=3;
	int secilen_sayi;
	int tarayici;
	int us;
	
	printf("sdaws%d\n",ussunu_alma(sayi1,sayi2));
	printf("%d",karekokunu_alma(sayi1));
    
}
