#include <stdio.h>
/**
 *
 * this program demonstrate the use of variables that retain 
 * their values on end of progrma calls
 */

void increment() {
    static int counter = 0;

    counter++;
    printf("Counter: %d\n", counter);
}

int main() {
    increment();  // Counter: 1
    increment();  // Counter: 2
    increment();  // Counter: 3

    return (0);
}

/*In this example, the increment function contains a static variable
 * counter that retains its value between function calls.
 * Each time the increment function is called, the value of counter is incremented,
 * and the updated value is printed.
 * The static variable counter persists across multiple function calls,
 * allowing it to maintain its value and function as a counter.*/
