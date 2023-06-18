#include<iostream>
using namespace std;

string removeSubstring(string s, string part){
    
    // s.length !=0 becoz we want our while loop to terminate
    // if length of s becomes 0
    // s.find(part) < s.length becoz we want our while loop
    // to terminate if sub-string is not present anymore 

    while(s.length() !=0 && s.find(part) < s.length()){
        // erasing that "part" sub-string
        
        s.erase(s.find(part), part.length());
    }
    return s;

}

int main(){
    string myString = "daabcbaabcbc";
    string part = "abc";
    cout<<"the i/p string is :\n";
    cout<<myString<<endl;
    cout<<"the part string is :\n";
    cout<<part<<endl;
    cout<<"The Resultant String is : \n";
    cout<<removeSubstring(myString, part);

}