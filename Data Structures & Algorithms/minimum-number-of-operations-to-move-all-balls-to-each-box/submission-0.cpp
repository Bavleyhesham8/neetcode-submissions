class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> ans;
        int total_count = 0;
        int total_sum = 0;
        int n = boxes.size();

        for (int i = 0; i < n; i++) {
            if (boxes[i] == '1') {
                total_count++;
                total_sum += i;
            }
        }

        int left_count = 0;
        int left_sum = 0;

        for (int i = 0; i < n; i++) {
            int right_count = total_count - left_count;
            int right_sum = total_sum - left_sum;

            int left_ops = (i * left_count) - left_sum;
            int right_ops = right_sum - (i * right_count);

            ans.push_back(left_ops + right_ops);

            if (boxes[i] == '1') {
                left_count++;
                left_sum += i;
            }
        }

        return ans;
    }
};