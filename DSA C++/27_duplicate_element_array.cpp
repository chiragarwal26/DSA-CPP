#include<bits/stdc++.h>
using namespace std;

// there  is an array with elements from 1 to N with freq. 1
// and then a duplicate element 
// for example array = [1,2,3,.....X.....(N-1),X]
// We need to find that X (duplicate element)

int findDuplicate(vector<int> & arr){
    int ans = 0;
    // XOR ing all array elmenets
    for (int i = 0; i<arr.size();i++){
        ans = ans^arr[i];
    }
    // XOR ing from 1 to (N-1) elements
    for (int i = 1; i<arr.size();i++){
        ans = ans^i;
    }
    return ans;
}

// driver code
int main(){
    vector<int> arrayMine = {1,2,3,4,5,6,7,8,9,4};
    int ans = findDuplicate(arrayMine);
    cout<<"The Duplicate element is "<<ans<<endl;
}