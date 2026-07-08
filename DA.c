#include <stdio.h>

int main() {
    char a[7];
    int b;

    printf("Enter the name to be printed: ");
    scanf("%6s", a);   // Prevents buffer overflow

    printf("Enter the number of times to be printed: ");
    scanf("%d", &b);

    for (int i = 1; i <= b; i++) {
        printf("%s\n", a);
    }

    return 0;
}