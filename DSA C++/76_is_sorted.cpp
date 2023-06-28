#include<iostream>
using namespace std;

bool isSorted(int arr[], int size){

    // base condition
    if(size==0 || size==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        bool ans = isSorted(arr+1, size-1);
        return ans;
    }
}

int main(){
    int array[5] = {1,3,5,7,9};
    int size = 5;
    bool answer = isSorted(array,size);
    if(answer){
        cout<<"array is sorted\n";
    }
    else{
        cout<<"array is not sorted\n";
    }
}