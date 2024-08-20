#include<stdio.h>

void printArray(int* A , int n){
    for(int i = 0 ; i<n ; i++){
        printf("%d ",A[i]);
    }
    printf("\n");
}


void merge(int A[] ,int mid,int low ,int high ){
int i,j,k,b[100];
i = low;
j = mid+1;
k = low;

while(i<=mid && j<=high){

if(A[i]<A[j]){
    b[k] = A[i];
    i++;
    k++;
}
else{
    b[k] = A[j];
    j++;
    k++;
}
while(i<=mid){
b[k] = A[i];
i++;
k++;
}
while(j<=high){
    b[k] = A[j];
    j++;
    k++;
}

for(int i = low ; i<= high ; i++){
    A[i] = b[i];
}


  }
}

void MergeSort(int* A , int low , int high){
    int mid;
    if(low<high){
        mid = (low + high) / 2;
        MergeSort(A, low, mid);
        MergeSort(A, mid+1, high);
        merge(A,mid,low,high);
    }
}


int main(){
    int n = 10;
    int A[] = {2,1,4,5,4,7,9,8,6,3} ;

    printArray(A , n);
    MergeSort(A , 0, n);
    printArray(A, n);

    return 0;

    
}