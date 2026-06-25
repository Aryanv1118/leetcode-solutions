class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int> lefts(n);
        vector<int> rights(n);
        vector<int> ans(n);
        lefts[0] = 0;
        int sum = 0;
        
        for(int i = 0;i<n;i++){
            sum += nums[i];
        }
        for(int i = 1;i<n;i++){
            lefts[i] = lefts[i-1]+nums[i-1];
        }
        for(int i = 0;i<n;i++){
            rights[i] = sum - nums[i];
            sum -= nums[i]; 
        }
        for(int i = 0;i<n;i++){
            ans[i] = abs(lefts[i]-rights[i]);
        }
        return ans;
    }
};