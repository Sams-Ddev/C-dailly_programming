#include <stdlib.h>

/**
 * FunCall - returns functions by its values
  */

int funCall(int x, int y)
{
	int x = 100, y = 200;
	return (x + y);
}


int main() {
	int x = 10, y = 22;
	funCall(x, y);

	return (EXIT_SUCCESS);
}
