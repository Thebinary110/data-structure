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
    tail = newP;

    return tail;
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
    }while(p!= tail->next);
}
struct node *count(struct node *tail){
 
      int count = 0; 
      struct node *temp = tail -> next;

      while(temp != tail){
        count++;
          temp = temp -> next;
          
      }

      printf("%d",count+1);  

return tail;

}


int main ()
{
    struct node *tail;
    int pos;
    tail = createList(tail);
    print(tail);
    printf("\n");
    // printf("Enter the position to be deleted");
    // scanf("%d",&pos);
    tail = count(tail);
    // print(tail);
    return 0;
}