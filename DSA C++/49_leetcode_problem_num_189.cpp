#include<iostream>
using namespace std;

// approach

// (anything)%n --> range of 1 to n-1.

void rotateArray(int arr[], int size, int numOfRotation){
    int temp[size] = {0};
    for(int i = 0; i<size; i++){
        temp[(i + numOfRotation)% size] = arr[i];
    }
    // storing values of temp. array to arr.
    for(int i = 0 ; i<size ; i++){
        arr[i] = temp[i];
    }
}

void print(int arr[], int size){
    cout<<"[";
    for(int i = 0; i<size ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"]";
}

int main(){
    int array[8] = {9,11,1,7,4,12,44,56};
    rotateArray(array,8,2);
    cout<<"the rotated array is: \n";
    print(array,8);
}