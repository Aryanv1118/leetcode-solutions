class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        if(n == h){
            return *max_element(piles.begin(),piles.end());
        }
        int sum = 0;
        int low = 1;
        int high = *max_element(piles.begin(),piles.end());
        while(low<high){
            int mid = low + (high-low)/2;
            for(int i = 0;i<n;i++){
                sum += (piles[i] + (mid-1))/mid;
            }
            if(h<sum){
                low = mid+1;
            }
            else{
                high = mid;
            }
            sum = 0;
        }
       return low; 
    }
};