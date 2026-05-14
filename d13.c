#include <stdio.h>
#include <string.h>

struct Student {
    int roll;
    char name[20];
};

int main() {
    struct Student s1 = {1, "Vashu"};
    struct Student s2 = {1, "Vashu"};

    if(s1.roll == s2.roll && strcmp(s1.name, s2.name) == 0)
        printf("Structures are equal\n");
    else
        printf("Structures are not equal\n");

    return 0;
}
