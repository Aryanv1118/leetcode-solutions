class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        int n = operations.size();
        int ans = 0;
        for(int i = 0;i<n;i++){
            string c = operations[i];
            if(c == "C"){
                st.pop();
            }
            else if(c == "D"){
                int tmp = st.top();
                st.push(tmp*2);
            }
            else if(c == "+"){
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                st.push(b);
                st.push(a);
                st.push(a+b);
            }
            else{
                int num = stoi(c);
                st.push(num);
            }
        }
        if(st.empty()){
            return 0;
        }
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }
        return ans;
    }
};