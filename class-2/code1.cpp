#include<iostream>

using namespace std;

void scanArray(int arr[],int size){
    for (int i=0;i<size;i++){
        cin>>arr[i];
    }
}
int binarySort(int arr[],int target,int sizee){
    int low =0;
    int high=sizee-1;

    while (low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==target){
            return mid;
        }else if(arr[mid]>target){
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    return -1;
}

void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n=10;
    int arr[10]={1,2,3,4,5,6,7,8,9};
    int target;
    cin>>target;
    int index=binarySort(arr,target,10);
    cout<<"Found at index: "<< index;

}
