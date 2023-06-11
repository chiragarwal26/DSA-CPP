#include<iostream>
#include<algorithm>
using namespace std;

bool isPossible(int arr[], int size, int k, int mid){
    int cowCount = 1;
    int lastPositon = arr[0];
    for(int i = 0; i< size; i++){
        if(arr[i]-lastPositon >= mid){
            cowCount++;
            if(cowCount==k){
                return true;
            }
            lastPositon = arr[i];
        }
    }
    return false;

}


int arrgressiveCows(int arr[], int size, int k){
    sort(arr, arr + size);
    int start = 0;
    int maxi = -1;
    for(int i = 0; i<size;i++){
        maxi = max(maxi,arr[i]);
    }
    int end = maxi;
    int ans = -1;
    int mid = start + (end -start)/2;

    while(start<=end){

        if(isPossible(arr, size , k , mid )){
            ans = mid;
            start = mid+1;
        }
        else{
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}

//driver code
int main(){
    int myArray[5] = {4,2,1,3,6};
    int NumberOfCows = 2;
    int output = arrgressiveCows(myArray,5,NumberOfCows);
    cout<<"The largest minimum distance is: \n"<<output;

}

