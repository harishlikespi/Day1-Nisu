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
