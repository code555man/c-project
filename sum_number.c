#include <stdio.h>

int main(){
	int num1,num2,i,sum=0;
	
	printf("Input Number Start : ");
	scanf("%d",&num1);	
	
	printf("Input Number Stop : ");
	scanf("%d",&num2);
	
	for(i=num1; i<=num2; i++){
		sum = sum + i;
	}
	
	printf("\n***************\n");
	printf("Sum (1-10) : %d",sum);
	
	return 0;
}