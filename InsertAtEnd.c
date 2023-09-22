#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *link;
};

void insert_at_the_end(struct node *head, int data){
struct node *ptr, *temp;
temp = (struct node*)malloc(sizeof(struct node));
temp -> data = data;
temp->link = NULL;
ptr = head;
while(ptr->link!=NULL){
ptr=ptr->link;
}
ptr->link = temp;

}

void print(struct node *head){
if(head == NULL)
    printf("The list is empty");
struct node *ptr = NULL;
ptr = head;
while(ptr != NULL){
printf("%d\t",ptr->data);
ptr= ptr->link;

}
}


int main(){
struct node *head = (struct node*)malloc(sizeof(struct node));
head->data=12;
head->link=NULL;

struct node *curr = (struct node*)malloc(sizeof(struct node));
curr->data=19;
curr->link=NULL;
head->link=curr;
insert_at_the_end(head,45);
insert_at_the_end(head,100);
print(head);
free(head);
}


