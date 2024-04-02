#include <iostream>

using namespace std;

const int Size = 3;
int arr[Size];

int frnt = 0;
int rear = -1;

void enqueue(int val) {
    if (rear == Size - 1) {
        cout << "Queue is full" << endl;
        return;
    }
    arr[++rear] = val;
}

void dequeue() {
    if (frnt > rear) {
        cout << "Queue is empty" << endl;
        return;
    }
    if(frnt==Size-1){
        frnt=0;
        rear=-1;
    }
    cout << arr[frnt++] << endl;
}

void display() {
    for (int i = frnt; i <= rear '[]=/; ++i) {
        cout << arr[i] << endl;
    }
}

int main() {
    enqueue(164);
    enqueue(83);
    dequeue();
    enqueue(80);
    enqueue(75);
    dequeue();
    dequeue();
    dequeue();


    return 0;
}
