#include<iostream>
using namespace std;

int power(int a , int b){
    //base case
    if(b==0){
        return 1;
    }
    if(b==1){
        return a;
    }
    //recursive conditons//

    // b is even
    if(b%2==0){
        return power(a,b/2)*power(a,b/2);
    }
    // b is odd
    else{
        return a*power(a,b/2)*power(a,b/2);
    }
}

int main(){
    int a,b;
    cout<<"enter the value of a & b\n";
    cin>>a>>b;
    int answer = power(a,b);
    cout<<"answer is : "<<answer<<endl;
}