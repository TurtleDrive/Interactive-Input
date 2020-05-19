#include <stdlib.h>
#include <stdio.h>


int main(){
	int num1, num2;
	
	do{
		printf("Enter 1st Number:");
		scanf("%i", &num1);
		printf("Enter 2nd Number:");
		scanf("%i", &num2);
	}
	while (num1 % num2 == 0);
	
	printf("Yehey!");
	
	return 0;	
}
