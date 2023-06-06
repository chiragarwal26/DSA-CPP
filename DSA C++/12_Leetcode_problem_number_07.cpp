#include<iostream>
using namespace std;
#include <limits.h>
// (read the question from leetcode)
int main(){
    int n;
    cin>>n;
    int ans = 0;
    while(n!=0){
        int digit = n%10;
        // INT_MAX & INT_MIN are two constant that we can use
        if (ans>INT_MAX ||ans<INT_MIN){
            cout<< 0;
        }
        ans = (ans*10)+digit;
        n = n/10;
    }
    cout<<ans;
}