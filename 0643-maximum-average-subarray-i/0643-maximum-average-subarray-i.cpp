class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int i = 0;
        int j = k-1;
        int n = nums.size();
        long long sum = 0; 
        for(int x = 0;x<k;x++){
            sum += nums[x];
        }
        double ans = (double)sum/k;
        while(j<n){
            ans = max(ans,(double)sum/k);
            sum -= nums[i++];
            if(j+1<n){
                j++;
                sum += nums[j];
            }
            else
                break;
        }
        return ans;
    }
};