/**
 *
 *
 * pointers to a structures - to access elements of a pointer
 * to a structure, you have to determine the pointer and then access
 * to the data using the '.' symbol
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
	struct User *ptr;

	ptr = &user;
	/* Dereferencing the pointer before access the data with the '.' symbol*/
	(*ptr).name = "Foo Bar";
	/* Using the '->' works the same, and is so much easier*/
	ptr ->email = "sam.ccoder@int.com";

	return (0);
}
