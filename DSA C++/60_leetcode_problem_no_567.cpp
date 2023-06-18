#include<iostream>
using namespace std;

bool checkEqual(int a[26], int b[26]){
    for(int i = 0; i<26;i++){
        if(a[i]!=b[i]){
            return 0;
        }
    }
    return 1;
}

bool PermuationChecker(string s1, string s2){
    //creating a count array
    int countArray1[26] = {0};
    for(int i = 0; i<s1.length(); i++){
        // will stores the count
        countArray1[s1[i]-'a']++;
    }
    // traverse s2 in a window of s1 length & Compare
    int i =0, windowSize = s1.length();
    int countArray2[26] = {0};
    //running for the first window
    while(i<windowSize && i<s2.length()){
        int index = s2[i] - 'a' ;
        countArray2[index]++;
        i++;
    }
    if(checkEqual(countArray1,countArray2)){
        return 1;
    }
    //aage window process kro
    while(i<s2.length()){
        char newChar = s2[i];
        int index = newChar - 'a';
        countArray2[index]++;
        char oldChar = s2[i - windowSize];
        index = oldChar - 'a';
        countArray2[index]--;
        i++;
        if(checkEqual(countArray1,countArray2)){
            return 1;
        } 
    }
    return 0;

}
int main(){
    string s1 = "ab";
    string s2 = "eidbaooo";
    cout<<PermuationChecker(s1,s2); 
}