#include<iostream>
using namespace std;

int partition(int arr[], int s, int e){
    int pivot = arr[s];
    // counting all elements lesser/equals to pivot element 
    int count = 0;
    for(int i = s+1;i<=e;i++){
        if(arr[i]<=pivot){
            count++;
        }
    }
    // placing the pivot element at right place
    int pivotIndex = s+count;
    swap(arr[s],arr[pivotIndex]);

    // now dealing with right & left part of pivot
    int i = s, j = e;
    while(i<pivotIndex && j>pivotIndex){
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>=pivot){
            j--;
        }
        if(i<pivotIndex && j>pivotIndex){
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotIndex;
}

void quickSort(int arr[], int s, int e){
    // base case
    if(s>=e){
        return ;
    }
    // creating partition
    int p = partition(arr, s,e);

    // sorting left array
    quickSort(arr,s,p-1);

    // sorting right array
    quickSort(arr,p+1,e);

}

int main(){
    int array[5] = {5,5,2,1,0};
    quickSort(array,0,4);
    // printing the sorted array
    for(int i=0; i<5; i++){
        cout<<array[i]<<" ";
    }
    cout << endl;
}