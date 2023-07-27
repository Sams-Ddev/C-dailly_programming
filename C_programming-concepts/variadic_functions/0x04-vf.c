/*A function that prints a formatted string with a variable*/

void printf_formatted(const char* format, ...)
/*The `format` parameter specifies the format string for the formatted output.
 *
 *The `...` parameter is a variadic parameter that can be used to pass any number of arguments to the function.
*/
{
	va_list args;
	/* The `va_list` variable is a variable that is used to store the variadic arguments.*/
	va_start(args. format);
	 // The `vprintf()` function prints the formatted output to the standard output.
	vprintf(format, args);

	va_end(args);
	/*The `va_end()` function cleans up the `va_list` variable.*/

}
