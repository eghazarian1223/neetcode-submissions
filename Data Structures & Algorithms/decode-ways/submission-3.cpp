class Solution {
public:
    int numDecodings(string s) {
        vector<int> memo(s.size(), -1);
        int i = 0;
        return num_ways_decode(s, i, memo);
    }

    int num_ways_decode(const string& s, int i, vector<int>& memo) {
        //one way decode
        if (i == s.size()) {
            return 1;
        }
        // leading 0 situation (because it wasnt a 0 that followed a number)
        if (s[i] == '0') {
            return 0;
        }
        if (memo[i] != -1) {
           return memo[i];
        }
        // one digit
        int ways = num_ways_decode(s, i+1, memo);
        // two digits
        if (i+1 < s.size() && (s[i] == '1' || (s[i] == '2' && s[i+1] <= '6'))) {
            ways += num_ways_decode(s, i+2, memo);
        }

        return memo[i] = ways;

    }

 
};