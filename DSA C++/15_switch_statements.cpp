#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"ENTER THE VALUE OF a\n";
    cin>>a;
    cout<<"ENTER THE VALUE OF b\n";
    cin>>b;
    char op;
    cout<<"WHICH OPERATION YOU WANT TO PERFORM\n";
    cin>>op;
    switch (op){
        case '+' : cout<<a+b<<endl;
        break;
        case '-' : cout<<a-b<<endl;
        break;
        case '*' : cout<<a*b<<endl;
        break;
        case '/' : cout<<a/b<<endl;
        break;
        case '%' : cout<<a%b<<endl;
        break;
    }
}