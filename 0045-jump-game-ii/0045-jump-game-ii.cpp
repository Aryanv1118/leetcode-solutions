class Solution {
public:
    int jump(vector<int>& nums) {
        int reach = 0;
        int n = nums.size();
        int ce = 0;
        int jump = 0;
        for(int i = 0;i<n-1;i++){
            reach = max(reach,i+nums[i]);
            if(i == ce){
                jump++;
                ce = reach;
            }
        }
        return jump;
    }
};