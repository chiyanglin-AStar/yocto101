#include <stdio.h>
#include <stdlib.h>

struct node
{
  int data;
  struct node *next;
};


int main()
{
    /* Initialize nodes */
    struct node *head,*current;
    struct node *one = NULL;
    struct node *two = NULL;
    struct node *three = NULL;
    /* Allocate memory */
    one = malloc(sizeof(struct node));
    two = malloc(sizeof(struct node));
    three = malloc(sizeof(struct node));
    
    /*
        (head) node1 -> node2 -> node3(end)
    */
    
    /* Assign data values */
    one->data = 1;
    two->data = 2;
    three->data=3;
    /* Connect nodes */
    one->next = two;
    two->next = three;
    three->next = NULL;

    /* Save address of first node in head */
    head = one;
    current = head;
    while( current->next!= NULL){
        printf("data = %d \n",current->data);
        current = current->next;
    }
    printf("data = %d \n ",current->data);
    return 0;
}
