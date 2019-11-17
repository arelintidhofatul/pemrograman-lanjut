#include <stdio.h>

main()
{
char nama_lengkap[50];
char alias[20];
char alamat[20];
int telp;
int umur;

	{
	
		printf("===================================\n");
		printf("----Silahkan Isi Data Diri Anda----\n");
		printf("===================================\n");


		printf("Nama Lengkap\t: "); 
		scanf("%s",&nama_lengkap);
		
		printf("Alias\t: "); 
		scanf("%s",&alias);
		
		printf("Alamat\t: "); 
		scanf("%s",&alamat);
		
		printf("Telepon\t: "); 
		scanf("%d",&telp);
		
		printf("Umur\t: "); 
		scanf("%d”",&umur);

			printf("\n\n");
			
	printf("Hello %s, Alias %s, Alamat %s, No. Telepon %d, Umur %d,\n",nama_lengkap,alias,telp,umur);
	printf("Bagaimana Kabar anda hari ini?\n");


	}
	return 0;
}
