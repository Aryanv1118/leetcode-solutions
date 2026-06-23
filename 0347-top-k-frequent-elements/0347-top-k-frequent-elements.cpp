class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int n = nums.size();
        vector<int> ans;
        for(int i = 0;i<n;i++){
            mp[nums[i]]++;
        }
        vector<vector<int>> bucket(n+1);
        for(auto &it:mp){
            bucket[it.second].push_back(it.first);
        }
        int j = 0;
        int nb = bucket.size()-1;
        for(int f = nb; f >= 1; f--) {
            for(int num : bucket[f]) {
                ans.push_back(num);

                if(ans.size() == k)
                    return ans;
    }
}
        return ans; 
    }
};