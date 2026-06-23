class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int> s;
        for(int ele : nums){
            if(s.count(ele)){
                return ele;
            }
            s.insert(ele);
        }
        return -1;
    }
};