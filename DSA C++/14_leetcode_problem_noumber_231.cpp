// Power of 2 
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool final_result = true;
    for (int i = 0; i<=30; i++){
        int ans = pow(2,i);
        if (n==ans){
            final_result = false;
        }
    }
    if(final_result==false){
        cout<<"THE NUMBER IS A POWER OF 2";
    }
    else{
        cout<<"THE NUMBER IS NOT POWER OF 2";
    }
}