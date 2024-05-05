#include <iostream>
#include <vector>

using namespace std;

vector<int> heap;
int size = 0;


int leftChild(int index)
{
    return 2 * index + 1;
}

int rightChild(int index)
{
    return 2 * index + 2;
}

int get_parentIndex(int index)
{
    return (index - 1) / 2;
}
int get_largestChildIndex(int index)
{
    int left = leftChild(index);
    int right = rightChild(index);
    if (right >= size || heap[left] > heap[right])
        return left;
    return right;
}


void insert(int x)
{
    heap.push_back(x);
    size++;
    int index = size - 1;
    int parent = get_parentIndex(index);
    while (index > 0 && heap[parent] < heap[index])
    {
        swap(heap[parent], heap[index]);
        index = parent;
        parent = get_parentIndex(index);
    }
}

void remove()
{
    if (size == 0) return;
    heap[0] = heap[--size];
    heap.pop_back();
    int index = 0;
    while (index < size)
    {
        int largerChildIndex = get_largestChildIndex(index);
        if (heap[index] >= heap[largerChildIndex])
            break;
        swap(heap[index], heap[largerChildIndex]);
        index = largerChildIndex;
    }
}

void printHeap()
{
    if (size == 0)
    {
        cout << "Heap is empty" << endl;
        return;
    }

    cout << "Heap: ";
    for (int i = 0; i < size; i++)
    {
        cout << heap[i];
        if (i != size - 1)
            cout << " ";
    }
    cout << endl;
}


int main()
{
    insert(10);
    insert(5);
    insert(15);
    insert(3);
    insert(7);
    insert(12);
    insert(20);

    cout << "Heap as tree:" << endl;
    printHeap();

    return 0;
}