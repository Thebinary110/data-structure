#include<stdio.h>
#include<stdlib.h>

struct node{
    int data ;
    struct node *next;
};


struct node *addToEmpty(int data){
    struct node *temp = malloc(sizeof(struct node));

    temp -> data = data;
    temp -> next = temp;

    return temp;
}
struct node * addAtEnd(struct node *tail , int data){
    struct node *newP = malloc(sizeof(struct node));

    newP -> data = data;
    newP -> next = tail -> next;
    tail -> next = newP;
    tail = tail->next;

    return tail;
}

struct node *createList(struct node* tail){
    int i, n, data;
    printf("Enter the number of nodes of the linked list: ");
    scanf("%d",&n);
    
    if(n==0){
        return tail;
    }
    printf("Enter the element 1: ");
    scanf("%d",&data);
    tail = addToEmpty(data);

   for(int i = 1 ; i < n ; i++){
    printf("Enter the element %d: ",i+1);
    scanf("%d",&data);
    tail = addAtEnd(tail, data);
   }

   return tail;
}

void print(struct node *tail){
    struct node *p = tail -> next;

    do{
        printf("%d " ,p->data);
        p = p->next;
    }while(p!= tail->next);
}
struct node * delAtFirst(struct node *tail){
    struct node * ptr = malloc(sizeof(struct node));

     ptr = tail -> next;
     tail -> next = ptr -> next;
     free(ptr);
     ptr = NULL;
    return tail;
 
}
 

int main ()
{

    struct node *tail;
    int pos;
    tail = createList(tail);
    print(tail);
    printf("\n");
    tail = delAtFirst(tail);
    print(tail);
    return 0;
}