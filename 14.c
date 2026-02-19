// campare two structures 

#include <stdio.h>
#include<string.h>

struct stu {

    int a;
    char b[10];
};

void main(){
    struct stu s1;
    struct stu s2;
    printf("Enter the s1: ");
   

    scanf("%d %s",&s1.a,s1.b);

     printf("Enter the s2: ");
    scanf("%d %s",&s2.a,s2.b);


    if (s1.a==s2.a && strcmp(s1.b,s2.b)==0){
        printf("structures contain same values and got compared");
    }
    else{
        printf("structures does not contain same values and got compared");

    }
}

