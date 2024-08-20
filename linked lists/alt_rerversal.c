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


//making new node and adding it to the beginning of the linked list
struct Node * reversaloflist(struct Node *head){

//making of a new node and dynamically allocating it in heap
    struct Node * temp = NULL;

    struct Node * temp2 = NULL;
    
//now adding it to beginning by giving that node the ptr next address of the head to make it the second element so that this node can point toward this and giving the data as per asked in the initial requirements of the insertatfirst function.
    while(head != NULL){
        temp2 = head->next;
         head ->next =temp ;
         temp = head;
         head = temp2;
    }
    return temp;

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
head = reversaloflist(head);
printf("\n");
traversal(head);


    return 0; 
}