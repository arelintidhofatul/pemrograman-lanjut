#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() 
{
//	int a[8]={8,10,6,-2,11,7,1,100};
//	int a[7]={3,12,9,4,21,6};
	int a[9]={5,10,15,20,25,30,35,40,45};
	int b,c,d,e,i,f;
	i=1;
	f=1;
//	int b,c=9,i;
	printf("masukkan bilangan = ");
	scanf("%i",&e);
	{
//	sekuensial
//	for(i=0;i<=7;i++)
//	{
//		printf("loop %i\n",i);
//		if(a[i]==b)
//		{
//			c=i;
//			break;
//		}
//	}
//	if(c==9)
//	{
//		printf("data tidak ada");
//	}
//	else
//	{
//		printf("angka %i berada di index ke-%i",b,c);
//	}
//	if(i<=6)
//	{
//		puts("data ada");
//	}else
//	{
//		puts("data tidak ada");
//	}
}
	b=0;
	d=8;
	while (i!=0)
	{
		c=(b+d)/2;
		printf("loop ke-%i\na = %i\nb = %i\nc = %i\n",f,b,c,d);
		f++;
		if(a[c]==e)
		{
			puts("data ada");
			i=0;
			break;
		}
		else if(a[c]>e)
		{
			d=c-1;
		}
		else if(a[c]<e)
		{
			b=c+1;
		}
	}
	return 0;
}

