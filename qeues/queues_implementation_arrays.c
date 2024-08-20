#include<stdio.h>
#include<stdlib.h>

struct queue{

int size;
int f; // front  This integer variable points to the front element of the queue. When an element is dequeued from the queue, the front index is incremented.
int r; /* rear This integer variable points to the last element of the queue. When an element is enqueued into the queue, the rear index is incremented.

actually these are not pointers but these are the value indicators.*/
int *arr;

};

int isFull(struct *q){
    if(q->r == q->size-1){
        return 1;
    }
    return 0;
}
void enqueue(struct *q , int val){
    
    if(isFull(q)){
        printf("this queue is full");
    }
    else{
        q->r++;
        q->arr[q->r] = val;
    }

}

int main(){
    struct queue q;
    q.size = 100;
    q.f = q.r = -1;
    q.arr = (int* )malloc(sizeof(int arr));
    enqueue(&q , 12);
    enqueue(&q , 15);

    return 0;
} 