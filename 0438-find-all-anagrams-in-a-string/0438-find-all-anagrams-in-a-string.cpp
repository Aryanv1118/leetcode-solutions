class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        unordered_map<char,int>pmp;
        unordered_map<char,int>winmp;
        vector<int> ans;
        int ns = s.size();
        int np = p.size();
        for(int i = 0;i<np;i++){
            pmp[p[i]]++;
        }
        for(int i = 0;i<np;i++){
            winmp[s[i]]++;
        }int l = 0;
        int r = np-1;
        while(r<ns){
            bool count = true;
            for(auto &it:pmp){
                if(it.second != winmp[it.first]){
                    count = false;
                    break;
                }
            }
            if(count)
                ans.push_back(l);
            winmp[s[l]]--;
            l++;
            r++;
            if(r<ns)        
                winmp[s[r]]++;
        }
        return ans;

    }
};