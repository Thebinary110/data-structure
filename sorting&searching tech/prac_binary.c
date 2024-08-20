#include<stdio.h>

int binarySearch(int A[] , n){
    int low,high;
    low = 0;
    high = [n-1];

    while(low<=high){
        mid = (low + high)/2;

        if(A[mid] == element){
            return mid;
        }
        else if(A[mid]<element){
            low = mid+1;
        }
        else{
            high = i-1;
        }
    }
    return -1;
}






int main(){
      
    int A[] = {23,44,55,77,88,67,99};
    int n = sizeof(A)/sizeof(int);
    int element = 67;
    
   searchIndex = binarySearch(A, n);
   printf("the element %d is at %d",element,searchIndex);

   return 0;
}