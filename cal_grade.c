#include <stdio.h>

int main(){
	
	int point=59;
	
	if(point >= 80){
		printf("Grade is 4");
	}
	else if (point >= 75){
		printf("Grade is 3.5");
	}
	else if (point >= 70){
		printf("Grade is 3");
	}
	else if (point >= 65){
		printf("Grade is 2.5");
	}
	else if (point >= 60){
		printf("Grade is 2");
	}
	else if (point >= 55){
		printf("Grade is 1.5");
	}
	else if (point >= 50){
		printf("Grade is 1");
	}
	else{
		printf("Grade is 0");
	}
	return 0;
}