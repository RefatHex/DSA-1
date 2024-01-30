
#include<iostream>

using namespace std;

void scanArray(int arr[],int size){
    for (int i=0;i<size;i++){
        cin>>arr[i];
    }
}
int recursiveBinarySearch(int arr[],int target,int low,int high){
    if(low>high){
        return -1;
    }
    int mid=(low+high)/2;
    if(arr[mid]==target){
        return mid;
    }else if(arr[mid]>target){
        high=mid-1;
        return recursiveBinarySearch(arr,target,low,high);
    }else{
        low=mid+1;
        return recursiveBinarySearch(arr,target,low,high);
    }
}
void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n=10;
    int arr[10]={0,1,2,3,4,5,6,7,8,9};
     int target;
    cin>>target;
    int index=recursiveBinarySearch(arr,target,0,9);
    cout<<"Found at index: "<< index;

}
