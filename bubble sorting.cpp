#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int x;
int tahap;
int roll=0;

void output(int data[],int a);
void menusorting(int data[],int a);
void sortingAscending(int data[],int a);
void sortingDescending(int data[],int a);

	
main (){
	int a, pilih;
	int data [100];
	
	
	printf("============================================\n");
	printf("Masukkan Jumlah Indeks : ");
		scanf("%d", &a);
	
	printf("============================================");
	printf("\n");
	
	for(x=0;x<a;x++){
		printf("Angka ke-%d		:",x+1);
			scanf("%d",&data[x]);
	}	
	printf("\nAngka yang Diinputkan	:");
		output(data,a);
		menusorting(data,a);
	printf("\nHasil Angka yang Telah Disorting	:");

		output(data,a);
		
	
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
//======================================================================================================
void output(int data[],int a){
	for(x=0;x<a;x++){
		printf("%d, ",data[x]);
	}
	printf("\n\n=======================================");
}
//======================================================================================================
void menusorting(int data[],int a){
	int menu;
	printf("\n\nPilih Metode Sorting\n1. Ascending\n2. Descending\n");
	printf("silahkan masukkan pilihan menu :"); scanf("%d",&menu);
	
	switch(menu){
		case 1:
			sortingAscending(data,a); break;
		case 2:
			sortingDescending(data,a); break;
			
		default:
			printf("Masukan yang Anda Input Tidak Ada");
			menusorting(data,a);
	}
}
//======================================================================================================
void sortingAscending(int data[],int a){
	
		for(x=0; x<a-1; x++){
			for(int b=0; b<a-1; b++){
				if(data[b+1]<data[b]){
					roll=data[b+1];
                	data[b+1]=data[b];
                	data[b]=roll;
					
				}
			}
		}
}
			
//======================================================================================================
void sortingDescending(int data[],int a){
	
	for(x=0;x<a-1;x++){
			for(int b=0; b<a-1; b++){
				if(data[b+1]>data[b]){
					roll=data[b+1];
                	data[b+1]=data[b];
                	data[b]=roll;
					
				}
			}
		}
}
