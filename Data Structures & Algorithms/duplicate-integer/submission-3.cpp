class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int>s;
        int f=0;
        for(auto &val:nums){
            if(s.find(val)!=s.end()){
                f=1;
            }
            else {
                s.insert(val);
            }
        }

        return (f==0? false:true);

    }
};