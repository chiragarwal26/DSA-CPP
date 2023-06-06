#include<iostream>
using namespace std;

// set bits means 1
// for example
// 2--> 10 and 3--> 11 
// total number of set numbers = 3 (because 1+1+1 = 3)

int countSetBits(int n){
    int count = 0;
    while(n){
        count += n & 1;
        n = n>>1;
    }
    return count;
}
int main(){
    int num1;
    int num2;
    cout<<"ENTER THE FIRST NUMBER\n";
    cin>>num1;
    cout<<"ENTER THE SECOND NUMBER\n";
    cin>>num2;
    int final_result = countSetBits(num1) + countSetBits(num2);
    cout<<"your sum of set numbers is : "<<final_result<<"\n";
}