#include<iostream>
using namespace std;

// example , i/p sorted array [1,2,3,7,9]
// rotated array [7,9,1,2,3]
// pivot element is 1 at index 2
   
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

int main(){
    int array[5] = {7,9,1,2,3};
    cout<<"\nthe pivot element is : "<<array[FindPivot(array,5)]<<" at index "<<FindPivot(array,5);
}