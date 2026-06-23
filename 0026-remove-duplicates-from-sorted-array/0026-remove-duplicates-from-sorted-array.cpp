class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> temp;
        int n = nums.size();
        temp.push_back(nums[0]);
        for(int i = 1;i<n;i++){
            if(nums[i-1]!=nums[i]){
                temp.push_back(nums[i]);
            }
        }
        for(int i = 0;i<temp.size();i++){
            nums[i] = temp[i];
        }
        return temp.size();
    }
};