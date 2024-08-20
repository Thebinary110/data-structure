#include<stdio.h>

void printArray(int* A,  int n){
    for (int i = 0 ; i<n ; i++){
        printf("%d",A[i]);
    }
    printf("\n");
}

void selectionSort(int* A , int n){

    int MinIndex;
//first traversal
for(int i = 0 ; i<n ; i++){
MinIndex = i;

//second traversal
for(int j = i+1;  j<n ; j++){

//comparing the element to swap
    if(A[MinIndex]<A[j]){
//setting the new min element

   MinIndex = j;

    }
}

int temp = A[i];
A[i] = A[MinIndex];
 A[MinIndex] = temp;   
}
}


int main(){
    int n = 6;
    int A[] = {45 , 93,  22, 11, 3 , 99};

    printArray(A,n);
    selectionSort(A,n);
    printArray(A,n);


    return 0;
}