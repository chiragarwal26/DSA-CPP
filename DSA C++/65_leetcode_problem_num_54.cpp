#include<iostream>
using namespace std;
#include<vector>
vector<int> spiralPrint(vector<vector<int>> matrix){
    vector<int> answer;
    int row = matrix.size();
    int col = matrix[0].size();
    //initializing the pointers
    int count = 0;
    int totalElements = row*col;
    int startRow = 0, endCol = col-1;
    int startCol = 0, endRow = row-1;
    while(count<totalElements){
        // printing the staring row
        for(int index = startCol; count<totalElements && index<= endCol; index++){
            answer.push_back(matrix[startRow][index]);
            count++;
        }
        startRow++;
        // printing the ending col
        for(int index = startRow; count<totalElements && index<=endRow; index++){
            answer.push_back(matrix[index][endCol]);
            count++;
        }
        endCol--;
        //printing the ending row
        for(int index = endCol; count<totalElements && index>=startCol; index--){
            answer.push_back(matrix[endRow][index]);
            count++;
        }
        endRow--;
        //printing the starting col
        for(int index = endRow; count<totalElements && index>=startRow; index--){
            answer.push_back(matrix[index][startCol]);
            count++;
        }
        startCol++;
    }
    return answer;
}
//print function
void print(vector<int> array){
    for(int i = 0 ; i<array.size(); i++){
        cout<<array[i]<<" ";
    }
}
//driver code
int main(){
    vector<vector<int>> myArray{{1,2,3},{4,5,6},{7,8,9}};
    // printing the INPUT MATRIX
    cout<<"Here is the i/p matrix\n";
    for(int row=0; row<3; row++){
        for(int col =0; col<3; col++){
            cout<<myArray[row][col];
        }
        cout<<endl;
    }
    cout<<"the spiral print of the matrix is : \n";
    vector<int> ans = spiralPrint(myArray);
    print(ans);
}