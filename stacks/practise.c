#include<stdio.h>
#include<stdlib.h>
int check_balanced(char* s){
   
   for(int i = 0 ; i<strlen(s) ; i++){
         int temp;

        if(s[i] == '[' || s[i] == '{' || s[i] == '('){
            push(s[i]);
        }

    if(s[i] == ']' || s[i] == '}' || s[i] == ')'){
            if(isEmpty()){
                printf("right brackets are more than left");
                return 0;
            }

            else{
                temp = pop();
                if(!match_char(temp , s[i])){
                        printf("the brackets are mismatched");
                        return 0;
                }
            }
        }
   }
   if(isEmpty()){
    printf("the brackets are well balanced");
   }
   isFull(){}
isEmpty(){}

void push(char c){
    if(isFull()){
        printf("stack overflow");
        exit(1);
        top++;
        stack_top[top] = c;
    }
}

char pop(){
    c = stack_arr[top];
    top--;
    return c;
}
 
 int match_char(char a, char b){
    if(a == '[' && b == ']')
    return 1;
    else if (a== '{' && b == '}')
    return 1;
else (a== '(' && b == ')')
return 1;
    return 0;
 }


}