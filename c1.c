#include <stdio.h>

struct student {
    int Batch;
    char name[20];
    float marks;
};

int main() {
    struct student s;

    printf("Enter the Batch no: ");
    scanf("%d", &s.Batch);

    printf("Enter the Name: ");
    scanf("%s", s.name);   // no & needed for char array

    printf("Enter the marks: ");
    scanf("%f", &s.marks);

    printf("%d, %s, %.1f", s.Batch, s.name, s.marks);

    return 0;
}
