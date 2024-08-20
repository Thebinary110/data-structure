#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node * next;
};
//traversal of the linked list
int traversal(struct Node*ptr){
    while(ptr != NULL){
        printf("%d ",ptr->data);
        ptr = ptr->next;
    }
}
// we are declaring a function to input a element at end
struct Node * insertAtEnd(struct Node*head , int data){
// dynamically allocating the pointer ptr at heap memory
struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
//giving the data to the node
ptr ->data = data;
//telling the pointer of the p to start from pointing at beginning
struct Node * p = head;

//starting the while loop to get to the end of the linked list 
while(p->next != NULL){
    //what to do to reach at the end of the element
    p = p->next;
}
//now we are joining the link with the node we have created to insert the last node will be connected to the new node and now the new node will point to null.
p->next = ptr;
ptr -> next = NULL;
 
 return head;
}

int main(){

struct Node * head ;
struct Node * second ;
struct Node * third ; 
struct Node * fourth ;

head = (struct Node*)malloc(sizeof(struct Node));
second = (struct Node*)malloc(sizeof(struct Node));
third = (struct Node*)malloc(sizeof(struct Node));
fourth = (struct Node*)malloc(sizeof(struct Node));

//linking data in first and second nodes;
head->data = 7;
head->next = second;

//linking data in second and third nodes;

second->data = 11;
second -> next = third;

//linking data in third and fourth nodes;

third -> data = 66;
third -> next = fourth;

//going for the termination of the linked list

fourth -> data = 69;
fourth -> next = NULL;





traversal(head);
head = insertAtEnd(head , 56);
printf("\n");
traversal(head);


    return 0; 
}