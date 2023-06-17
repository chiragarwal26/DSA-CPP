#include<iostream>
using namespace std;

void moveZeroes(int arr[], int size){
    int i = 0;
    for(int j = 0 ; j< size ;j++){
        if(arr[j]!=0){
            swap(arr[j],arr[i]);
            i++;
        }
    }
}

void print(int arr[], int size){
    cout<<"[ ";
    for(int i = 0 ; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"]";
}

//driver code
int main(){
    int myArray[8] = {0,1,0,0,0,3,12,0};
    moveZeroes(myArray,8);
    print(myArray,8);
}