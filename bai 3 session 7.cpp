#include <stdio.h>
int main (){
	int array[5]={10 , 27, 35 , 40 , 42 };
	int chan=0;
    printf("cac so chan trong mang là  : ");
    for (int i=0;i<5;i++){
    	if(array[i] %2==0){
    		printf("%d ", array[i]);
    		chan =1;
    	}
    }
    if(!chan){
    	printf("khong có so chan");
    }
    printf("\n");
    		
   
	return 0;
}
