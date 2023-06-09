#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the length of array\n";
    cin>>n;
    int lower = 0, mid = 0, high = n-1;
    int arr[n] = {};
    //asking for values of array
    for (int i=0; i<n;i++){
        int n;
        cout<<"enter the "<<i<<" value in array";
        cin>>n;
        arr[i] = n;

    }
    cout<<"Unsorted Array\n"<<"[";
    for(int i = 0; i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"]";
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[lower],arr[mid]);
            lower++;
            mid++;
        }
        else if (arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }
    cout<<"\nYour Sorted array is:\n";
    cout<<"[";
    for(int i = 0; i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"]";s

}