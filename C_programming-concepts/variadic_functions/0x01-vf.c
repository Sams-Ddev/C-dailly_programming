/*A function that adds a variable number of integers*/

int sum_integers(int n, ...)	// The first parameter, `n`.
				// The second parameter, `...`, is a variadic par
				// -ameter that can be used to pass any number of
				// integers to the function.
				
{
	int sum = 0;	  // The `sum` variable will be used to store the sum of 
			  // the integers.
	
	va-list args;	// The `va_list` variable is a variable that is used to 
			// store the variadic arguments.
	
	va_star(args, n);	  // The `va_start()` function initializes the
				  // `va_list` variable.

	for int (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);	// The `va_end()` function cleans up the `va_list` variable
	return(sum);

}


