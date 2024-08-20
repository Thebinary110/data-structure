// write a program in the stack in an array stack_arr_[] using stack_arr[0] as the top element \

#include<stdio.h>
#include<stdlib.h>

#define MAX 5

int stack_arr[MAX];

int top = -1;//it indicates that the stack is empty
int first = -1;

void push (int data){
    int i ;
    first += 1;
    for(int i = first ; i>=0 ; i--){
        stack_arr[i] = stack_arr[i-1];
        
    }
    stack_arr[0] = data;
}

 void print(){
    int i;
    if(first == -1){
        printf("stack underflow");
        exit(1);
    }
    for(i = 0 ; i<=first ;i++ ){
        printf("%d",stack_arr[i]);
    }
    printf("\n");
 }

 int main(){
    push(20);
    push(40);
    push(60);
    push(80);
    print();

    return 0;
 }