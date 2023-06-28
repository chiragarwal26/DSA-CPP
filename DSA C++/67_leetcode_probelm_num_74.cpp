#include<iostream>
#include<vector>
using namespace std;

bool BinarySearchOn2Darray(vector<vector<int>> matrix, int target){
    int row = matrix.size();
    int col = matrix[0].size();
    int start = 0;
    int end = (row*col)-1;
    int mid = start +(end-start)/2;
    while(start<=end){
        // the most imp. step except this step everything is just binary search 
        int element = matrix[mid/col][mid%col];
        if(element==target){
            cout<<"index at which the target is present :\n";
            cout<<"("<<mid/col<<","<<mid%col<<")"<<endl;
            return 1;
        }
        if(element<target){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid = start+(end-start)/2;
    }
    return 0;
}
//driver code
int main(){
    vector<vector<int>> myMatrix = {{1,2,3},{4,5,6},{7,8,9}};
    int key;
    cout<<"enter the element u want to search in matrix\n";
    cin>>key;
    if(BinarySearchOn2Darray(myMatrix,key)==1){
        cout<<"the element is present";
    }
    else{
        cout<<"the element is not present";
    }
    cout<<endl;
}