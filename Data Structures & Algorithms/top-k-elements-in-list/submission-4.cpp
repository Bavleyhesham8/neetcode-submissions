class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        vector<int>ans;
        for(auto &val:nums){
            m[val]++;
        }
        vector<pair<int,int>>v(m.begin(),m.end());
        priority_queue<pair<int,int>>q;
        for (auto &val:v){
            q.push({val.second,val.first});
        }
        int n=m.size();
        while(k--){
            ans.push_back(q.top().second);
            q.pop();
        }
    return ans;

    }
};
