class Solution {
public:
    int findMin(vector<int>& nums) {
        int l = 0;
        int r = nums.size()-1;
        int last = nums[r];
        while(l<r && nums[l] == last){
            l++;
        }
        while(l<r){
            int mid = l + (r-l)/2;
            if(nums[mid]<=last){
                r = mid;
            }
            else{
                l = mid+1;
            }
        }
        return nums[l];
    }
};