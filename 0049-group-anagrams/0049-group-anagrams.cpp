class Solution {
public:
    string sortString(string s){
        string temp = s;
        sort(temp.begin(),temp.end());
        return temp;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;
        vector<vector<string>> ans;
        int n = strs.size();
        for(int i = 0;i<n;i++){
            mp[sortString(strs[i])].push_back(strs[i]);
        }
        for(auto &it:mp){
            ans.push_back(it.second);
        }
        return ans;
    }
};