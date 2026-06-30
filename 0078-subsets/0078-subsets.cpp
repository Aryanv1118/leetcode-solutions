class Solution {
public:
    vector<vector<int>> ans;
    void recur(int idx,int n,vector<int> temp,vector<int>& nums){
        if(idx == n){
            ans.push_back(temp);
            return;
        }
        temp.push_back(nums[idx]);
        recur(idx+1,n,temp,nums);
        temp.pop_back();
        recur(idx+1,n,temp,nums);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> subset;
        int n = nums.size();
        recur(0,n,subset,nums);
        return ans;
    }
};