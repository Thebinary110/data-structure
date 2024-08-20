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
struct Node * insertafterNode(struct Node *head,struct Node *prevNode, int data)
{
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr->data = data;

    ptr ->next = prevNode->next;
    prevNode->next = ptr;

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
head = insertafterNode(head ,third, 41);
printf("\n");
traversal(head);


    return 0; 
}