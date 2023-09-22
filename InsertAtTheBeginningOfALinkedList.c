#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* link;
};

struct node* at_the_beg(struct node* head, int data) {
    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return head;
    }
    ptr->data = data;
    ptr->link = NULL;
    
    ptr->link = head;
    head = ptr;
    
    return head;
}

int main() {
    struct node* head = (struct node*)malloc(sizeof(struct node));
    head->data = 12;
    head->link = NULL;
    
    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    ptr->data = 16;
    ptr->link = NULL;
    
    head = at_the_beg(head, 10);
    head = at_the_beg(head, 22);
    head = at_the_beg(head, 1000);

    ptr = head;
    
    while (ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
return 0;
free(head);
free(ptr);
}
