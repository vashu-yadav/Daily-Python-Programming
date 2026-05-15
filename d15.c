#include <stdio.h>

typedef struct {
    int roll;
    float marks;
} Student;

int main() {
    Student s1;

    printf("Enter roll and marks: ");
    scanf("%d %f", &s1.roll, &s1.marks);

    printf("Roll: %d\n", s1.roll);
    printf("Marks: %.2f\n", s1.marks);

    return 0;
}
