#include<iostream>
using namespace std;

void rowWiseSum(int array[][3], int row, int col){
    int sum = 0;
    for(int row=0; row<3; row++){
        for(int col =0; col<3; col++){
            sum+=array[row][col];
        }
        cout<<"sum of "<<row<<" row is : \n";
        cout<<sum<<" "<<"\n";
    }
}

int main(){
    int arr[3][3];
    //taking the i/p of 2d array (row-wise)
    cout<<"Pls Provide the inputs\n";
    for(int row=0; row<3; row++){
        for(int col =0; col<3; col++){
            cin>>arr[row][col];
        }
    }
    // printing the output 
    cout<<"Here is the i/p matrix\n";
    for(int row=0; row<3; row++){
        for(int col =0; col<3; col++){
            cout<<arr[row][col];
        }
        cout<<endl;
    }
    cout<<"row-wise sum of the 2d matrix is : \n";
    rowWiseSum(arr,3,3);
}