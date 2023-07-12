#include<iostream>
using namespace std;
#include<vector>


void solve(vector<int>nums, vector<int> output, int index,vector<vector<int>> & ans){
        //base case
    if(index>=nums.size()){
        ans.push_back(output);
        return ;
    }
        //exclude part
    solve(nums, output, index+1,ans);

        //include part
    int element = nums[index];
    output.push_back(element);
    solve(nums, output, index+1,ans);
}
// driver code
vector<vector<int>> subsets(vector<int>& nums){
    vector<vector<int>> ans;
    vector<int> output;
    int index = 0;
    solve(nums,output, index, ans);
    return ans;
}
