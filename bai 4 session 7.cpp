#include <stdio.h>
int main (){
	int n;
	int array[n];
	printf("nhap so phan tu cua mang :");
	scanf("%d",&n);
	printf("nhap %d phan tu trong mang \n",n);
	for(int i=0; i<n ;i++){
		printf("nhap phan tu %d :",i+1);
		scanf("%d",&array[i]);
	}
	printf("mang sau khi nhap:");
	for (int i=0;i<n;i++ ){
		printf("%d", array[i]);
    }
	return 0;
}
