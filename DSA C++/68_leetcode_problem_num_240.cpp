#include<iostream>
using namespace std;
#include<vector>

bool searchIn2Darray(vector<vector<int>> matrix, int target){
    int row = matrix.size();
    int col = matrix[0].size();
    int rowIndex = 0;
    int colIndex = col-1;
    while(rowIndex < row && colIndex>= 0){
        int element = matrix[rowIndex][colIndex];
        if(element==target){
            return 1;
        }
        if(element>target){
            colIndex--;
        }
        else{
            rowIndex++;
        }
    }
    return 0;
}
//driver code
int main(){
    vector<vector<int>> myMatrix = {{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24}};
    int key;
    cout<<"enter the element u want to search in matrix\n";
    cin>>key;
    if(searchIn2Darray(myMatrix,key)==1){
        cout<<"the element is present";
    }
    else{
        cout<<"the element is not present";
    }
    cout<<endl;
}