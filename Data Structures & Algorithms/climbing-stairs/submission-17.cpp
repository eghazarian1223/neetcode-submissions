class Solution {
public:
// 1 or 2 steps at a time
// return num dist ways to climb to top
// n = 2
// 1+1=2
// 2=2
// two ways 


   int climbStairs(int n) {
    vector<int> memo(n);
    int i = 0;
    return num_ways(memo, i , n);

   }

   int num_ways(vector<int>&memo, int i, int n) {
    if (i == n) {
        return 1;
    }

    if (i > n) {
        return 0;
    }

    if (memo[i] != 0) {
        return memo[i];
    }

    return memo[i] = num_ways(memo, i+1, n) + num_ways(memo, i+2, n);

   }


};
