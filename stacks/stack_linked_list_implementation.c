/*

the push function would be similar to inserting the node at the beginning of the linked list .

the pop function must be equal to deleting the first node of the singly linked list.

stack overflow occurs when there is no space left to dynamically allocate the memory . in that case malloc() function will return NULL.

stack underflow occurs when top equals NULL.
*/


#include<stdio.h>
#include<stdlib.h>


struct node{
    int data ;
    struct node * next;
} *top = NULL ;

void push(int data){
    struct node * nnode = malloc(sizeof(struct node));

    if(nnode == NULL){
        printf("stack overflow");
        exit(1);
    }
    nnode -> data = data;
    nnode -> next = top; // assign next pointer to current top
    top = nnode; // update top to the new node
}

void pop(){
    struct node *temp = top;
    if(isEmpty()){
        printf("stack underflow");
        exit(1);
    }
int val = temp -> data;
    top = top -> next;
    free(temp);
    temp = NULL;
    return val;
}

int isEmpty(){
    if(top == NULL)
        return 1;
    else
    return 0;
}

int peek(){
     if(isEmpty()){
        printf("stack underflow");
        exit(1);
    }
    return top->data;
}

void print(){
    struct node * temp ;
    temp = top;
     if(isEmpty()){
        printf("stack underflow");
        exit(1);
    }
    printf("the stack element are: ");
    while(temp){
        printf("%d ",temp -> data);
        temp = temp -> next;
    }
    printf("\n");
}

int main(){

int choice , data;

while(1){
    printf("1. push\n");
    printf("2. pop\n");
    printf("3. print\n");
    printf("4. Quit\n\n");
    printf("Enter the choice: ");
    scanf("%d",&choice);


switch (choice)
{
    case 1: 
    printf("Enter the element to be pushed: ");
    scanf("%d",&data);
    push(data);
    break;

    case 2: 
   pop();
    break;

    case 3: 
     print();
    break;

 case 4: 
    exit(1);
    break;

default:
printf("wrong choice");
    break;
  }
}
return 0;
}