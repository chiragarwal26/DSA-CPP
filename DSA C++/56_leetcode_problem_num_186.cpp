#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void reverseWords(vector<char> s){
    for(int i =0; i<s.size();i++){
        int j = i+1;
        while(j<s.size() && s[j] != ' '){
            j++;
        }
        int a = i, b = j-1;
        while(a<b){
            swap(s[a++],s[b--]);
            i=j;
        }
    }
    reverse(s.begin(), s.end());
}