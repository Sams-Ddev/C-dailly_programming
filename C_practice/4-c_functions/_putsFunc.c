/**
 * The block of code inside the puts() function in C is as follows:
 */

/*This line declares the puts() function and specifies that it takes a single parameter,
 * a pointer to a constant string.
 */
iint puts(const char *str) {
	  int i;

	    for (i = 0; str[i] != '\0'; i++) {
		        fputc(str[i], stdout);
			  }

	      fputc('\n', stdout);

	        return i;
}

