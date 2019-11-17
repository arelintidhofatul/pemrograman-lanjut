#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>


int main(){ loop:
	
	int range [3][3][3];
	int x, y, z;
	double p_pq, p_qr, p_total;
	int menu;
	int loop=1;
	
	
	system("cls");
	while(loop==1){
		
	printf("========================================\n");
	printf("======= Hitung Panjang Lintasan ========\n");
	printf("========================================\n");
	printf("| 1. Masukkan Titik Koordinat          |\n");
	printf("| 2. Hasil Hitung Panjang Lintasan     |\n");
	printf("========================================\n");
	printf("| Masukkan Pilihan Anda : ");scanf("%d",&menu);
	
	system("cls");
	
	
	switch(menu){
		
		case 1:{
			for(x=0;x<3;x++){
				printf("================================\n");
				printf("Titik Lintasan ke-%d\n",x+1);
				printf("================================\n");
				for(y=0;y<3;y++){
					printf("Titik Koordinat X : ");
						scanf("%d",&range[x][y][0]);
					printf("Titik Koordinat Y : ");
						scanf("%d",&range[x][y][1]);
					printf("Titik Koordinat Z : ");
						scanf("%d",&range[x][y][2]);
				printf("--------------------------------\n");		
				}
				system("cls");
			}
			getch();
			break;
			goto loop;
		}
		
		
		
		case 2:{
			for(x=0;x<3;x++){
				printf("=================================\n");
				printf("| Lintasan ke-%d                |\n",x+1);
				printf("=-------------------------------=\n");
        		printf("|  Koordinat  |  X  |  Y  |  Z  |\n");
        		printf("=-------------------------------=\n");
        	for(y=0;y<3;y++){
        		printf("| titik ke-%d ",y+1);
        	for(z=0;z<3;z++){
        		printf("|  %d  ", range[x][y][z]);
			}
				printf("|");
				printf("\n\n");
				
			}
			printf("=================================");
			printf("\n");
			p_pq = sqrt(pow((range[x][1][0]-range[x][0][0]),2) + pow((range[x][1][1]-range[x][0][1]),2) + pow((range[x][1][2]-range[x][0][2]),2));
			p_qr = sqrt(pow((range[x][2][0]-range[x][1][0]),2) + pow((range[x][2][1]-range[x][1][1]),2) + pow((range[x][2][2]-range[x][1][2]),2));		
				p_total = p_pq+p_qr;
			printf("Hasil  ke-%d : %f\n\n",x+1,p_total);
			}
			break;
		}
		
		
		
		
		
		
		
		
		
		}
	}	
}
