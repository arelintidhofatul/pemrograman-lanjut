#include <stdio.h>


int pangkat (int x, int y)
{
	if (y == 0) {
		return 1;
	}
	else {
		return x*pangkat(x,y-1);
	}
	
}

main()
{
	int x,y;
		printf("angka yang akan dipangkatkan :");
			scanf("%d", &x);
		printf("pangkat angka :");
			scanf("%d", &y);
		
		printf("Hasil angka %d dipangkatkan %d = %d\n",x,y, pangkat(x,y) );
		return 0;
}
