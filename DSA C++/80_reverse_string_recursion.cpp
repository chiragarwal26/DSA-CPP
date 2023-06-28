#include<iostream>
using namespace std;

// passing the string s (as reference vairable)
// &s <--- pass by reference  
// s  <--- pass by value ( will create a copy of the variable)

void Reverse(int i, int j, string &s){
    //base case
    if(i>j){
        return ;
    }
    // processing
    swap(s[i++],s[j--]);
    // recursive condition
    Reverse(i,j,s);
}

int main(){
    string name = "Chirag";
    Reverse(0,5,name);
    cout<<name<<endl;
}
