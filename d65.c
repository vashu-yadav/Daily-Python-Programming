#include<stdio.h>

int main(){

    int arr[5] = {10, 20, 30, 40, 50};

    int key = 30;

    int i, found = 0;

    for(i = 0; i < 5; i++){

        if(arr[i] == key){

            printf("Element found at index %d", i);

            found = 1;

            break;
        }
    }

    if(found == 0){
        printf("Element not found");
    }

    return 0;
}