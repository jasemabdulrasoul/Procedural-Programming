#include <stdio.h>

int main() {
    int a[10];
    int count;

    for(count = 0; count < 10; count++) {
        a[count] = count * 10 + count;
    }
    printf("The second and third values are %d and %d\n", a[1], a[2]);

    printf("Or via pointers, %d and %d\n",*(a+1), *(a+2));

    return (0);
}