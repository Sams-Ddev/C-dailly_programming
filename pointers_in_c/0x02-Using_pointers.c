#include <stdio.h>

/**
 * There are a few important operations, which we will do with the help of
 * pointers very frequently. (a) We define a pointer variable,
 * (b) assign the address of a variable to a pointer and
 * (c) finally access the value at the address available in the pointer variable.
 * This is done by using unary operator * 
 * that returns the value of the variable located 
 * at the address specified by its operand.
 */

int main () {

   int  var = 20;   /* actual variable declaration */
   int  *ip;        /* pointer variable declaration */

   ip = &var;  /* store address of var in pointer variable*/

   printf("Address of var variable: %x\n", &var  );

   /* address stored in pointer variable */
   printf("Address stored in ip variable: %x\n", ip );

   /* access the value using the pointer */
   printf("Value of *ip variable: %d\n", *ip );

   return 0;
}

/*When the above code is compiled and executed, it produces the following result-
 *
 * Address of var variable: bffd8b3c
 * Address stored in ip variable: bffd8b3c
 * Value of *ip variable: 20*/
