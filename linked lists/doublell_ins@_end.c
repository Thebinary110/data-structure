#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node * prev;
    struct node * next;
};

struct node* addToEmpty(struct node*head , int data , int data1){
    struct node* temp = malloc(sizeof(struct node));
    struct node* temp1 = malloc(sizeof(struct node));
    
    temp  -> prev = NULL;
    temp  -> data = data;
    temp  -> next = temp1;
    temp1 -> prev = temp;
    temp1 -> data = data1;
    temp1 -> next = NULL;
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

int main(){
    
  
struct node *head = NULL;
struct node *ptr;

 head = addToEmpty(head,45 ,55);
 head = addAtEnd(head , 34);
 ptr = head;
 while(ptr != NULL){
 printf("%d ",ptr -> data);
 ptr = ptr -> next;
 }
 return 0;
}