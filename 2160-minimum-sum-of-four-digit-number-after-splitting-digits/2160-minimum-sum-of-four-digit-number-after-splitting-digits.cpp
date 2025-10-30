class Solution {
public:
    int minimumSum(int num) {
        vector<int> res;
        while (num > 0) {
            int digit = num % 10;
            res.push_back(digit); // 2 3 9 2
            num = num / 10;
        }
        reverse(res.begin(), res.end()); // 2 9 3 2
        sort(res.begin(), res.end());    // 2 2 3 9
        vector<int> r, s;
        for (int i = 0; i < res.size(); i++) {
            if (i % 2 == 0)
                r.push_back(res[i]);
            else
                s.push_back(res[i]);
        }
        // r=23 s=29
        int num1 = 0;
        for (int d : r) {
            num1 = num1 * 10 + d;
        }
        int num2 = 0;
        for (int t : s) {
            num2 = num2 * 10 + t;
        }
        return num1 + num2;
    }
};