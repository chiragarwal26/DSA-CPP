#include<iostream>
using namespace std;

char getMaxOccurence(string s){
    int countArray[26] = {0};
    // This for loop will create a array of occurence of each element
    for(int i =0; i<s.length(); i++){
        int number = 0;
        //lowercase
        if(s[i]>='a' && s[i] <='z'){
            number = s[i] -'a';
        }
        //uppercase
        else{
            number = s[i] - 'A';
        }
        countArray[number]++;
    }
    // This loop will find which occurence is max in countArray
    int maximum = -1, ans = 0;
    for(int i = 0; i<26;i++){
        if(maximum<countArray[i]){
            ans = i;
            maximum = countArray[i];
        }
    }
    // converting the digit to character again !!
    if(ans ==  0){
        cout<<"NO element is occuring more than once\n";

    }
    else{
        char FinalResult = ans + 'a';
        return FinalResult;
    }
}
//driver code
int main(){
    string myName;
    cout<<"Enter Your Name : ";
    cin>>myName;
    cout<<"The letter which occured most in your name is :\n";
    cout<<getMaxOccurence(myName);
}