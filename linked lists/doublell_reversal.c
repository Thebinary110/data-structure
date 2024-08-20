#include<stdio.h>
#include<stdlib.h>



struct node{
    int data;
    struct node * prev;
    struct node * next;
};

struct node* addToEmpty(struct node*head , int data){
    struct node* temp = malloc(sizeof(struct node));
    struct node* temp1 = malloc(sizeof(struct node));
    struct node* temp2 = malloc(sizeof(struct node));
    
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
 struct node *delAtFirst(struct node *head ){
    //there are two methods either by taking the temp pointer or by doing it directly by head pointer
    //code goes on like this
    //alt method-->>
    // head = head -> next;
    //free (head -> prev);
    //head -> prev = NULL;
    //return head;
    struct node *temp = head;
    head = head -> next;
    free(temp);
    temp = NULL;
    head -> prev = NULL;

    return head;
 }
 struct node *reversal(struct node *head){
    struct node *ptr1 = head;
    struct node *ptr2 = ptr1 -> next;

    ptr1 -> next = NULL;//because now this will be our last node after reversal
    ptr1 -> prev = ptr2;

    while(ptr2 != NULL){
        ptr2 -> prev = ptr2 -> next;
        ptr2 -> next = ptr1;
        ptr1 = ptr2;
        ptr2 = ptr2 -> prev;
    }
    head = ptr1;
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
 printf("\n");
 head = reversal(head);
 
 ptr = head;
 while(ptr != NULL){
 printf("%d ",ptr -> data);
 ptr = ptr -> next;
 }
 return 0;
}