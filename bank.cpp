#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include <math.h>



	struct tgl_lahir{
		int tanggal;
		int bulan;
		int tahun;
	};
	
	struct alamat{
		char jalan[30];
		char kota[10];
		char provinsi[15];
	};

struct nasabah{
	char bank[30];
	char norek[30];
	char nama[40];
	int saldo;
	int usia;
	struct alamat alamat;
	struct tgl_lahir tgl_lahir;

	};


int main(){
	int index=0;
	int now=2019;
	int a=0;
	int b;
	int pilih;
	int rek;
	char konvers[128];
	int ulang=1;
	int menu_in;
	int hasil=0;
	int in_glob;
	char cr_glob[20];
	struct nasabah nsb[10];
	
	
	while(ulang==1){
		printf("==========================================================\n");
		printf("			Sistem Terpadu Pendataan Nasabah		    \n");
		printf("==========================================================\n");
		printf("|| 1. Buat Data Baru                                    ||\n");
		printf("|| 2. Lihat Data Nasabah                                ||\n");
		printf("|| 3. Cari Saldo                                        ||\n");
		printf("|| 4. Jumlah Saldo Total                                ||\n");
		printf("|| 5. Sortir Menurut Usia                               ||\n");
		printf("==========================================================\n");
			scanf("%d",&menu_in);
			
						system("cls");
			switch(menu_in){
				
				//BUAT DATA BARU
				case 1:
					{
						//memuat nama baru
						printf("Masukkan Nama : ");
							scanf("%s",&nsb[a].nama);
							//pilihan bank tertentu
						printf("Pilih Bank :\n");
						printf("1.BRI,  2.BNI,  3.BTN,  4.MANDIRI,  5.BCA \n");
						
							scanf("%d",&pilih);
						switch(pilih){
							case 1:
								strcpy(nsb[a].bank,"BRI");
								strcpy(nsb[a].norek,"001");
								break;
							case 2:
								strcpy(nsb[a].bank,"BNI");
								strcpy(nsb[a].norek,"002");
								break;
							case 3:
								strcpy(nsb[a].bank,"BTN");
								strcpy(nsb[a].norek,"003");
								break;
							case 4:
								strcpy(nsb[a].bank,"MANDIRI");
								strcpy(nsb[a].norek,"004");
								break;
							case 5:
								strcpy(nsb[a].bank,"BCA");
								strcpy(nsb[a].norek,"005");
								break;
							
							default :
								printf("Menu Tidak Ada");
								break;
						
						system("cls");
						}
						
						//MEMASUKKAN DATA DIRI
						printf("Masukkan tanggal lahir Anda \n");
					printf("Tanggal\t: ");
					scanf("%d",&nsb[a].tgl_lahir.tanggal);	
					printf("Bulan\t: ");
					scanf("%d",&nsb[a].tgl_lahir.bulan);
					printf("Tahun\t: ");
					scanf("%d",&nsb[a].tgl_lahir.tahun);
					fflush(stdin);
					system("cls");
					
					nsb[a].usia = now - nsb[a].tgl_lahir.tahun;
					
						
						//MEMASUKKAN ALAMAT
						printf("Masukkan Alamat Rumah Anda\n");
						printf("Jalan\t\t: ");
						scanf("%[^\n]",&nsb[a].alamat.jalan);	
						fflush(stdin);
						printf("Kota\t\t: ");
						scanf("%[^\n]",&nsb[a].alamat.kota);
						fflush(stdin);
						printf("Provinsi\t: ");
						scanf("%[^\n]",&nsb[a].alamat.provinsi);
						fflush(stdin);
						system("cls");
					
					
		
		strcat(nsb[a].norek,itoa(rand()%512+128,konvers,10));
			if(nsb[a].tgl_lahir.tanggal<10){
				strcat(nsb[a].norek,"0");
										}
		strcat(nsb[a].norek,itoa(nsb[a].tgl_lahir.tanggal,konvers,10));	
			if(nsb[a].tgl_lahir.bulan<0){
				strcat(nsb[a].norek,"0");
										}
		strcat(nsb[a].norek,itoa(nsb[a].tgl_lahir.bulan,konvers,10));
			if((nsb[a].tgl_lahir.tahun%100)<10){
				strcat(nsb[a].norek,"0");
										}
		strcat(nsb[a].norek,itoa((nsb[a].tgl_lahir.tahun)%10,konvers,10));
				printf("Nomer Rekening Anda\t: %s\n",nsb[a].norek);
				printf("Saldo awal untuk Nasabah baru adalah Rp 200.000,00");
							fflush(stdin);
						
				a++;
											
					}
					break;
					
				
				
				
				case 2://MENAMPILKAN DATA MASING-MASNG NASABAH
					{
			printf("Info Nasabah	 \n");
			for(b=0;b<a;b++){
				printf("Nama		        : %s\n",nsb[b].nama);
				printf("Bank	            : %s\n",nsb[b].bank);
				printf("No. Rekening		: %s\n",nsb[b].norek);
				printf("Usia				: %d\n",nsb[b].usia);
				printf("Tgl Lahir			: %d-%d-%d\n",nsb[b].tgl_lahir.tanggal,nsb[b].tgl_lahir.bulan,nsb[b].tgl_lahir.tahun);
				printf("Alamat				: Desa %s Kota %s Provinsi %s\n",nsb[b].alamat.jalan,nsb[b].alamat.kota,nsb[b].alamat.provinsi);
				printf("Saldo 				: %d\n",nsb[b].saldo);
				printf("\n\n");
				}	
		}
			break;
				
				
				
				
				case 3: //MENCARI BERDASARKAN SALDO
					{
			printf("Masukkan Jumlah Saldo : ");
			scanf("%d",&in_glob);
			for(b=0;b<a;b++){
				if(nsb[b].saldo<in_glob){
					printf("Nama %s saldo kurang dari %d\n",nsb[b].nama,in_glob);
				}else{
					printf("Nama %s saldo lebih dari %d\n",nsb[b].nama,in_glob);
				}
				}
		}
			break;
			
			
			
			
			case 4: //MENCARI SALDO TOTAL
					{
			for(b=0;b<a;b++){
				hasil = hasil + nsb[b].saldo;
			}
			printf("Total Saldo 	: %d",hasil);
		}
			break;
			
			
			
			
			case 5:
		{
			printf("Masukkan range usia :");
			scanf("%d",&in_glob);
			for(b=0;b<a;b++){
				if(nsb[b].usia<in_glob){
					printf("Nama %s usia kurang dari %d\n",nsb[b].nama,in_glob);
				}else {
					printf("Nama %s usia lebih dari %d\n",nsb[b].nama,in_glob);
				}
				}	
		}
			break;
			break;
			
			default:
			printf("Pilihan yang Anda Masukkan Tidak Ada");
			break;
				
	
			}
		
		printf("\nApakah Anda Ingin Melakukan Transaksi Lain ? \n");
		printf("1. Ya\n");
		printf("2. Tidak\n");
		scanf("%d",&ulang);
		system("cls");

	}
	
	

printf("==========================================================\n");
printf("||		  Terimakasih Telah Menggunakan E-Padu    	    ||\n");
printf("==========================================================\n");
	
	return 0;
}
