#include<iostream>
using namespace std;
void scanArray(int arr[],int size){
    for (int i=0;i<size;i++){
        cin>>arr[i];
    }
}
void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
void bubbleSort(int arr[],int sizee){
    for ( int i = 0; i < sizee - 1; i++) {
        for (int j = 0; j <sizee - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

}
int main(){
    int n=10;
    int arr[n];
    scanArray(arr,n);
    bubbleSort(arr,n);
    printArray(arr,n);

}

//input
// 1 3 2 10 4 7 8 6 5 9
