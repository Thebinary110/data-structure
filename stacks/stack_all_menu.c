#include<stdio.h>
#include<stdlib.h>

#define MAX 4
int stack_arr[100];

int top = -1;//it indicates that the stack is empty

void push(int data){

    if(top == MAX -1){
        printf("stack overflow");
        return;
    }

    top = top + 1; // increamenting the valueu by one 
    stack_arr[top] = data;
}

int pop(){
int value;
if(top == -1){
    printf("stack underflow");
    exit(1);
}
value = stack_arr[top];
top--;
return value;
}

void print(){
    int i;
    if(top == -1){
        printf("stack unederflow");
        return;
    }
    for(int i = top ; i>=0 ; i--)
    printf("%d ",stack_arr[i]);
printf("\n");
}

int peek(){
    if(top == -1){
        printf("stack underflow");
        exit(1);
    }

return stack_arr[top];
}

void print_reverse(){
    for(int i = 0 ; i <= top ; i++){
        printf("%d",stack_arr[i]);
        
    }
}

int main(){
    int data , choice;
  while(1){
    printf("\n");
    printf("1. push\n");
    printf("2. pop\n");
    printf("3. print the top element\n");
    printf("4. print all the elements of the stack\n");
    printf("5. print the stack in reverse order\n");
    printf("6. Quit\n");
    printf("please enter your choice: ");
    scanf("%d",&choice);
  

   switch(choice){
    case 1: 
    printf("Enter the element to be pushed: ");
    scanf("%d",&data);
    push(data);
    break;
   
   
   case 2:
   data = pop();
   printf("the data which is poped is %d",data);
   break;

   case 3:
   printf("the top element is :%d",peek());
   break;

   case 4:
   print();
   break;

   case 5: 
   print_reverse();
   break;

   case 6: exit(1);

   default : 
   printf("Enter the valid option");
   }
     }
return 0;
}