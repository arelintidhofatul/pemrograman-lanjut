#include <stdio.h>


int main(){
	
	int a, b, c;
	int arr[50];
	int temp;
 // int n, array[100], i, j, temp;
  printf("Masukkan jumlah banyaknya data: ");
  scanf("%d", &c);
  printf("Masukkan %d angka integer\n", c);
  for(a = 0; a < c; a++){
    scanf("%d", &arr[a]);
  }
  for (a = 1; a <= c; a++){
    b = a;
    while(b > 0 && arr[b-1] > arr[b]){
      temp = arr[b];
      arr[b] = arr[b-1];
      arr[b-1] = temp;
      b--;
    }
  }
  printf("Hasil pengurutan sebagai berikut:\n");
  for (a = 0; a <= c-1; a++){
    printf("%d ", arr[a]);
  }
  printf("\n");
  
  return 0;
}
