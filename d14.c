//create a structure student members as sap id ,name,cgpa , and a list of subjects from the currrent sem

#include<stdio.h>

struct list{
    char sub1[10];
    char sub2[10];
    char sub3[10];
};

struct student {
    int sap_id;
    char name[10];
    float cgpa;
    struct list sub;
};

void main(){
    struct student s;

    scanf("%d %s %f %s %s %s",&s.sap_id,s.name,&s.cgpa,s.sub.sub1,s.sub.sub2,s.sub.sub3);

    printf("%d %s %.2f %s %s %s",s.sap_id,s.name,s.cgpa,s.sub.sub1,s.sub.sub2,s.sub.sub3);

}
