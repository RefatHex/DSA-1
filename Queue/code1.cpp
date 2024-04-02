#include <iostream>

using namespace std;

struct ListNode {
    int value;
    ListNode* next = nullptr;
};

ListNode* head = nullptr;

ListNode* newNode(int val) {
    ListNode* n = new ListNode();
    n->value = val;
    return n;
}

void enqueue(int val) {
    ListNode* n = newNode(val);
    n->next = head;
    head = n;
}

void dequeue() {
    if (head == nullptr) {
        cout << "Queue is empty." << endl;
        return;
    }
    cout << head->value << endl;
    head = head->next;
    delete head;
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);

    dequeue();
    dequeue();
    dequeue();

    return 0;
}
