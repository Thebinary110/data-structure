#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node * next;
} *top = NULL;


int push(int data){
    struct node * temp = malloc(sizeof(struct node));

    temp -> data = data;
    temp -> next = NULL;
    temp -> next = top;
    top = temp;
}
int isEmpty(){
    if(top == NULL)
    return 1;
else 
return 0;

}


void print(){

struct node * temp;
    temp = top ;
    while (temp){
        printf("%d ",temp -> data);
        temp = temp -> next;
    }
    printf("\n");
}


int main(){

    push(20);
    push(40);
    push(60);
    print();

    return 0;
}