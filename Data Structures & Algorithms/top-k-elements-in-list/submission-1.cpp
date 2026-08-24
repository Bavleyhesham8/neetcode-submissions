class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        vector<int>ans;
        for(auto &val:nums){
            m[val]++;
        }
        vector<pair<int,int>>v(m.begin(),m.end());
        sort(v.begin(),v.end(),
        [](const auto &a,const auto &b){
            return a.second<b.second;
        }
        );
        int n=m.size();
        while(k--){
            ans.push_back(v[n-1].first);
            n--;
        }
    return ans;

    }
};
