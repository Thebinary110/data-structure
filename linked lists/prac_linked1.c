#include<stdio.h>
#include<stdlib.h>


struct node {
    int data;
    struct node *next;
    struct node *prev;
};

struct node *addToEmpty(struct node *head ,int data ){

 struct node *temp = malloc(sizeof(struct node));

temp ->prev = NULL;
 temp -> data = data;
 temp -> next = NULL;
 
head = temp;
return head;
}

struct node *addToEnd(struct node *head , int data){

struct node *temp = malloc(sizeof(struct node));
struct node *ptr = head;

while(ptr -> next != NULL){
    ptr = ptr ->next;
}

temp -> data = data;
temp ->prev = ptr;
ptr ->next = temp;

return head;
}

struct node *insToStart(struct node *head , int data){
   
    struct node *nnode = malloc(sizeof(struct node));
     struct node *temp = head;

     nnode -> data = data;
     nnode -> next = head;
     head ->prev = nnode;
     return nnode;
}
struct node *insAtEnd(struct node *head ,int data){
    
    struct node *ptr = head;
struct node * temp = malloc(sizeof(struct node));
    while(ptr->next != NULL){
        ptr = ptr -> next;
    }
temp -> data = data;
     temp -> prev = ptr;
     ptr -> next = temp;
     temp -> next = NULL;
    
    return head;
    
    }

    struct node * insAtBet(struct node *head ,int data , int position){
        struct node *temp = malloc(sizeof(struct node));
        struct node *ptr = head;
        while(position >1){
            ptr = ptr -> next;
            position--;
        }
        temp -> data = data;
        temp -> next = ptr -> next;
        temp -> prev = ptr;
        ptr -> next = temp;
        ptr ->next->prev = temp;

        return head;
    }

struct node *createList(struct node *head){

    int n , data;
    printf("Enter the number of nodes: ");
    scanf("%d",&n);

    if(n==0){
        return head;
    }
    printf("Enter the node1: ");
    scanf("%d",&data);
    head = addToEmpty(head , data);
    for(int i=1 ; i<n ;i++){
        printf("Enter the %d element of the list: ",i+1);
        scanf("%d",&data);
        head = addToEnd(head , data);
    }
    return head;
}

struct node *delAtFirst(struct node *head){
    struct node *temp = head;

    head = head -> next;
    
    free(temp);
    
    return head;
}

struct node *delAtEnd(struct node *head){
    struct node *ptr  = head;
    struct node *temp = malloc(sizeof(struct node));
    while(ptr -> next != NULL){
        ptr = ptr -> next;
    }
   temp = ptr -> prev;
   temp -> next = NULL;
   free(ptr);
   return head;

}

struct node *delAtBet(struct node *head, int position){
    struct node *temp = malloc(sizeof(struct node));
        struct node *ptr = head;
        while(position >1){
            ptr = ptr -> next;
            position--;
        }
        temp = ptr ->prev;
        temp -> next = ptr -> next;
        ptr -> next -> prev = temp;
        free(ptr);
    return head;
}

int main(){
    struct node *head = NULL;
    struct node *pt;
    head = createList(head);
    pt = head;

    while(pt != NULL){
        printf("%d ",pt->data);
        pt = pt -> next;
    }
    printf("\n");
    // int data1 , pos;
    // printf("Enter the value to be inserted: ");
    // scanf("%d",&data1);
    // printf("Enter the position: ");
    // scanf("%d",&pos);
    // head = insAtBet(head , data1 , pos);

    // head = delAtFirst(head);
   int data1 , pos;
    printf("Enter the position: ");
    scanf("%d",&pos);
    head = delAtBet(head , pos);
   
    pt = head;
     while(pt != NULL){
        printf("%d ",pt->data);
        pt = pt -> next;
    }
    return 0;
}