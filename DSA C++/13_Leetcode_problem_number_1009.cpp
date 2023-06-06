//finding the compliment of a number
// example compliment of 5 --> 101 is 2 --> 010
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int m = n;
    int mask  = 0;
    if (n==0){
        cout<<"complimennt of "<<n<<" is "<< 1;
    }
    while(m!=0){
        m = m>>1;
        mask = (mask<<1) | 1;
    }
    int ans = mask & (~n);
    cout<<"The compliment of " <<n<<" is "<< ans;
}