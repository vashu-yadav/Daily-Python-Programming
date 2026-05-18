#include <stdio.h>

struct Student {
    int roll;
    float marks;
};

void update(struct Student *s) {   // pointer parameter
    s->marks = 95.5;               // modify original value
}

int main() {
    struct Student s1;

    printf("Enter roll and marks: ");
    scanf("%d %f", &s1.roll, &s1.marks);

    update(&s1);    // Call by address

    printf("Updated Marks: %.2f\n", s1.marks);

    return 0;
}
