#include<stdio.h>
#include<stdlib.h>

#define MAX 4

int stack_arr[MAX];

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

int main(){
    int data;
    push(1);
    push(2);
    push(3);
    push(4);
    //push(5); will show stack overflow.
   data = pop();
   data = pop();
   print();
return 0;
}