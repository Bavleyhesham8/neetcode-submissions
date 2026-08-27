#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    string encode(vector<string>& strs) {
        string ans;
        const string delim = "sp/";
        for (const auto &val : strs) {
            ans += val;
            ans += delim;
        }
        return ans;
    }

    vector<string> decode(string s) {
        vector<string> res;
        if (s.empty()) return res;
        const string delim = "sp/";
        size_t pos = 0;
        while (pos < s.size()) {
            size_t next = s.find(delim, pos);
            if (next == string::npos) {
                res.push_back(s.substr(pos));
                break;
            } else {
                res.push_back(s.substr(pos, next - pos));
                pos = next + delim.size();
            }
        }
        return res;
    }
};
