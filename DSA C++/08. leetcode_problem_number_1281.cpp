#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int product = 1;
    int sum = 0;
    while(n!=0){
        int rem = n%10;
        product*=rem;
        sum+=rem;
        n = n/10;
    }
}