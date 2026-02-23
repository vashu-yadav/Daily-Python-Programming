// Max and min
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n,max,min;
    
    printf("enter the number of elements: ");
    scanf("%d", &n);
    
    int *p = (int *)malloc(n * sizeof(int));
  
    for(int i =0;i < n;i++) {
        scanf("%d", (p + i));
    }

    max=*p;
    min=*p;



    for(int i= 1;i < n;i++) {
        if (*(p + i)> max) {
            max = *(p + i);
        }
        if (*(p + i)< min) {
            min = *(p + i);
        }
    }
printf("Max value is : %d \n",max);
printf("Min value is : %d \n", min);

return 0;
}
