#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

main(){
	int data[8] ={1,2,3,4,5,23,46,56};
	int end, top, x, src, flag=0;
	float pos;
	int pilih;
	
	end=0;
	top=7;
	
	printf("Data yang Dicari : ");
		scanf("%i",&src);

do{
	pos=(float)((src-data[end])/(data[top]-data[end]))*(top-end)+end;
	x=floor(pos);
	if(data[x]==src){
		flag=1;
		break;
	}
	
	if(data[x]>src) top=x-1;
	else if(data[x]<src)
		end=x+1;

  }
  while(src>=data[end] && src<=data[top]);
  if(flag==1) printf("Data Tersedia Pada Indeks ke-%d",x);
  else printf("Data Tidak Tersedia");
  
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
