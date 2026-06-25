class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int gn = g.size();
        int sn = s.size();
        int g1 = 0;
        int s1 = 0;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int lalchi = 0;
        while(g1<gn && s1<sn){
            if(g[g1]>s[s1]){
                s1++;
            }
            else{
                g1++;
                s1++;
                lalchi++;
            }
        }
        return lalchi;
    }
};