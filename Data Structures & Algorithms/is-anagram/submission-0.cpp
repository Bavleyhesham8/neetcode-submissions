class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;
        map<char, pair<int,int>> mp;
        for (size_t i = 0; i < s.length(); ++i) {
            mp[s[i]].first++;
            mp[t[i]].second++;
        }
        for (auto &entry : mp) {
            if (entry.second.first != entry.second.second) return false;
        }
        return true;
    }
};