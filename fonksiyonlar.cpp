#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>

int fonk1(int a, int b){
	return a+b;
}

int fonk2(int a, int b){
	return a*b;
}

float fonk3(int a, int b){
	return a/b;
}

int fonk4(int a,int b){
	return a-b;
}
int fonkRandom(){
	return 34534;
}

bool fonkKosul(int toplam1){
	return toplam1 != 45 && toplam1 != 55 && toplam1 ==15;
}

void fonkPrintArray(int array){
	int length = sizeof(array)/sizeof(array[0]);
	for(int i = 0; i<length; i++){
		prinft("%d",array[i]);
	}
	printf("\n");
}

int main(){
	int temp1= 10;
	int temp2= 25;
	int toplam1 = temp1+ temp2;
	int toplam2 = 15 + toplam1;
	float bolum = toplam2 / 3;
	int asd = temp1+temp2/toplam1+35*3;
	
	
	int sonuc1 = fonk1(temp1,temp2);
	
	int toplam1 = fonk1(temp1,temp2);
	int toplam2 = fonk1(15,toplam1);
	int toplam3 = fonk1(fonk1(15,25),fonk1(44,55));
	float bolum = fonk3(10,5);
	int toplam1 = fonkRandom();
	
	if(fonkKosul(toplam1)){
		
	}
	
}
