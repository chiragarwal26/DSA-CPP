#include<iostream>
using namespace std;
#include<vector>

void printLikeWave(vector<vector<int>> arr , int row, int col){
    for(int j = 0; j<col; j++){
        //odd column case
        if(j & 1){
            for(int i = row-1; i>=0; i-- ){
                cout<<arr[i][j]<<" ";
            }
        }
        //even column case
        else{
            for(int i =0; i<row;i++){
                cout<<arr[i][j]<<" ";
            }
        }
    }
}
//driver code
int main(){
    vector<vector<int>> myArray{{1,2,3},{4,5,6},{7,8,9}};
    cout<<"Here is the i/p matrix\n";
    for(int row=0; row<3; row++){
        for(int col =0; col<3; col++){
            cout<<myArray[row][col];
        }
        cout<<endl;
    }
    
    cout<<"The wave print is : \n";
    printLikeWave(myArray,3,3);
}
