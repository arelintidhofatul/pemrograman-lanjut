#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


int InterpolationSearch(int src, int end, int top, int x, int data[]){
	
	x = (src-data[end])/(data[top]-data[end])*(top-end)+end;
	
	
		if(data[x] == src){
			return printf("Angka Tersedia Pada Indeks ke-%d",x);
	}
	else{
		if(x>top){
			return printf("Angka Tidak Tersedia");
		}
		else if(data[x]>src){
			top = x - 1;
			return InterpolationSearch(src, end, top, x, data); 
		}
		else if(data[x]<src){
			end = x + 1;
			return InterpolationSearch(src, end, top, x, data);
		}
	}
}


main(){
	int src;
	int end=0;
	int top=7;
	int x;
	int data[8] ={1,2,3,4,5,23,46,56};
	int tersedia=0;
	int pilih;
	
	printf("Masukkan Pencarian Data : ");
	scanf("%d",&src);
	InterpolationSearch(src, end, top, x, data);


	printf("\n\nTekan '1' untuk mengulangi program\n");
	printf("Tekan '0' untuk keluar\ntekan : ");
		scanf("%d",&pilih);
		
	if(pilih==1){
		printf("\n* * * * * * * * * * * * * * * * * * * * * * *");
		printf("\n                     ^^^                     \n\n");
		system ("cls");
		main();
		
	}else
		exit(0);
	
	getch();

}
