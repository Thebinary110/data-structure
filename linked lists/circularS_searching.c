#include<stdio.h>
#include<stdlib.h>

struct node{
    int data ;
    struct node *next;
};

struct node *addToEmpty(int data){
    struct node *temp = malloc(sizeof(struct node));

    temp -> data = data;
    temp -> next = temp; // Point to itself

    return temp;
}

struct node * addAtEnd(struct node *tail , int data){
    struct node *newP = malloc(sizeof(struct node));

    newP -> data = data;
    newP -> next = tail -> next; // Point to the next node
    tail -> next = newP; // Update the next pointer of the tail

    return newP; // Return the new tail
}

struct node *createList(struct node* tail){
    int i, n, data;
    printf("Enter the number of nodes of the linked list: ");
    scanf("%d",&n);
    
    if(n==0){
        return tail;
    }
    printf("Enter the element 1: ");
    scanf("%d",&data);
    tail = addToEmpty(data);

   for(int i = 1 ; i < n ; i++){
    printf("Enter the element %d: ",i+1);
    scanf("%d",&data);
    tail = addAtEnd(tail, data);
   }

   return tail;
}

void print(struct node *tail){
    struct node *p = tail -> next;

    do{
        printf("%d " ,p->data);
        p = p->next;
    }while(p!= tail->next); // Stop when we reach the tail again
}

int Search(struct node *tail , int element){
    
    int index = 0; 
    struct node *temp = tail -> next; // Start from the first node

    do{
        if(temp -> data == element)
            return index; 
        temp = temp -> next;
        index++;
        
    }while(temp != tail); // Stop when we reach the tail again

    return -1;
} 
    


int main ()
{
    struct node *tail;
    int element;
    tail = createList(tail);
    print(tail);
    printf("\n");
    printf("Enter the element to be searched: ");
    scanf("%d",&element);
    int index = Search(tail , element);
    if(index != -1){
        printf("Element found at index %d\n",index+1);
    } else {
        printf("Element not found\n");
    }
    return 0;
}