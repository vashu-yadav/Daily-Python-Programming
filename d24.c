#include <stdio.h>

struct Student {
    int roll;
    float marks;
};

void display(struct Student s) {   // entire structure passed
    printf("Roll: %d\n", s.roll);
    printf("Marks: %.2f\n", s.marks);
}

int main() {
    struct Student s1;

    printf("Enter roll and marks: ");
    scanf("%d %f", &s1.roll, &s1.marks);

    display(s1);   // Call by value

    return 0;
}
