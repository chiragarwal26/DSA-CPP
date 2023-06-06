#include<iostream>
using namespace std;

// void is type of a function which doesn't 
// give anything in return
// cout is not considered as returning something
void isCounting(int n ){
    for (int i = 1; i<=n; i++){
        cout<<i<<endl;
    }
}
int main(){
    int num1;
    cout<<"enter the value of n below\n";
    cin>>num1;
    isCounting(num1);
    return 0;
}