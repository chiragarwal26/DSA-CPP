#include<iostream>
using namespace std;

void swapAlt(int arr[],int size){
    for(int i =0  ; i< size;i+=2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }
}
void print(int arr[],int size){
    for(int i = 0; i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    cout<<"Original array\n";
    int myarray[7] = {1,2,3,4,5,6,7};
    print(myarray,7);
    cout<<"After swapping alternative\n";
    swapAlt(myarray,7);
    print(myarray,7);
}