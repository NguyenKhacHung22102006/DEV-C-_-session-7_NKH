#include <stdio.h>
int main (){
	int array[5]={3,1,7,4,6};
	int arraySize = sizeof(array)/sizeof(int);
	printf("kich thuoc mang = %d\n ", arraySize);
	printf("phan tu thu nhat = %d\n", array[0]);
	printf("phan tu thu hai = %d\n", array[1]);
	printf("phan tu thu ba = %d\n", array[2]);
	printf("phan tu thu tu =%d\n", array[3]);
	printf("phan tu thu nam = %d\n", array[4]);		

	return 0;
}
