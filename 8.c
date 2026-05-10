#include <stdio.h>
#include <stdlib.h>

struct Student {
    int roll;
    float marks;
};

int main() {
    struct Student *ptr;

    ptr = (struct Student*) malloc(sizeof(struct Student));

    printf("Enter roll and marks: ");
    scanf("%d %f", &ptr->roll, &ptr->marks);

    printf("Roll: %d\n", ptr->roll);
    printf("Marks: %.2f\n", ptr->marks);

    free(ptr);

    return 0;
}
