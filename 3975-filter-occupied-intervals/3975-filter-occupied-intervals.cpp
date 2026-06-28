class Solution {
public:
    vector<vector<int>> filterOccupiedIntervals(vector<vector<int>>& occupiedIntervals, int freeStart, int freeEnd) {
        sort(occupiedIntervals.begin(),occupiedIntervals.end());
        vector<vector<int>> merge;
        for(auto &x:occupiedIntervals){
            if(merge.empty() || x[0]>merge.back()[1]+1){
                merge.push_back(x);
            }
            else{
                merge.back()[1] = max(merge.back()[1],x[1]);
            }
        }
        vector<vector<int>>ans;
        for(auto p:merge){
            int l = p[0];
            int r = p[1];
            if(r<freeStart || l>freeEnd){
                ans.push_back({l,r});
            }
            else if(freeStart <= l && freeEnd >=r){
                continue;
            }
            else if(freeStart <= l){
                if(freeEnd+1<=r)
                    ans.push_back({freeEnd+1,r});
            }
            else if(freeEnd >= r){
                if(l<=freeStart-1)
                    ans.push_back({l,freeStart-1});
            }
            else{
                ans.push_back({l,freeStart-1});
                ans.push_back({freeEnd+1,r});
            }
        }
        return ans;
    }
};