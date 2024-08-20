#include<stdio.h>

void printArray(int* A, int n){
    for (int i = 0 ; i<n ; i++){
        printf("%d ",A[i]);
    }
    printf("\n");
}

void selectionSort(int* A , int n){
int indexOfMin;

//beginning to traverse the array from start
     for(int i= 0 ; i<n ; i++){
        //declaring the first element as the minimum number and assinging its index as the minimum index
        indexOfMin = i;

        //setting the set for the second traversal from the next element from the first traversal 
for(int j = i+1 ; j<n ; j++){

//now we have to arrange it in ascending order so if the next element is less than the first one then 
if(A[indexOfMin]>A[j]){
    //now changing the min index to forward as the element behind it is the minimum one
indexOfMin = j;
}


}
//swapping the minimum element and the element from the first travel
    int temp = A[i];
    A[i]=A[indexOfMin];
    A[indexOfMin] =  temp;
}
  
}

int main(){
    int n = 6;
    int A[] = {23, 2, 65, 88, 12 ,34};

    printArray(A, n);
    selectionSort(A, n);
    printArray(A, n);

    return 0;
}