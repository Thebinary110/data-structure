#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node * next;
}; 
void traversal(struct Node* ptr){
    while(ptr != NULL){
    printf("Element: %d\n", ptr->data);
    ptr = ptr->next;
    }
}
int main(){
    struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * fourth;
    // allocation of the memory in the heap for the linked lists.
    head = (struct Node *) malloc (sizeof(struct Node));
    second = (struct Node *)malloc(
        sizeof(struct Node));
        third = (struct Node *)malloc(
        sizeof(struct Node));
        fourth = (struct Node *)malloc(
            sizeof(struct Node));
        //linked first and second nodes
        head ->data = 7;
        head ->next = second;
        //linking second and third nodes
        second ->data = 11;
        second ->next = third;
        //3 to 4 linked list 
        third -> data = 66;
        third -> next = fourth;
        //temrinating the linked list
        fourth -> data = 69;
        fourth -> next = NULL;
        
        traversal(head);
    
    return 0;
}