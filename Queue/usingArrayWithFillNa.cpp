#include <iostream>

using namespace std;

const int Size = 3;
int arr[Size];

int frnt = 0;
int rear = -1;
int itemCount = 0;

void enqueue(int val) {
    if (itemCount == Size) {
        cout << "Queue is full" << endl;
        return;
    }
    rear = (rear + 1) % Size;
    arr[rear] = val;
    itemCount++;
}

void dequeue() {
    if (itemCount == 0) {
        cout << "Queue is empty" << endl;
        return;
    }
    cout << arr[frnt] << endl;
    frnt = (frnt + 1) % Size;
    itemCount--;
}

void display() {
    if (itemCount == 0) {
        cout << "Queue is empty" << endl;
        return;
    }
    int count = 0;
    int i = frnt;
    while (count < itemCount) {
        cout << arr[i] << ", ";
        i = (i + 1) % Size;
        count++;
    }
}

int main() {
    enqueue(164);
    enqueue(83);
    dequeue();
    enqueue(80);
    enqueue(75);
    display();

    return 0;
}
