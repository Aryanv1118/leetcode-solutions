class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int res = nums[0];
        int maxE = nums[0];
        for(int i = 1;i<nums.size();i++){
            maxE = max(nums[i],maxE+nums[i]);
            res = max(res,maxE);
        }
        return res;
    }
};