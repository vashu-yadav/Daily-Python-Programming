#include <stdio.h>

struct Student {
    int roll;
    float marks;
};

int main() {
    struct Student s[3];

    for(int i = 0; i < 3; i++) {
        printf("Enter roll and marks: ");
        scanf("%d %f", &s[i].roll, &s[i].marks);
    }

    for(int i = 0; i < 3; i++) {
        printf("Roll: %d  Marks: %.2f\n", s[i].roll, s[i].marks);
    }

    return 0;
}
