#include <stdlib.h>

/**
 * structure declaration - you can define a structure in the global
 * scope of your program (outside of all your functions, just like
 * the functions prototypes)
 */

struct User
{
	char *name;
	char *email;
	int age;
};

int main(void)
{
	struct User user;

	user.name = "Fooli Bar";	/*accessing the elements of the struct by using '.' symbo;*/
	user.email = "sams.ccoder@int.com";
	user.age = 98;

	return (0);
}
