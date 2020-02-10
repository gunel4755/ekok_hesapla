#include <stdlib.h>
#include <stdio.h>

int ekok(int a,int b){
	int result=1;
	int i,buyuk,kucuk;
	if(a > b)
		kucuk=b;
	else
		kucuk=a;
	i=kucuk;
	while (1){
		if( i%a==0 && i%b ==0)
			return i;
		else
			i++;
	}
}
int ekokRec(int a, int b)
{ 
    int i=1;
 
    if (i % a == 0 && i % b == 0)
    {
        return i;
    }
    i++;
    ekokRec(a, b);
    return i;
}

main(){
	
	int sayi1,sayi2;
	int check=1;
	printf("Ekok'u alinacak ilk sayiyi gir'\n");
	scanf("%d", &sayi1);
	while (1){
		
		printf("Ekok'u alinacak ikinci sayiyi gir'\n");
		scanf("%d", &sayi2);
	    printf("Sonuc: %d\n",ekok(sayi1,sayi2));
	    
	    printf("Recursive hesaplanan Sonuc: %d\n",ekokRec(sayi1,sayi2));
		
		
		printf("programdan cikmak icin 0 giriniz veya yeni sayisi giriniz.\n");
	    scanf("%d",&check);
	    sayi1=check;
	    if(check == 0)
	    	return false;
	}	
}
