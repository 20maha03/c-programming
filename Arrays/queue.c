#include <stdio.h>

int arr[100];
int rear = -1;
int front = -1;
void enqueue(int val) {
    if(rear == 99) {
        printf("queue is full");
        return;
    }
    else if(front == -1) {
        front = 0;
    }
    rear++;
    arr[rear] = val;
}
void dequeue() {
    if(front == -1 || front > rear) {
        printf("stack is empty");
        return;
    }
    front++;
}
int is_empty() {
    if (front == -1 || front > rear) { 
        return 1;
    }
    return 0;
}

void display() {
    if (front == -1 || front > rear) { 
        printf("Queue is empty\n"); 
        return;
    }
    printf("Queue elements are: "); 
    for (int i = front; i <= rear; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n"); 
}
int main() {
    enqueue(2);
    enqueue(23);
    enqueue(5);
    display();
    dequeue();
    display();

}