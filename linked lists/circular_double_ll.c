#include<stdio.h>
#include<stdlib.h>
//creating the node for the circular double linked list
struct node{
    int data;
    struct node *next;
    struct node *prev;
};
 struct node *circulardoubly(int data) {

    struct node *temp = malloc(sizeof(struct node));
    
    temp ->prev= temp;

    temp -> data = data;

    temp -> next = temp;
    return temp;


 }

int main(){

    int data = 34;
    struct node *tail;
    tail = circulardoubly(data);

    printf("%d",tail->data);
    return 0;
}