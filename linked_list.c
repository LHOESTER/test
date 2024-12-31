#include <stdio.h>
#include <stdlib.h>

struct node{
    int value;
    struct node *next;
};
struct node *addnewlist(struct node *list, int n);

struct node *first = NULL;


struct node *addnewlist(struct node *list, int n) // n is for the data value, *list is the pointer of the next node location
{
    struct node *new_node;
    new_node = malloc(sizeof(struct node));
    if (new_node == NULL)
    {
        printf("ERROR");
    }
    new_node -> value = n;
    new_node -> next = list;
    return new_node;
}


int main(){
    
    
    first  = addnewlist(first,10);
    printf("%d", first->value);

    return 0;
}


