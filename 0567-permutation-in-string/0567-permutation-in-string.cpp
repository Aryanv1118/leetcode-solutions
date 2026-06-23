class Solution {
public:
    bool checkInclusion(string s1, string s2) {
    unordered_map<char,int> s1mp;
    unordered_map<char,int> winmp;
    int n1 = s1.size();
    int n2 = s2.size();
    if(n1 > n2)
        return false;
    for(char c : s1){
        s1mp[c]++;
    }
    for(int i = 0; i < n1; i++){
        winmp[s2[i]]++;
    }
    int i = 0;
    int j = n1 - 1;
    while(j < n2){
        bool match = true;
        for(auto &it : s1mp){
            if(it.second != winmp[it.first]){
                match = false;
                break;
            }
        }
        if(match)
            return true;
        j++;
        if(j < n2){
            winmp[s2[i]]--;
            i++;
            winmp[s2[j]]++;
        }
    }
    return false;
}
};