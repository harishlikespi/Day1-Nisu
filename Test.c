#include <stdio.h>

int main()
{
    printf("hello World");
    printStars();

    return 0;
}

void printStars() {
    int count = 5;
    for(count = 5; count >=0; count--) {
        printf("*");
    }
    return 0;
}
// Your void method has a return for an int, and while it still runs the compiler will send out a warning. Also, when calling methods, you need a protoype of the method if the method is written
// after wherever you're calling it, and again, while it still runs, the compiler will give you an implicit decleration warning.
