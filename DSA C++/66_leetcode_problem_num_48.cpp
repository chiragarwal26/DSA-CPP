#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> rotateBy90Degree(vector<vector<int>> matrix){
    // transpose of a matrix
    for(int i =0; i<matrix.size(); i++){
        for(int j =0; j<i; j++){
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    //reversing each rows 
    // to get the required matrix
    for(int i = 0; i<matrix.size(); i++){
        reverse(matrix[i].begin(), matrix[i].end());
    }
    return matrix;
}
//print function
void print(vector<vector<int>> arr){
    for(int i = 0; i<arr.size(); i++){
        for(int j = 0; j<arr.size(); j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
//driver code
int main(){
    vector<vector<int>> myMatrix = {{1,2,3},{4,5,6},{7,8,9}};
    cout<<"ORIGINAL MATRIX : \n";
    print(myMatrix);

    cout<<"CLOCKWISE 90 degree ROTATED MATRIX : \n";
    print(rotateBy90Degree(myMatrix));
}