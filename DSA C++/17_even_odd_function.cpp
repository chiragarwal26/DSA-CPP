#include<iostream>
using namespace std;

bool isEven(int num1){
    // if num & 1 ==1 then its odd otherwise even
    // You can check the logic
    // EVEN example 5 --> 101 --> 101 & 001 ==1
    // ODD example 6 --> 110 --> 110 & 001 ==0 
    if (num1 & 1){
        return 0;
    }
    else{
        return 1;
    }
}
int main(){
    int example_number;
    cin>>example_number;
    int answer = isEven(example_number);
    if (answer==0){
        cout<<"the number is odd";
    }
    else{
        cout<<"the number is even";
    }
}