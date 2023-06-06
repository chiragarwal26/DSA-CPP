#include<iostream>
using namespace std;
int main(){
    int a = 3;
    cout << a << endl;
    char b = 'c';
    cout << b << endl;
    bool boo = true;
    cout <<boo<< endl;
    float f = 1.23;
    cout<<f<<endl;
    double d = 1.32;
    cout<<d<<endl;
    int sizea = sizeof(a);
    cout<<"Size of a is: "<<sizea<<endl;
    int sizeb = sizeof(b);
    cout<<"Size of b is: "<<sizeb<<endl;
    int sizeboo = sizeof(boo);
    cout<<"Size of boo is: "<<sizeboo<<endl;
    int sizef = sizeof(f);
    cout<<"Size of f is: "<<sizef<<endl;
    int sized = sizeof(d);
    cout<<"Size of d is: "<<sized<<endl;
}