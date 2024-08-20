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



int main(){
    
    push(1);
    push(2);
    push(3);
    push(4);
    //push(5); will show stack overflow.
   
return 0;
}