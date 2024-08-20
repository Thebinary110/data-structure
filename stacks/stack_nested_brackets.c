/*algorithm

*--> we will traverse the array from the start
*--> when we encounter the left sided bracket either { ,( ,[,< then we will push it into the stack
*--> if we encounter the right sided bracket then we will pop the top most bracket in the stack and compare it to the current right sided bracket if equal then we will move forward.

*--> and in between we will add some conditions for the empty stack or no matching of the brackets.
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX 100

int top = -1;
char stack_arr[MAX];
void push(char);

char pop();
int isEmpty();
int isFull();
int check_balanced(char*);
int match_char(char,char);



int check_balanced(char* s){
    char temp;
    int i;
    for(i = 0 ; i< strlen(s); i++){
   //if the bracket is left sided bracket then push it to stack.
    if(s[i] == '[' || s[i] == '{' || s[i] == '(')
        push(s[i]);
    //if the bracket is the right sided bracket
    if(s[i] == ']' || s[i] == '}' || s[i] == ')'){

        //if the stack is Empty
        if(isEmpty()){
            printf("right brackets are more than the left\n");
            return 0;
        }
        else{
            temp = pop();
            //now the condition for the bracket mismatched  
            if(!match_char(temp , s[i])){
                printf("mismatched brackets.\n");
                return 0;
            }
        }
    }
    }
if(isEmpty()){
    printf("brackets are well balanced.\n");
    return 1;
}
else{
    printf("left brackets are more than right.\n");
    return 0;
}
}

void push(char c){
     
     if(isFull()){
        printf("stack overflow");
        exit(1);
     }
     top++;
     stack_arr[top] = c;
}

char pop(){
    char c;
    if(isEmpty()){
        printf("stack underflow");
        exit(1);
    }
    c = stack_arr[top];
    top--;
    return c;
}
int isEmpty(){
    if(top == -1){
        return 1;
    }
    else
    return 0;
}

int isFull(){
    if(top == MAX-1){
        return 1;
    }
    else 
    return 0;
}

int match_char(char a , char b){
    if(a == '[' && b == ']')
    return 1;
if(a == '{' && b == '}')
    return 1;
if(a == '(' && b == ')')
    return 1;
return 0;
}

int main(){
    char expr[MAX];
    int balanced;
    printf("Enter the algebraic experssion: ");
    fgets(expr , 100 , stdin);

    balanced = check_balanced(expr);

    if(balanced == 1)
    printf("the expression is valid.");
   
   else
    printf("the expression is not valid.");
   

   return 0;
  
}
