#include<stdio.h>
int count = 0;
void printArray(int* A , int n){

for(int i = 0 ; i<n ; i++){
    printf("%d ",A[i]);
}
printf("\n");

}

void insertionSort(int *A , int n){
    //declaring the key
    int key , j;
    for(int i = 1 ; i<n ; i++){
        key = A[i];
        j = i-1 ; 
        while(j>=0 && A[j]>key){
            A[j+1] = A[j];
            j--;
        }
        //to count the number of the parses 
        count++;
        A[j+1] = key;
    }
}

int main (){
    
    int A[] = {23, 43, 2, 89, 20 , 64};
    int n = 6;

    printArray(A, n);
    insertionSort(A, n);
    printArray(A, n);
printf("%d",count);
    return 0;
}
    
