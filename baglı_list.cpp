#include <stdio.h>
#include <stdlib.h>
int main() {
	//matris oluştruma	
	int a[8][3] = { {1,5,5},{2,24,0},{3,9,4},{4,13,7},{5,6,3},{6,23,2},{7,14,8},{8,19,6} };
	int i,j,min,n,m;
		
// listeyi yazdır

	printf("\n Bagli liste\n");
	printf("adres\tdata\tbag\n");
	for(i=0;i<8;i++)
	{ 	for(j=0;j<3;j++) 	{printf("%d\t",a[i][j]);}
		printf("\n");
	}	
		
// silme
	int silinecek_eleman;
	printf ("\n\nsilinecek elemani girin"), scanf("%d",&silinecek_eleman);
// silinecek elemanı arama
	for(n=0;n<8;n++)
      		 if (a[n][1]==silinecek_eleman)  break;
	   	
	int silinecek_elemanin_adresi =n+1;
	int silinecek_elemanin_bag_adresi =a[n][2];
	printf ("\nsilinecek elemanin adresi %d \nsilinecek elemanin bag adresi=%d",n+1,silinecek_elemanin_bag_adresi);

// silinecek elemanın adresini bağ listesinde bulunması
for(n=0;n<8;n++)
     	 if (a[n][2]==silinecek_elemanin_adresi) 	break;
	printf ("\nsilinecek elemanin adresini gosteren elemanin adresi %d, \nelemanin degeri %d",n+1,a[n][1]);
;
	a[silinecek_elemanin_adresi-1][2]=-99;
	a[silinecek_elemanin_adresi-1][1]=-99;

// martisin yazdirilmasi
	printf("\n\nadres\tveri\tbag\n");
     	for(m=0;m<8;m++)
        	{  	for(n=0;n<3;n++) 	{ printf("%d\t",a[m][n]); 	}
	      	printf("\n");
	}	
	
	return 0; }
