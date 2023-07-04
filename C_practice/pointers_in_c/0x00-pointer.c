#include <stdio.h>

int main () {

   int  var1;
   char var2[10];

   printf("Address of var1 variable: %x\n", &var1  );
   printf("Address of var2 variable: %x\n", &var2  );

   return 0;
}

/**
 * When the above code is compiled and executed, it produces the following result
 *
 * Address of var1 variable: bff5a400
 * Address of var2 variable: bff5a3f6
 * */
