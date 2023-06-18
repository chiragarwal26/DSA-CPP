#include<iostream>
using namespace std;
#include<vector>
int compress(vector<char> chars){
    int i = 0;
    int ansIndex = 0;
    int n = chars.size();
    // traversing the whole char array
    while(i<n){
        // i and j are pointers
        int j = i+1;
        while(j<n && chars[i] == chars[j]){
            j++;
        }
        // this line below will store the character
        chars[ansIndex++] = chars[i];

        int count = j-i;
        if(count>1){
            // converting the count into a strring 
            // becoz we need to store it
            string cnt = to_string(count);
            for(char ch:cnt){
                // this line below will store the 
                // count of character only if it is  > 1
                chars[ansIndex++] = ch;
            }
        }
        i = j;
    }
    // size of the o/p array
    return ansIndex;
}