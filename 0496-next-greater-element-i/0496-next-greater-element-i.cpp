class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mp;
        stack<int> nge;
        int m = nums1.size();
        int n = nums2.size();
        vector<int> ans;
        for(int i = n-1;i>=0;i--){
            while(!nge.empty() && nums2[i]>nge.top()){
                nge.pop();
            }
            if(nge.empty())
                mp[nums2[i]] = -1;
            else
                mp[nums2[i]] = nge.top();
            nge.push(nums2[i]);
        }
        for(auto x:nums1){
            ans.push_back(mp[x]);
        }
        return ans;
    }
};