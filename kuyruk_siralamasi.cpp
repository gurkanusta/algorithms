#include <stdio.h>
#include <stdbool.h>

// dizi kaydýrmasý YOK
#define boyut 10
int uzunluk = 0;
int tail = 0;
int dizi[boyut];

bool doluMu() {
    if (uzunluk == boyut) {
        return true;
    }
    return false;
}

bool bosMu() {
    if (uzunluk == 0)
        return true;
    return false;
}

void listele() {
    int i;
    printf(" \n");
    for (i = 0; i < boyut; i++)
        printf(" %d ", dizi[i]);
    printf(" \n");
}

void ekle(int deger) {
    if (doluMu()) {
        printf("Kuyruk kapasitesi dolu!\n");
    } else {
        dizi[tail] = deger;
        tail++;
        uzunluk++;
        printf(" %d kuyruga eklendi. Kuyrukta %d eleman var\n", deger, uzunluk);
    }
    listele();
}

void cikar() {
    if (bosMu()) {
        printf("Kuyruk bos!\n");
    } else {
        printf(" %d kuyruktan cikarildi, Kuyrukta %d eleman var.\n", dizi[0], uzunluk);
        dizi[0] = 0; 
        tail--;
        uzunluk--;
    }
    printf("dizinin ilk hali");
    listele();
    for(int i=0;i<boyut;i++){
    	dizi[i]=dizi[i+1];
	}
	printf("dizinin son hali");
	listele();
}

int main() {
	int tercih,sayi;
	do{
		printf("Yapmak istediginiz komutu yazin\n 1->Diziye sayi ekle\n 2->Diziden sayiyi cikart: ");
	    scanf("%d",&tercih);
        if(tercih==1){
        	printf("Diziye eklemek istediginiz sayiyi girin: ");
        	scanf("%d",&sayi);
        	ekle(sayi);
		}
		if(tercih == 2){
			cikar();
		}
	}
	while(tercih>=0);
}

