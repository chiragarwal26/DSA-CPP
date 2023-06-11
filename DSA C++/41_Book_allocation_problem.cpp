#include<iostream>
using namespace std;
#include<vector>

bool isPossible(vector<int> arr, int n , int m, int mid){
    int studentCount = 1;
    int pageSum = 0;

    for(int i = 0; i < n ; i++){
        if(pageSum +arr[i] <= mid){
            pageSum += arr[i];
        }
        else{
            studentCount++;
            if(studentCount >m  || arr[i] > mid){
                return false;
            }
            pageSum = arr[i];
        }
    }
    return true;
}

int allocateBooks(vector<int> arr , int n , int m){
    int start = 0;
    int sum = 0;
    for(int i = 0; i<n; i++){
        sum += arr[i];
    }
    int end = sum;
    int ans = -1;
    int mid = start + (end - start)/2;

    while(start<=end){
        if(isPossible(arr,n,m,mid)){
            ans = mid;
            end = mid-1;
        }
        else{
            start = mid +1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}

//driver code
int main(){
    vector<int> myArray = {10,20,30,40};
    int numOfStudents = 2;
    int numOfBooks = 4;
    int output = allocateBooks(myArray,numOfBooks, numOfStudents);
    cout<<"The minimum number of maximum pages that can be alloted to a student is : \n";
    cout<<output<<endl;
}