#include <stdio.h>

// dizi kaydýrmasý YOK
#define boyut 10 
   int head = 0;
   int uzunluk= 0;
   int tail = 0;
   int dizi [boyut];
 
   bool doluMu(){
            if(uzunluk==boyut ){
                return true;
            }
            return false;
        }

  bool bosMu(){
            if(uzunluk==0 )
                return true;
            return false;
        }
        
  void listele(){
	int i;
	printf (" \n");
	for (i=0; i < boyut; i++) printf (" %d ",dizi[i]);
	printf (" \n");
	}

 void ekle(int deger){
            if(doluMu()){
                printf ("Kuyruk kapasitesi dolu!\n");
            }else{
                dizi[tail] = deger;
                tail++;
                uzunluk++;
                printf (" %d kuyruga eklendi. Kuyrukta %d eleman var\n",deger,uzunluk);
            }
            listele();
        }
		
void cikar(){
			int i;
            if(bosMu()){
                printf ("Kuyruk bos!\n");
            }else{
            	uzunluk--;
                printf (" %d kuyruktan cikarildi, Kuyrukta %d eleman var.\n",dizi[head],uzunluk);
                dizi[head] = 0;//-1;
                head++;							
            }
            
            listele();
        }



int main(){
	int secim,sayi;
  	
    do{
    	printf("1-Push  2-Pop");scanf("%d",&secim);
  	
  	
  	if(secim==1){
  		printf("diziye eklemek istediginiz sayiyi giriniz.");scanf("%d",&sayi);
  		ekle(sayi);
  		
	  }
	  else{
	  	cikar();
	  }
	}
	while(secim>2);
}
