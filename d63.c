#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node * next;
};

struct node * head=NULL;

void insert(int data){

    struct node * newnode=(struct node *)malloc(sizeof(struct node));
    struct node * temp;


    
    newnode->data=data;
    newnode->next=head;

    head=newnode;

    
}
void display(){
    struct node * temp=head;
    while(temp!=NULL){
        printf("%d",temp->data);
        temp=temp->next;
      
    }
}


void delete(int data){
    struct node * temp=head;
    while(temp->next != NULL){
        temp=temp->next;
        if(temp->data==data){
            
            printf("the deleted element is %d",temp->data);
            free(temp);
        }
    }
    


    
    


}
int main(){
    insert(5);
    display();
    delete(5);
    

return 0;

}