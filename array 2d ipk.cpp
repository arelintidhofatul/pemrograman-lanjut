#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
//=============================================================================================================

struct data_mahasiswa{
	char nama_mhs[30];
	char npm[10];
	float matkul[10][10];
	int sks[30];
	int nilai[50];
	
};

//============================================================================================================

int main(){ menu:
	int i;
	int j; 
	int k,l;
	float tipk = 0, tsks = 0, index = 0;
	struct data_mahasiswa dms[20];
	int menu=1;
	int pilihan;
	
//------------------------------------------------------------------------------------------------------------
system("cls");
while(menu==1){
	printf("=========================================================\n");
	printf("=          UNIT PENGOLAHAN DATA NILAI MAHASISWA         =\n");
	printf("=                     UJB UNIVERSITY                    =\n");
	printf("=========================================================\n");
	printf("= 1.Input Nilai Mahasiswa                               =\n");
	printf("= 2.Transkrip Nilai                                     =\n");
	printf("= 3.Keluar                                              =\n");
	printf("=========================================================\n");
	fflush(stdin);
	printf("  Masukkan Piiihan Anda : ");scanf("%d",&pilihan);

system("cls");

	switch (pilihan){
		case 1:
			printf("Jumlah mahasiswa : ");
	scanf("%d",&i);
	fflush(stdin);
	
	system("cls");
	
	for(j=1;j<=i;j++){
		printf("=========================================================\n");
		printf("=               Data Nilai Mahasiswa ke-%d              =\n",j);
		printf("=========================================================\n");
		printf("Masukkan nama : ");
			scanf("%s",&dms[j].nama_mhs);
		printf("Masukkan NPM : ");
			scanf("%s,",&dms[j].npm);
		printf("=========================================================\n");
		
	for(l=1;l<=7;l++){
		printf("Masukkan Mata Kuliah ke-%d :",l);
			scanf("%d",&dms[j].matkul[l]);
				fflush(stdin);
		printf("Masukkan nilai :");
			scanf("%d",&dms[j].nilai[l]);
				fflush(stdin);
		printf("Masukkan sks : ");
			scanf("%d",&dms[j].sks[l]);
				fflush(stdin);
		printf("---------------------------------------------------------\n");
		}
		for(l=1;l<=7;l++){
			index = index + ((dms[j].nilai[l])*(dms[j].sks[l]));
			tsks = tsks+dms[j].sks[l];
		}
		goto menu;
		
				}
//----------------------------------------------------------------------------------

	case 2:

				printf("=========================================================\n");
				printf("=                  Data Nilai Mahasiswa                 =\n");
				printf("=========================================================\n");	
				for(j=1;j<=i;j++){
				printf("\nNama Mahasiswa    : %s",dms[j].nama_mhs);
				printf("\nNPM               : %s",dms[j].npm);
				printf("\n---------------------------------------------------------\n");		 
								 }
				
				for(l=1;l<=7;l++){
				tipk = tipk + index/tsks;
				printf("Index : %f\n", index);
				printf("Total SKS : %f\n", tsks);
				printf("IPK : %f",tipk);
				dms[j].nilai[l] = 0;
				dms[j].sks[l] = 0;
				tipk = 0;
				tsks = 0;
				index = 0;
								}
				printf("=========================================================\n");					
				
				
				goto menu;			
		
//----------------------------------------------------------------------------------		
	case 3:
	exit(0);	
	}
}
}
