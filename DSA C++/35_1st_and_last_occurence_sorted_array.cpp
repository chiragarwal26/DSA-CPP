#include<iostream>
using namespace std;

int FirstOcc(int arr[], int size, int key){

    int start = 0, end = size-1, mid = start+(end-start)/2;
    int ans = 0;
    while(start<=end){

        if(arr[mid]==key){
            ans = mid;
            end = mid-1;
        }
        else if(arr[mid]>key){
            end  = mid-1;
        }
        else{
            start = mid+1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}

int lastOcc(int arr[], int size, int key){

    int start = 0, end = size-1, mid = start+(end-start)/2;
    int ans = 0;
    while(start<=end){

        if(arr[mid]==key){
            ans = mid;
            start = mid+1;
        }
        else if(arr[mid]>key){
            end  = mid-1;
        }
        else{
            start = mid+1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}

int main(){
    int arr[8] = {0,0,1,1,2,2,2,2};
    cout<<"the Index of First and last occurence of 2 respectively is:\n";
    cout<<FirstOcc(arr,8,2)<<" "<<lastOcc(arr,8,2)<<endl;
}

