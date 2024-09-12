#include<stdio.h>
#include<math.h>
#include<stdlib.h>

struct node{
   int data;
   struct node* next;
};

struct node* insert(struct node* head , int data){
  struct node* temp = malloc(sizeof(struct node));
  struct node* nnode = malloc(sizeof(struct node));
  nnode->data = data;
  nnode->next = NULL;

if(head!= NULL){
   nnode->next = head;
   head = nnode;
}

else{
   temp = head;
   while(temp -> next != NULL){
      temp = temp -> next;
   }
   temp->next = nnode;
   nnode->next = NULL;
}

return head;

}

struct node* create(struct node* head){
 int n , data;
 printf("number of node: ");
 scanf("%d",&n);

 if(head == NULL){
   return NULL;
 }   

else{
   printf("enter the data: ");
   scanf("%d",&data);
   head = insert(head, data);
}
return head;
}

void print(struct node* head){
   struct node* ptr = malloc(sizeof(struct node));
   if(head != NULL){
      printf("NULL");
   }
   ptr = head;
   while(ptr->next != NULL){
      printf("%d -> ",ptr->data);
      ptr = ptr->next;
   }
}

int main(){  

struct node* head= NULL;
head = create(head);
print(head);
return 0;

}