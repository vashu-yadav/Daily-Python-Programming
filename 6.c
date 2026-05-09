#include <stdio.h>

struct Student {
    int roll;
    float marks;
};

struct Student getData() {
    struct Student s;
    printf("Enter roll and marks: ");
    scanf("%d %f", &s.roll, &s.marks);
    return s;
}

int main() {
    struct Student s1;

    s1 = getData();

    printf("Roll: %d\n", s1.roll);
    printf("Marks: %.2f\n", s1.marks);

    return 0;
}
