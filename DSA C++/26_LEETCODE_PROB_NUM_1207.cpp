#include<bits/stdc++.h>
using namespace std;
// for now we have not studied HASHMAP AND SETS but this problem 
// can be solved "efficiently using that only"
// so we are using it
// Property : SET stores only unique values that's Y we are using a set
// In hashmap, we will store occurence/frequency of each items in array

bool CheckUniqueFrequency(int arr[],int n){

    //freq map will store freq. of each element in array
    unordered_map<int,int> freq;
    for (int i = 0;i<n;i++){

        freq[arr[i]]++;
    }

    unordered_set<int> uniqueFreq;
    // check whether the freq. of two or more elements is same or not
    //if same return false else true
    // auto is a keyword in C++ that enables automatic type deduction.
    for(auto & i : freq){
        if (uniqueFreq.count(i.second)){
            return false;
        }
        else{
            uniqueFreq.insert(i.second);

        }
    }
    // return true if each freq is unique
    return true;
}
// driver code
int main(){
    int arr[5] = {1,1,5,5,5};
    bool res = CheckUniqueFrequency(arr,5);
    if(res == 0){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"Yes"<<endl;
    }
}