#include <iostream>
using namespace std;


struct queue{
    int front;     // Front
    int back;      // Rear
    int size;      // Array implementation of Queue
    int *arr;      // Array declared in heap storage
};


int isEmpty(struct queue *q){
    if (q->front==q->back){
        return 1;
    }
    return 0;
}

int isFull(struct queue *q){
    if (q->rear==q->size-1){
        return 1;
    }
    return 0;
}


void enqueue(struct queue *q,int value){
    if (isFull(q)){
        cout<<"The queue is Full.\n"<<endl;
        cout<<"No more elements can be inserted"<<endl;
    }
    else {
        q->rear++;
        q->arr[q->size]=value;
    }
}


int dequeue(struct queue *q){
    int a=-1;
    if (isEmpty(q)){
        cout<<"The queue  is empty.\n"<<endl;
        cout<<"If there is no element, then the element cannot be inserted."<<endl;
    }
    else {
        q->front++;
        a=q->arr[q->front];
    }
    return a;
}


int main(){
    
    struct queue q;
    
    q.size = 100;
    q.front = -1;
    q.back = -1;
    
    q.arr=(int *)malloc(q.size*sizeof(int));
    
    cout<<"Entering elements from here: "<<endl;
    enqueue(&q,12);  //Here, 12 value is entered in the queue.
    enqueue(&q,13);
    enqueue(&q,14);
    enqueue(&q,15);
    enqueue(&q,16);
    // In queue, all data are stored in array as [16->15->14->13->12].
    
    cout<<"Deleting Elements Started :"<<endl;
    
    cout<<"First Element: 12 deleted"<<dequeue(&q)<<endl;
    cout<<"Second Element: 13 deleted"<<dequeue(&q)<<endl;
    cout<<"Third Element: 14 deleted"<<dequeue(&q)<<endl;
    cout<<"Fourth Element: 15 deleted"<<dequeue(&q)<<endl;
    cout<<"Fifth Element: 16 deleted"<<dequeue(&q)<<endl;
    
    if (isEmpty(&q)){
        cout<<"Queue is Empty"<<endl;
    }

    if (isFull(&q)){
        cout<<"Queue is Full"<<endl;
    }
    
    return 0;

}
