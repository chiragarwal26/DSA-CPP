#include<iostream>
using namespace std;

void SelectionSort(int arr[], int size){
    for(int i = 0; i < size - 1; i++){
        int minIndex = i;
        for(int j = i+1; j < size; j++){
            if(arr[j]< arr[minIndex])
            minIndex = j;
        }
        swap(arr[minIndex], arr[i]);
    }
}

int main(){
    int arrayMine[5] = {3,5,8,1,-1};
    cout<<"original array\n";
    for(int i=0; i<5;i++){
        cout<<arrayMine[i]<<" ";
    }
    SelectionSort(arrayMine,5);
    cout<<"\nsorted array\n";
    for(int i=0; i<5;i++){
        cout<<arrayMine[i]<<" ";
    }
}