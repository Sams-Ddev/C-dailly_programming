/*
 * This is a simple programme that demonstrate the 
 * use of scanf(taking user input), printf and 
 * the use of conditional branching of program
 * usin the if ...else...else...if statement
 *
 * */

#include <stdio.h>

int main(void)
{
	int v_age;

	printf("Please enter you age:");
	scanf("%d",&v_age);
	if(v_age >= 1){
		printf("You are such a vabrant youth\n");
	}else if(v_age > 36){
		printf("Ghana thanks you four service, Bigman\n");
	}
	else if(v_age <= 0){
		printf("Thats not a real age, bro\n");
	}
	else{
		printf("Please a number, Thank you\n");
	}
	return(0);
}
