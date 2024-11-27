#include <stdio.h>
int main (){
	int array[5];
    printf("nhap 5 phan tu cho mang :\n");
    for (int i=0;i<5;i++){
    	printf("nhap phan tu %d :",i+1);
    	scanf("%d",&array[i]);
    }
    printf("mang sau khi nhap \n");
    for (int i=0;i<5;i++){
    	printf("phan tu thu %d : %d\n",i+1,array[i]);
    }
	return 0;
}
