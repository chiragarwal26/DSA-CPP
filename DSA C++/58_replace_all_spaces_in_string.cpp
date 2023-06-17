#include<iostream>
using namespace std;

// for eg.
// str = "My name is Khan"
// replace all " " with "@40"
// o/p = "My@40name@40is@40Khan"

string replaceAllSpaces(string str){
    string temp = "";
    for(int i = 0; i<str.length(); i++){
        if(str[i] == ' '){
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else{
            temp.push_back(str[i]);
        }
    }
    return temp;
}
//driver code
int main(){
    string mySentence;
    cout<<"enter your sentence\t";
    getline(cin, mySentence);
    cout<<replaceAllSpaces(mySentence);

}