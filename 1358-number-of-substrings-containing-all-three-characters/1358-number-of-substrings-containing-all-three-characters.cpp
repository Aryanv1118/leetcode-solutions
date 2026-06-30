class Solution {
public:
    int numberOfSubstrings(string s) {
        int left  = 0;
        int right = 0;
        vector<int> freq(3,0);
        int ans = 0;
        while(right<s.length()){
            char c = s[right];
            freq[c-'a']++;
            while(freq[0]>0 && freq[1]>0 && freq[2]>0){
                ans += s.length() - right;
                char lc = s[left];
                freq[lc-'a']--;
                left++;
            }
            right++;
        }
        return ans;
    }
};