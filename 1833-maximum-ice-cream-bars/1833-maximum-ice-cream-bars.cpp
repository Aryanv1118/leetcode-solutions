class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int max = *max_element(costs.begin(),costs.end());
        vector<int> a(max+1);
        for(auto x:costs){
            a[x]++;
        }
        int ans = 0;
        for(int i = 1;i<max+1;i++){
            int b = min(a[i],coins/i);
            ans += b;
            coins -= b*i;
            if(coins == 0)
                break;
        }
        return ans;
    }
};