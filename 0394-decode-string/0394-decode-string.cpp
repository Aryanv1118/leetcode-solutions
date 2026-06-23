class Solution {
public:
    string decode(const string& s, int& i){
        string res;
        int n = 0;
        while(i<s.length()){
            char c = s[i];
            if(isdigit(c)){
                n = n*10 + (c - '0');
                i++;
            }
            else if(c == '['){
                i++;
                string in = decode(s,i);
                for(int j = 0;j<n;j++){
                    res += in;
                }
                n = 0;
            }
            else if(c == ']'){
                i++;
                return res;
            }
            else{
                res += c;
                i++;
            }
        }
        return res;
    }
    string decodeString(string s) {
        int i = 0;
        return decode(s,i);
    }   
};