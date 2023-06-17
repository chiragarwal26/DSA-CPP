#include<iostream>
using namespace std;

void BubbleSort(int arr[], int size){
    // for loop for each round
    for(int i = 1; i<size ; i++){
        // for loop for tracing two elements
        for(int j = 0 ; j< size - i ; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
int main(){
    int myArray[6] = {10,1,7,6,14,9};
    cout<<"Original array is :\n";
    for(int i = 0 ; i<6 ; i++){
        cout<<myArray[i]<<" ";
    }
    BubbleSort(myArray,6);
    cout<<"\nsorted array is :\n";
    for(int i = 0 ; i<6 ; i++){
        cout<<myArray[i]<<" ";
    }
}