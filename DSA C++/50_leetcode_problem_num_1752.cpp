#include<iostream>
using namespace std;
// PROPERTY OF SORTED & ROTATED ARRAY

// there exist only one pair in a sorted and rotated array
// where nums[i-1] > nums[i] 

bool checkSortedAndRotatedArray(int arr[], int size){

    int count = 0;
    for(int i = 1 ; i<size; i++){
        if(arr[i-1] > arr[i]){
            count++;
        }
    }
    if(arr[size-1] > arr[0]){
        count++;
    }
    if(count<=1){
        return 1;
    }
}
// driver code
int main(){
    int myArray[5] = {3,4,5,1,7};
    if(checkSortedAndRotatedArray(myArray,5) <= 1){
        cout<<"The array is sorted & rotated ";
    }
    else{
        cout<<"The array is NOT sorted & rotated";
    }
}