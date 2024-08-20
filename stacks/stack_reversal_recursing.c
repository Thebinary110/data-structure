#include <stdio.h>  
 #define MAXSIZE 10  
#define TRUE 1  
#define FALSE 0   
// Defining the structure of stack type  
 struct Stack {  
    int top;  
    int array[MAXSIZE];  
} st;  
  
// initialization of top variable  
 void initialize() {  
 st.top = -1;  
}  
// checking whether the stack is full or not   
int isFull() {     
    if(st.top >= MAXSIZE-1)  
        return TRUE;  
    else  
        return FALSE;  
}  
 // checking whether the stack is empty or not  
int isEmpty() {  
 if(st.top == -1)  
     return TRUE;  
 else  
     return FALSE;  
}  
   
// function to push the element into the stack.  
void push(int num) {  
    if (isFull())  
        printf("Stack is Full...\n");  
    else {  
        st.array[st.top + 1] = num;  
        st.top++;  
    }  
}  
   
// function to pop the element from the stack  
int pop() {  
    if (isEmpty())  
        printf("Stack is Empty...\n");  
    else {  
     st.top = st.top - 1;  
        return st.array[st.top+1];  
    }  
}  
   
// function to print the elements of stack.  
void printStack(){  
// condition to check whether the stack is empty or not.  
 if(!isEmpty())  
{  
     int temp = pop();  
     printStack();  
     printf(" %d ", temp);  
     push(temp);  
    }  
}  
// function to insert the element at the bottom of the stack.  
void insertAtBottom(int item) {  
    if (isEmpty()) {  
        push(item);  
    } else {  
       int top = pop();  
        insertAtBottom(item);  
        push(top);  
    }  
}  
 // function to reverse the order of the stack.  
void reverse() {  
    if (!isEmpty()) {  
         int top = pop();  
        reverse();  
        insertAtBottom(top);  
    }  
}  
  
int getSize(){  
 return st.top+1;  
}  
// Definition of main() method  
 int main() {  
 initialize(st);    // calling initialize() method  
  push(1);     // calling push() method  
    push(2);   // calling push() method  
    push(3);    // calling push() method  
    push(4);    // calling push() method  
    push(5);    // calling push() method  
    printf("Original Stack\n");  
    printStack();  
    reverse();  
    printf("\nReversed Stack\n");  
    printStack();  // calling printStack() method  
    return 0;  
}  