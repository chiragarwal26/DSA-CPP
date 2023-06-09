#include<iostream>
using namespace std;

int PeekElementIndex(int arr[], int size){

    int start = 0, end = size-1, mid = start + (end-start)/2;
    while(start < end){

        if(arr[mid]<arr[mid+1]){
            start = mid+1;
        }
        else{
            end = mid;
        }
        mid = start + (end - start)/2;
    }
    return mid;
}

int main(){
    int arrayMine[7] = {3,14,32,23,42,34,22};
    int ans = PeekElementIndex(arrayMine,7);
    cout<<"Index of peak element here is:\n";
    cout<<ans;
}