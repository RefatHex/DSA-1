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
    int latest,found=0;

    while (low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==target){
                latest=mid;
                found=1;
                low=mid+1;
        }else if(arr[mid]>target){
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    if(found==1){
        return latest;
    }
    else return -1;
}

void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[12]={1,2,3,4,5,5,5,5,6,7,8,9};
    int target;
    cin>>target;
    int index=binarySort(arr,target,11);
    cout<<"Found at index: "<< index;

}
