#include<stdio.h>
int main(){
	int x,y,op;
	printf("Enter num 1:");
	scanf("%d",&x);
	printf("Enter num 2:");
	scanf("%d",&y);
	printf(" 1. Addition\n 2. Subtraction\n 3. Multiplication\n 4. Division\n Choose any no:");
	scanf("%d",&op);
	switch(op){
		case 1:
			printf("Addition: %d + %d: %d",x,y,x+y);
			break;
		case 2:
			printf("Subtraction: %d - %d: %d",x,y,x-y);
			break;
		case 3:
			printf("Multiplication: %d * %d: %d",x,y,x*y);
			break;
		case 4:
			if(y=0){
				printf("Division by zero is not allowed.");
			}
			else{
				printf("Division: %d / %d: %d",x,y,x/y);
			}	
			break;
		default:
			printf("Select no from 1-4");
			break;	
	}
	return 0;
}