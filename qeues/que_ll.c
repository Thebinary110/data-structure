#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h> 
#include<malloc.h>


struct node{
   int data;
   struct node* next;
};

struct node* front;
struct node* rear ;

void enqueue();
int dequeue();
bool isEmpty();
bool isFull();
void display();

bool isEmpty(){
  if(front == NULL)
  return 1; 
}

// bool isFull(){
//    if(rear = size-1)
//    return 1;
// }


int main(){
  int choice;   
    while(choice != 4)   
    {     
        printf("\n*************************Main Menu*****************************\n");  
        printf("\n=================================================================\n");  
        printf("\n1.enqueue an element\n2.dequeue an element\n3.Display the queue\n4.Exit\n");  
        printf("\nEnter your choice ?");  
        scanf("%d",& choice);  
        switch(choice)  
        {  
            case 1:  
            enqueue();  
            break;  
            case 2:  
            dequeue();  
            break;  
            case 3:  
            display();  
            break;  
            case 4:  
            exit(0);  
            break;  
            default:   
            printf("\nEnter valid choice??\n");  
        }  
    }  
}  

void enqueue()  
{  
    struct node *ptr;  
    int item;   
      
    ptr = (struct node *) malloc (sizeof(struct node));  
    if(ptr == NULL)  
    {  
        printf("\nOVERFLOW\n");  
        return;  
    }  
    else  
    {   
        printf("\nEnter value?\n");  
        scanf("%d",&item);  
        ptr -> data = item;  
        if(front == NULL)  
        {  
            front = ptr;  
            rear = ptr;   
            front -> next = NULL;  
            rear -> next = NULL;  
        }  
        else   
        {  
            rear -> next = ptr;  
            rear = ptr;  
            rear->next = NULL;  
        }  
    }  
}     

int dequeue(){
int val;
   if(front == NULL){
   printf("Queue is empty");
   return 0;
   }
else{
   struct node* temp = (struct node*)malloc(sizeof(struct node));
   temp = front;
val = front->data;
front = temp->next;
free(temp);
  }
  return val;
}

void display()  
{  
    struct node *ptr = malloc(sizeof(struct node));  
    ptr = front;      
    if(front == NULL)  
    {  
        printf("\nEmpty queue\n");  
    }  
    else  
    {  
        printf("\nprinting values .....\n");  
        while(ptr != NULL)   
        {  
            printf("%d",ptr -> data);  
            ptr = ptr -> next;  
        }  
    }  
}  
