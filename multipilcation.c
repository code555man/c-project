#include <stdio.h>

int main(){
	int num;
	
	printf("Input Multiplication Table : ");
	scanf("%d",&num);
	
	for(int i=1; i<=num; i++){
		printf("%2d x %d = %d\n",i,num,i*num);	
	}
	
	return 0;
}