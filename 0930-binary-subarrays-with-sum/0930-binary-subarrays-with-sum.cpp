class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int n = nums.size();
        int l = 0;
        int r = 0;
        int prefix = 0;
        int pre1 = 0;
        int pre2 = 0;
        while(r<n){
            prefix += nums[r];
            while(prefix > goal){
                prefix -= nums[l];
                l++;
            }
            pre1 += r-l+1;
            r++;
        }
        l = 0;
        r = 0;
        prefix = 0;
        while(r<n){
            if(goal - 1< 0){
                pre2 = 0;
                break;
            }
            prefix += nums[r];
            while(prefix > goal-1){
                prefix -= nums[l];
                l++;
            }
            pre2 += r-l+1;
            r++;
        }
        return pre1-pre2;
    }
};