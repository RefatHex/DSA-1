

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

int main(){
    int n=10;
    int arr[n];
    scanArray(arr,n);
    printArray(arr,n);

}

