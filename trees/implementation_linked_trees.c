#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node* left;
    struct node* right;
};

int main (){

//constructing the root node
struct node* p ;
p = (struct node *) malloc(sizeof (struct node));

p -> left  = NULL;
p -> right = NULL; 

//constructing the second node

struct node* p1;
p1 = (struct node *) malloc(sizeof (struct node));

p1 -> left  = NULL;
p1 -> right = NULL; 

//constructinng the third node

struct node* p2 ;
p2 = (struct node *) malloc(sizeof (struct node));

p2 -> left  = NULL;
p2 -> right = NULL; 


    return 0;
}