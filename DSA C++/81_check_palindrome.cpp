#include<iostream>
using namespace std;

bool checkPalindrome(int i, int j, string &s){
    //base case
    if(i>j){
        return true;
    }
    // processing
    if(s[i]!= s[j]){
        return false;
    }

    else{
        return checkPalindrome(i+1,j-1,s);
    }
}

int main(){
    string name = "chirag";
    if(checkPalindrome(0,4,name)){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}
