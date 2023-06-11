#include<iostream>
using namespace std;

int FindPivot(int arr[], int size){

    int start = 0, end = size-1 , mid = start + (end-start)/2;
    while(start<end){
        if(arr[mid]>= arr[0]){
            start = mid+1;
        }
        else{
            // when arr[mid] < arr[n-1]
            end = mid;
        }
        mid = start+(end-start)/2;
    }
    return start;
}

int BinarySeach(int arr[], int s, int e, int key){
    int start = s , end = e;

    int mid = start + (end - start)/2;

    while(start<=end){
        if (arr[mid] == key){
            return mid;
        }
        //go to left wala part
        if (arr[mid]> key){
            end = mid-1;

        }
        // go to right wala part
        else{
            start = mid+1;
        }
        mid = start + (end - start)/2;
    }
    return -1;
}
// driver code
int main(){
    int key = 7;
    int array[5] = {7,9,1,2,3};
    int pivot = FindPivot(array,5);
    cout<<"the index of the required element is : \n";
    if(array[pivot]<= key   &&  array[4] >= key){
        // BinarySearch(array, pivot , end , key) 
        cout<<BinarySeach(array, pivot ,4, key );
    }
    else{
        cout<<BinarySeach(array, 0 , pivot - 1 , key);
    }
}