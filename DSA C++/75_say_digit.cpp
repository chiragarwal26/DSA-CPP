#include<iostream>
using namespace std;

void sayDigit(int n,string array[]){
    
    //base condition
    if(n==0){
        return;
    }

    // preprocessing
    int digit = n% 10;
    n = n/10;

    // recursive relation
    sayDigit(n,array);
    
    cout<<array[digit]<<" ";
}


int main(){
    int n;
    cout<<"Enter the number\n";
    cin>>n;
    string array[10] = {"zero","one","two","three",
    "four","five","six","seven","eight","nine"};
    sayDigit(n,array);

}