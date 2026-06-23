class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> st;
        string ans;
        if(k == 0)
            return num;
        if(num.size()<=k)
            return "0";
        for(char d:num){
            while(k && !st.empty() && d<st.top()){
                k--;
                st.pop();
            }
            st.push(d);
        }
        while(k && !st.empty()){
            k--;
            st.pop();
        }
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        int i = 0;
        while(i < ans.size() && ans[i] == '0')
            i++;
        ans = ans.substr(i);
        if(ans.empty())
            return "0";
        return ans;
    }
};