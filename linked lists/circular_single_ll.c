#include<stdio.h>
#include<stdlib.h>

//creating the node for circular single linked list
struct node{
    int data;
    struct node *next;
};
 struct node *circularsingly(int data) {

    struct node *temp = malloc(sizeof(struct node));
    temp -> data = data;

    temp -> next = temp;
    return temp;


 }

int main(){

    int data = 34;
    struct node *tail;
    tail = circularsingly(data);

    printf("%d",tail->data);
    return 0;
}