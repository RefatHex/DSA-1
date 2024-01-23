

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
void selectionSort(int arr[],int sizee){
    for( int i=0;i<sizee-1;i++){
        int iMin=i;
        for (int j=i+1;i<sizee;i++){
            if(arr[j]<arr[iMin])
                iMin=j;
            if(iMin!=i)
                swap(arr[i],arr[iMin]);
        }
    }
}
int main(){
    int n=10;
    int arr[n];
    scanArray(arr,n);
    selectionSort(arr,n);
    printArray(arr,n);

}

//inputZSS
// 1 2 3 10 4 7 8 6 5 9
