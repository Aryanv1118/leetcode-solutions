class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        
        vector<int> ans(nums.size());
        int j = 0;
        int k = 1;
        for(int x:nums){
            if(x>=0){
                ans[j] = x;
                j = j+2;
            }
            else{
                ans[k] = x;
                k = k+2;
            }
        }
        return ans;
    }
};