#include<iostream>
using namespace std;
//making the factorial function
int factorial(int num1){
    int answer_n = 1;
    while(num1!=0){
            answer_n = answer_n*num1;
            num1 = num1 - 1;
        }
    return answer_n;
}
//making the nCr fucntion
int nCr(int n , int r){
    cout<<"enter the value of n"<<endl;
    cin>>n;
    cout<<"enter the value of r"<<endl;
    cin>>r;
    if (n>=r){
        int numerator = factorial(n);
        int denominator = factorial(r)*factorial(n-r);
        int final_output = numerator/denominator;
        return numerator/denominator;
    }
    else{
        cout<<"n should be greater than r"<<endl;
    }
    }
//calling the function
int main(){
    int a,b;
    cout<<nCr(a,b)<<endl;
}
