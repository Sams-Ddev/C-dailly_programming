/**
 * Handling a variable number of arguments:
 */

#define DEBUG_PRINT(format, ...) \
    fprintf(stderr, format, __VA_ARGS__)

int main()
{
	DEBUG_PRINT("Error: %s (%d)\n", "Invalid input", 42);
	DEBUG_PRINT("Message: %s\n", "Hello");

	return (0);
}

