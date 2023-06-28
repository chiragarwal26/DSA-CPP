#include<iostream>
using namespace std;

void bubbleSort(int *arr , int size){
    //base case
    if(size==0 | size==1){
        return ;
    }
    // preprocessing
    for(int i = 0; i<size-1; i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    //recursive conditon
    bubbleSort(arr,size-1);
}

int main(){

    int array[5] = {5,4,0,-1,-15};
    bubbleSort(array,5);
    cout<<"sorted array is :\n";
    for(int i = 0; i<5; i++){
        cout<<array[i]<<" ";
    }
}