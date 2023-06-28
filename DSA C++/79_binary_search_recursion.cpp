#include<iostream>
using namespace std;

bool binarySearch(int *arr, int start, int end, int key){
    //base condition

    if(start>end){
        return false;
    }

    int mid = start+(end-start)/2;
    
    if(arr[mid]==key){
        return true;
    }

    if(key>mid){
        return binarySearch(arr,mid+1,end,key);
    }
    else{
        return binarySearch(arr,start,mid-1,key);
    }
}

int main(){
    int array[6] = {1,2,3,4,5,6};
    int key = 6;
    if(binarySearch(array,0,5,key)){
        cout<<"Present";
    }
    else{
        cout<<"absent";
    }
}