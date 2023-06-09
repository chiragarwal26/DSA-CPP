#include<iostream>
using namespace std;

int main(){

    int i = 0, j = 5;
    int myArr[6] = {0,1,1,0,1,0};
    while(i<=j){

        if(myArr[i]==0){
            i++;
        }
        else if (myArr[j]==1)
        {
            j--;
        }
        else{
            swap(myArr[i],myArr[j]);
            i++;
            j--;
        }
        
    }
    cout<<"\nthe sorted array is:\n"<<"[";
    for(int i = 0; i<6 ;i++){
        cout<<myArr[i];
    }
    cout<<"]"<<"\n\n";


}