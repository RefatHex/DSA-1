#include <iostream>
#include <cstdlib>

using namespace std;

struct node {
    int data;
    struct node *next;
};

void insertValue(struct node *prev, int value) {
    struct node *newNode;
    newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = value;
    newNode->next = NULL;
    prev->next = newNode;
}
void printList(struct node *head) {
    struct node *current = head;
    while (current != NULL) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

int main() {
    struct node *head;
    head = (struct node*)malloc(sizeof(struct node));
    head->data = 7;
    head->next = NULL;

    struct node *current = head;
    for (int i = 0; i < 5; i++) {
        insertValue(current, i);
        current = current->next;
    }
    printList(head);

    return 0;
}
