#include <stdio.h>

int main(){
	/*local variable definition*/
	int v_a = 100;	/*v_a = variable a*/

	/*check the boolean condition*/
	if(v_a < 20){
		/*if condition is true then print the following*/
		printf("v_a is less than 20\n");
	}else{
		/*if condition is false then print the following*/
		printf("v_a is not less than 20\n");
	}

	printf("The value of variable a (v_a) is : %d\n", v_a);
	
	return(0);
}
