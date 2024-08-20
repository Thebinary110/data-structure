#include<stdio.h>
#include<stdlib.h>



struct node{
    int data;
    struct node * prev;
    struct node * next;
};

struct node* addToEmpty(struct node*head , int data){
    struct node* temp = malloc(sizeof(struct node));
    
    temp  -> prev = NULL;
    temp  -> data = data;
    temp  -> next = NULL;
    head = temp;
    return head;
}

struct node *addAtEnd(struct node* head , int data){

    struct node *temp = malloc(sizeof(struct node));
struct node *pt = head;

while(pt -> next != NULL){
    pt = pt->next;
}

   
    temp -> data = data;
    temp -> prev = pt;
    pt -> next = temp;

    return head;     


}

struct node *createList(struct node *head){
    int n , data, i;
    printf("Enter the number of nodes: ");
    scanf("%d",&n);

    if(n==0){
        return head;
    }

    printf("Enter the elements for the node 1: ");
    scanf("%d",&data);
    head = addToEmpty(head , data);

    for(i = 1 ; i< n ; i++){
        printf("Enter the element for the node %d: ",i+1);
        scanf("%d",&data);
        head = addAtEnd(head, data);
    }
    return head;
}

int main(){
    
  
struct node *head = NULL;
struct node *ptr;

 head = createList(head);
 
 ptr = head;
 while(ptr != NULL){
 printf("%d ",ptr -> data);
 ptr = ptr -> next;
 }
 return 0;
}