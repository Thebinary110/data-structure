#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node * prev;
    struct node * next;
};

struct node* addToEmpty(struct node*head , int data , int data1 , int data2){
    struct node* temp = malloc(sizeof(struct node));
    struct node* temp1 = malloc(sizeof(struct node));
    struct node* temp2 = malloc(sizeof(struct node));
    
    temp  -> prev = NULL;
    temp  -> data = data;
    temp  -> next = temp1;
    temp1 -> prev = temp;
    temp1 -> data = data1;
    temp1 -> next = temp2;
    temp2 -> prev = temp1;
    temp2 -> data = data2;
    temp2 -> next = NULL;
    head = temp;
    return head;
}

struct node *addAtBet(struct node* head , int data ,int position){

    struct node *newP = malloc(sizeof(struct node));
struct node *temp = head;
struct node *temp2 = NULL;

//newP = addToEmpty(newP , data);

while(position != 1){
    temp = temp -> next;
    position--;
}
newP -> data = data;
 temp2 = temp -> next;
 temp -> next = newP;
 temp2 -> prev = newP;
 newP -> next = temp2;
 newP -> prev = temp;
 
    return head;     


}

int main(){
    
  
struct node *head = NULL;
struct node *ptr;

 head = addToEmpty(head,45 ,55 , 69);
 head = addAtBet(head , 34 , 2);
 ptr = head;
 while(ptr != NULL){
 printf("%d ",ptr -> data);
 ptr = ptr -> next;
 }
 return 0;
}