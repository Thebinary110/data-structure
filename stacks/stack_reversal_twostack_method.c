#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node * next;
};


int push(int data ,struct node* top){
    struct node * temp = malloc(sizeof(struct node));

    temp -> data = data;
    temp -> next = NULL;
    temp -> next = top;
    top = temp;
    return top;
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

int isEmpty(struct node* top){
    if(top == NULL)
    return 1;
else 
return 0;

}


void print(struct node* top){

struct node * temp;
    temp = top ;
    if(isEmpty(top)){
        printf("stack underflow");
        exit(1);
    }
    while (temp){
        printf("%d ",temp -> data);
        temp = temp -> next;
    }
    printf("\n");
}


int main(){
// we have to locally declare the stacks instead of declaring it gobally because of then we cant push the popes element from the top to top1 and then to top2 so here we will declare it locally.
struct node* top = NULL;
struct node* top1 = NULL;
struct node* top2 = NULL;


 top = push(20,top);
 top = push(40,top);
 top = push(60,top);
  print(top);

    return 0;
}