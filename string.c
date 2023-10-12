#include <stdio.h>

int main() {
    char word[6] = "Hello";
    int a = 5;
    for(a = 5; a >= 0; a -= 1) {
        printf("%c\n", word[a]);
    }
    printf("\\%d\n",word[6]);
    return (0);
}
