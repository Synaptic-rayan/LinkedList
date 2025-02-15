#include <stdio.h>
#include <stdlib.h>
// Create, insert and delete from linked list;

struct Node{
  int data;
  struct Node *next;
};


int main(){
  struct Node *first = NULL;
  struct Node *second = NULL;
  struct Node *third = NULL;

  first = (struct Node *)malloc(sizeof(struct Node));
  second = (struct Node *) malloc(sizeof(struct Node));
  third = (struct Node *)malloc(sizeof(struct Node));

  first->data = 10;
  first->next = second;

  second->data = 20;
  second->next = third;

  third->data = 30;
  third->next = NULL;

  struct Node *cur = first;
  while (cur != NULL){
    printf("%d\t", cur->data);
    cur = cur -> next;
}

free(first);
free(second);
free(third);
}







// Print Recursive linked list;


#include <stdio.h>
#include <stdlib.h>
struct Node
{
  int data;
  struct Node *next;
};

void disply(struct Node *cur){

if(cur == NULL){
  return;
}
printf("%d\t", cur->data);
disply(cur->next);
}

int main()
{
  struct Node *first = NULL;
  struct Node *second = NULL;
  struct Node *third = NULL;

  first = (struct Node *)malloc(sizeof(struct Node));
  second = (struct Node *)malloc(sizeof(struct Node));
  third = (struct Node *)malloc(sizeof(struct Node));

  // Check if memory allocation was successful
  if (first == NULL || second == NULL || third == NULL)
  {
    printf("Memory allocation failed\n");
    return 1;
  }

  first->data = 10;
  first->next = second;

  second->data = 20;
  second->next = third;

  third->data = 30;
  third->next = NULL;

  disply(first);

  free(first);
  free(second);
  free(third);
}







// Searching in a linked list;


#include <stdio.h>
#include <stdlib.h>

struct Node
{
  int data;
  struct Node *next;
};

int main()
{
  int key;
  printf("Enter The Key: ");
  scanf("%d", &key);

  // Allocate memory for three nodes
  struct Node *first = NULL;
  struct Node *second = NULL;
  struct Node *third = NULL;

  first = (struct Node *)malloc(sizeof(struct Node));
  second = (struct Node *)malloc(sizeof(struct Node));
  third = (struct Node *)malloc(sizeof(struct Node));

  // Initialize the linked list
  first->data = 10;
  first->next = second;

  second->data = 20;
  second->next = third;

  third->data = 30;
  third->next = NULL;

  // Traverse the linked list to find the key
  struct Node *cur = first;
  int found = 0; // Flag to check if the key is found

  while (cur != NULL)
  {
    if (cur->data == key)
    {
      printf("Data found\n");
      found = 1;
      break;
    }
    cur = cur->next; // Move to the next node
  }

  // If the key was not found after the loop
  if (!found)
  {
    printf("Data Not-Found\n");
  }

  // Free the allocated memory
  free(first);
  free(second);
  free(third);

  return 0;
}






// Recursive counting no of element in linked list;
#include <stdio.h>
#include <stdlib.h>
struct node
{
  int data;
  struct node *next;
};

int count(struct node *cur)
{

  if (cur == NULL)
  {
    return 0;
  }

  return 1 + count(cur->next);

}

int main()
{

  struct node *first = NULL;
  struct node *second = NULL;
  struct node *third = NULL;

  first = (struct node *)malloc(sizeof(struct node));
  second = (struct node *)malloc(sizeof(struct node));
  third = (struct node *)malloc(sizeof(struct node));

  first->data = 10;
  first->next = second;

  second->data = 20;
  second->next = third;

  third->data = 30;
  third->next = NULL;

  printf("%d", count(first));

  free(first);
  free(second);
  free(third);
}








#include <stdio.h>
#include <stdlib.h>

struct node
{
  int data;
  struct node *next;
};

int main()
{
  struct node *f;
  struct node *s;
  struct node *t;

  // Allocate memory for nodes
  f = (struct node *)malloc(sizeof(struct node));
  s = (struct node *)malloc(sizeof(struct node));
  t = (struct node *)malloc(sizeof(struct node));

  // Initialize the linked list
  f->data = 10;
  f->next = s;
  s->data = 20;
  s->next = t;
  t->data = 30;
  t->next = NULL;

  int key = 20;

  struct node *c = f;     // Current node
  struct node *cp = NULL; // Previous node

  // Traverse the list to find the node with the key
  while (c != NULL)
  {
    if (c->data == key)
    {
      // If the key is found, move the node to the front
      if (cp != NULL)
      {                     // If the node is not already the head
        cp->next = c->next; // Bypass the current node
        c->next = f;        // Point the current node to the old head
        f = c;              // Update the head to the current node
      }
      break; // Exit the loop after moving the node
    }
    else
    {
      cp = c;      // Move the previous pointer
      c = c->next; // Move to the next node
    }
  }

  // Print the modified list
  c = f; // Reset c to the new head of the list
  while (c != NULL)
  {
    printf("%d ", c->data);
    c = c->next; // Move to the next node
  }

  // Free the allocated memory
  free(f);
  free(s);
  free(t);

  return 0;
}
