class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int,int> m;
       int cmp = 0;
       for(int i = 0;i<nums.size();i++){
         cmp = target - nums[i];
         if(m.count(cmp)){
            return {m[cmp],i};
         }
         m[nums[i]] = i;
       }
       return {};
    }
};