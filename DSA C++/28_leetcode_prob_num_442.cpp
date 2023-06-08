#include<bits/stdc++.h>
using namespace std;

//see notes if u want explanation
int main(){
    vector<int> findDuplicates(vector<int>& nums){
        vector<int> ans;

        for (const int num: nums){
            // we are just travesing the array and if we traverse 
            // a particular value, we are making the corresponding 
            // index as -ve
            // see the notes for detailed explanation
            nums[abs(num)-1] *=-1;
            if (nums[abs(num)]-1  >  0){
                ans.push_back(abs(num));
            }
        }

        return ans;
    }
}