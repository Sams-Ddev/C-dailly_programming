/*A function that prints a variable of strings*/

void print_strings(int  n, ...)
{
	va_list args;
	va_start(args, n);
	for (int i = 0; i < n; i++)
	{
		print(%s\n, va_arg(args, char*));
	}
	va_end(args);
}
