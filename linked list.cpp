#include <stdio.h>
int dizi[3][3]= {};
int i, j;

void listeyi_yazdir(){
	printf("\n Linked List\n");
	printf("adres\tdata\tbag\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d\t",dizi[i][j]);
			
		}
		printf("\n");
	}
}

void kucukten_buyuge_siralama(int dizi[3][3],int i,int j){
	int temp;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(dizi[i][j]>dizi[i+1][j]){
				temp=dizi[i][j];
				dizi[i][j]=dizi[i+1][j];
				dizi[i+1][j]=temp;
			}
		}
	}
	printf("%d\t",dizi[i][j]);
	printf("\n");
}
void bagli_liste_olusturma(){
	for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("dizi[%d][%d] yi girin: ", i, j);
            scanf("%d", &dizi[i][j]);
        }
    }
}
void listede_arama(){
	int aranan_eleman;
	printf ("\n\nAranan elemani girin");
		scanf("%d",&aranan_eleman);
		
		for(i=0;i<3;i++)
      	  	 if (dizi[i][1]==aranan_eleman){
      	  	 	printf("%d",dizi[i][1]);break;
				 }
	   	
		if (aranan_eleman!=dizi[i][1])
			printf ("\n\nAranan eleman bulunamadý");
		else
			printf ("\n\nAranan elemanin adresi %d",dizi[i][0]);
}

void eleman_silme(){
	int silinecek_eleman;
	printf ("\n\nsilinecek elemani girin");scanf("%d",&silinecek_eleman);
	for(i=0;i<3;i++){
		if(dizi[i][1]==silinecek_eleman){
			break;
		}
	}
	int silinecek_elemanin_adresi = dizi[i][1];
    dizi[silinecek_elemanin_adresi-1][2]=-1;
}







int main(){
	int dizi[3][3]= {};
	while(1){
		int secenek;
	    printf("1-Bagli liste olusturma\n2-Listede arama\n3-Listeden eleman silme\n4-Listeleme\n5-Cikis\n");
	    scanf("%d",&secenek);
		switch(secenek){
		case 1:
			bagli_liste_olusturma();
			listeyi_yazdir();
			break;
			
		case 2:
			listede_arama();
			break;
		
		case 3:
			eleman_silme();
			listeyi_yazdir();
		
		
		case 4:
			listeyi_yazdir();
		


		case 5:
			break;
		 
		
		
		default:
			printf("gecersiz islem nuamrasi");
			
			
		
	  }
	}
	return 0;
	
	
		
	
	
		
		
	
	
}
