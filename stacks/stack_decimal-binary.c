/*algorithm

1) --> divide the number by 2.
2) --> store the remainder somewhere
3) --> repeat step 1 and 2 untill the quotient becomes 0.
4) --> print all the remainders in reverse order.

*/

#include<stdio.h>
#include<stdlib.h>
#define MAX 100

int stack_arr[MAX];
int top = -1;

//is the function to check wether the stcak is empty or not.
int isEmpty(){
    if(top == -1)
    return 1;
else 
return 0;
}

//it the function to add element is the stack from the top
void push(int data){

    if(top == MAX -1){
        printf("stack overflow");
        return;
    }

    top = top + 1; // increamenting the valueu by one 
    stack_arr[top] = data;
}

//this function help to convert the dec to binary by using above algo
void dec2bin(int n){

int rem;

while(n!=0){
 
    push(n%2);
    n = n/2;
  }
}

// void print(){
//     int i ;
//     if(first == -1){
//         printf("stack underflow");
//         exit(1);
//     }
//     for(i = 0; i<first ; i++){
//         pritnf("%d",stack_arr[i]);
//     }
//     printf("\n");
// }

//pop funcntion is used to remove the elements of the stack from the stack.
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
    if(isEmpty()){
        printf("stack underflow");
        exit(1);
    }
    while(!isEmpty()){
        printf("%d",pop());
    }
}

int main(){
    int dec;
    printf("Enter the decimal number: ");
    scanf("%d",&dec);
    dec2bin(dec);
    print();

    return 0;
}