class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int s=nums.size();
        set<int>st;
        for(int i=0;i<s;i++)st.insert(nums[i]);
        if(st.size()<s)return true;
        else return false;
    }
};