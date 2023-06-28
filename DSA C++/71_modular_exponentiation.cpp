#include<iostream>
using namespace std;
// find (X^N) % M
int modularExponentiation(int x, int n , int m){
    int result = 1;
    while(n>0){
        // if n is odd
        if(n&1){
            //  1LL is ntg but "typecasting int as long long"
            
            result = (1LL * (result) * (x) %m)%m;
        }
        x = (1LL * (x)%m * (x)%m) %m;
        //right shift by 1 == divide by 2(in optimal way)
        n>>1;
    }
    return result;
}

int main(){
    int x,n,m;
    cout<<"enter the values of x, n, m respectively : \n";
    cin>>x>>n>>m;
    cout<<"ANSWER :\n";
    cout<<modularExponentiation(x,n,m);
}