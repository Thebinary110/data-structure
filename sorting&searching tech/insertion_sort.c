#include<stdio.h>
int count = 0 ;
void printArray(int* A, int n){
    for (int i=0; i<n; i++){
        printf("%d", A[i]);
    }
    printf("\n");
}

void insertionSort(int* A, int n){

    int key , j;
    //loop for passes
    for (int i = 1 ; i<= n-1; i++){
        //loop for each pass

        key = A[i];
        j = i-1;

        while(j>=0 && A[j]<key){
            A[j+1] = A[j];
            j--;
        }
        // to count the number of parses
            count++;
        A[j+1] = key;
    }
}




int main(){
    // 4 5 6 7 3 2

     int A[] = {12, 54, 65, 7, 23, 9};
     int n = 6;
     printArray(A,n);
     insertionSort(A,n);
     printf("%d",count);

return 0;


}