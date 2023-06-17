#include<iostream>
using namespace std;

bool isValid(char ch){
    if((ch >= 'a' && ch <='z') || (ch >= 'A' && ch <='Z') || (ch >= '0' && ch <='9')){
        return 1;
    }
    return 0;
}

char toLowerCase(char arr){
    if((arr>='a' && arr<='z') || (arr>='0' && arr<='9')){
        return arr;
    }
    else{
        char temp = arr-'A'+'a';
        return temp;
    }

}
bool palindromeChecker(string myString){
    int start =0, end = myString.size() - 1;
    while(start<=end){
        if(myString[start] != myString[end]){
            return 0;
        }
        else{
            start++;
            end--;
        }
    }
    return 1;
}

//Actual function to check palindrome as per question
bool isPalindrome(string s){
    // remove unwanted characters
    string temp = "";
    for(int j = 0; j<s.size(); j++){
        if(isValid(s[j])){
            temp.push_back(s[j]);
        }
    }
    //coneverting whole string to lower case
    for(int k = 0; k<temp.size();k++){
        temp[k] = toLowerCase(temp[k]);
    }
    //checking for palindrome
    return palindromeChecker(temp);
}
//driver code
int main(){
    string s = "A man, a  P lan, A canal: PANAMA";
    cout<<s<<endl;
    if(isPalindrome(s) == 1){
        cout<<"is a palindrome";
    }
    else{
        cout<<"It is NOT a palindrome";
    }
}
