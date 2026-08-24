

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       
        map< map<char,int>, vector<string> > groups;

        for (const string &s : strs) {
            map<char,int> freq;
            for (char c : s) ++freq[c];
            groups[freq].push_back(s);
        }

        vector<vector<string>> ans;
        ans.reserve(groups.size());
        for (auto &p : groups) ans.push_back(move(p.second));
        return ans;
    }
};