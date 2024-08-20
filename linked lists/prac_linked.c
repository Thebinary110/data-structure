#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node * next;
    };

    void traversal(struct Node* ptr){
        while(ptr != NULL){
            printf("element: %d\n",ptr->data);
            ptr = ptr->next;
        }
    }

    struct Node*insertatfirst(struct Node *head,int data){

        struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));

        ptr -> data = data;
        ptr -> next = head;
        return ptr;
    }

    struct Node * atend(struct Node*head , int data){
        struct Node * ptr = (struct Node*)malloc(sizeof(struct Node));

        ptr ->data = data;

        struct Node * p = head;

        while(p -> next !=NULL){
            p  = p->next;
        }

           p ->next = ptr;
           ptr->next = NULL;
           return head;

    }

    struct Node* atIndex(struct Node * head , int data , int index){
        struct Node * ptr = (struct Node*)malloc(sizeof(struct Node));

        struct Node * p = head;
        ptr ->data = data;
        int i=0;
        while(i != index-1){
          p = p->next;
          i++;
        }
        ptr->next = p->next;
        p ->next = ptr;
        return head;
    }
    
    struct Node* dels(struct Node * head){
        struct Node * ptr = (struct Node*)malloc(sizeof(struct Node));

        head = head -> next;

        free(ptr);
        
        return head;
    }

    int main(){
        struct Node*head;
        struct Node*second;
        struct Node*third;
        struct Node*fourth;

        head = (struct Node *) malloc (sizeof(struct Node));
        second = (struct Node *)malloc(sizeof(struct Node));
        third = (struct Node*)malloc(sizeof(struct Node));
        fourth = (struct Node*)malloc(sizeof(struct Node));

        head->data = 7;
        head-> next = second;

        second -> data = 11;
        second -> next = third;

        third ->data = 66;
        third -> next = fourth;

        fourth -> data = 99;
        fourth ->next = NULL;

        traversal(head);
        // head = insertatfirst(head, 69);
        // traversal(head);
        // head = atend(head,69);
        // traversal(head);
        head=atIndex(head , 69, 2);
        traversal(head);
        head = dels(head);
        traversal(head);
        return 0;
    }