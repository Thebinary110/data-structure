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

struct node * addAtInt(struct node *tail , int data , int pos){
    struct node *newP = malloc(sizeof(struct node));
struct node *ptr = tail -> next;
while(pos > 1){
   ptr = ptr -> next;
   pos--;
}

    newP -> data = data;
    newP -> next = ptr -> next;
    ptr -> next = newP;

    return tail;
}

void print(struct node *tail){
    struct node *p = tail -> next;

    do{
        printf("%d " ,p->data);
        p = p->next;
    }while(p!= tail->next);
}

int main ()
{

    struct node *tail;
    int pos;
    tail = addToEmpty(69);
    tail = addAtEnd(tail , 55);
    tail = addAtEnd(tail , 02);
    tail = addAtInt(tail,49 ,2);
    print(tail);
    return 0;
}