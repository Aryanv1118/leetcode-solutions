class Solution {
public:
    int countValidSubarrays(vector<int>& nums, int x) {
        int ans = 0;
        int n = nums.size();
        for(int i = 0;i<n;i++){
            long long sum = 0;
            for(int j = i;j<n;j++){
                sum += nums[j];
                if(sum%10 != x){
                    continue;
                }
                long long a = sum;
                while(a>=10)
                    a = a/10;
                if(a == x)
                    ans++;
            }
        }
        return ans;
    }
};