#include <stdio.h>
#include <conio.h>
#define MAX 10
int Data[max];
int temp[max];

int main()
{
            int i;
            printf("Masukkan DATA SEBELUM TERURUT : \n");

            for (i = 0; i < max; i++)
            {
                        printf ("Data ke %i : ", i+1);
                        scanf ("%d", &Data[i]);
            }

            mergesort(Data, temp, max);
            printf("\nDATA SETELAH TERURUT : ");
            for (i = 0; i < max; i++)
            printf("%d  ", Data[i]);
            printf("\n");
        
            return(0);
}


void mergesort(int Data[], int temp[], int jml)
{
            sorting(Data, temp, 0, jml - 1);
}


//mengelompokkan data 
void sorting(int Data[], int temp[], int l, int r)
{
            int m;
            if (r > l)
            {
                        tengah = (r + l) / 2;
                        sorting(Data, temp, l, m);
                        sorting(Data, temp, m+1, r);
                        merge(Data, temp, l, m+1, r);
            }
}

//merge utama
void merge(int Data[], int temp[], int l, int m, int r)
{
            int i, l_end, el_angka, tmp_pos;
            l_end = m - 1;
            tmp_pos = l;
            el_angka = r - l + 1;

            while ((l <= l_end) && (m <= r))
            {
                        if (Data[l] <= Data[m])
                        {
                                    temp[tmp_pos] = Data[l];
                                    tmp_pos = tmp_pos + 1;
                                    l = l +1;
                        }
                        else
                        {
                        temp[tmp_pos] = Data[m];
                        tmp_pos = tmp_pos + 1;
                        m = m + 1;
                        }
            }
            while (l <= l_end)
            {
                        temp[tmp_pos] = Data[l];
                        l = l + 1;
                        tmp_pos = tmp_pos + 1;
            }
            while (m <= r)
            {
                        temp[tmp_pos] = Data[m];
                        m = m + 1;
                        tmp_pos = tmp_pos + 1;
            }

            for (i=0; i <= el_angka; i++)
            {
                        Data[r] = temp[r];
                        r = r - 1;
            }
}
