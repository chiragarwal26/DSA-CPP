#include<iostream>
using namespace std;
int main(){
    int myArray[5];
    cout<<"Garbage Values\n";
    for (int i = 0;i<5;i++){
        
        cout<<myArray[i]<<" ";

    }
    cout<<endl;
    cout<<"assigned Values\n";
    int myArray1[3] = {1,2,3};
    for (int i = 0;i<3;i++){
        
        cout<<myArray1[i]<<" ";

    }
    cout<<endl;
    int myArray2[8] = {1,2,3};
    cout<<"assigned and un-assigned Values\n";
    for (int i = 0;i<8;i++){
        
        cout<<myArray2[i]<<" ";

    }
    cout<<endl;
    

}