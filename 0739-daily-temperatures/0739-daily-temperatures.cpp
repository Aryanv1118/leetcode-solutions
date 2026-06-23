class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
      stack<int> idx;
      int n = temperatures.size();
      vector<int> ans(n);
      for(int i = n-1;i>=0;i--){
        while(!idx.empty() && temperatures[idx.top()] <= temperatures[i]){
            idx.pop();
        }
        if(idx.empty())
            ans[i] = 0;
        else
            ans[i] = idx.top() - i;
        idx.push(i);
      }
      return ans;  
    }
};