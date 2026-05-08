#include <stdio.h>

struct Student {
    int roll;
    float marks;
};

void display(int r, float m) {
    printf("Roll: %d\n", r);
    printf("Marks: %.2f\n", m);
}

int main() {
    struct Student s;

    printf("Enter roll and marks: ");
    scanf("%d %f", &s.roll, &s.marks);

    display(s.roll, s.marks);   // Call by value (individual members)

    return 0;
}
