
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
void insertSort(int arr[],int sizee){
    for( int i=0;i<sizee;i++){
        int j=i;
        while(j>0 and arr[j-1]>arr[j]){
            swap(arr[j],arr[j-1]);
            j--;
        }
        // 1 2 3 10 4 7 8 6 5 9
    }
}
int main(){
    int n=10;
    int arr[n];
    scanArray(arr,n);
    insertSort(arr,n);
    printArray(arr,n);

}

//inputZSS

