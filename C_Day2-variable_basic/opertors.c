#include <stdio.h>

int main(void){
	int a = 21;
	int b = 10;
	int c;

	c = a + b;/*addittion of variables*/
	printf("Line 1 - Value of c is %d\n", c);

	c = a - b;/*substraction*/
	printf("Line 2 - Value of c is %d\n", c);

	c = a * b;/*multiplication*/
	printf("Line 3 - Value of c is %d\n", c);

	c = a / b;/*division*/
	printf("Line 4 - Value of c is %d\n", c);

	c = a % b;
	printf("Line 5 - Value of c is %d\n", c);

	c = a++; /*Incrementation by 1*/

	return(0);

}
