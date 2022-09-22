#include <stdio.h>

int main(){
	int selectMenu,r;
	
	printf("************************************************\n\n");
	printf("1 Calculate the area of ​​a circle\n");
	printf("2 Calculate circle diameter\n");
	printf("3 Calculate the circumference of a circle round\n\n");
	printf("************************************************\n");
	printf("[*] Input Menu : ");
	scanf("%d",&selectMenu);
	
	switch(selectMenu){
		case 1:
			printf("[*] Input radius : ");
			scanf("%d",&r);
			printf("Result : %d",22/7*(r*r));
			break;
		case 2:
			printf("[*] Input radius : ");
			scanf("%d",&r);
			printf("Result : %d",(22/7)*r);
			break;
		case 3:
			printf("[*] Input radius : ");
			scanf("%d",&r);
			printf("Result : %d",2*(22/7*r));
			break;
		default:
			printf("Not Found!!");
	
	} 
	return 0;
	
	
}