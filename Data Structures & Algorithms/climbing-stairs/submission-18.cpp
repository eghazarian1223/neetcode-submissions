class Solution {
public:
// 1 or 2 steps at a time
// return num dist ways to climb to top
// n = 2
// 1+1=2
// 2=2
// two ways 


   int climbStairs(int n) {
    vector<int> memo(n+1);
    int i = n;
    return num_ways(memo, i , n);

   }

   int num_ways(vector<int>&memo, int i, int n) {
    if (i < 0) {
        return 0;
    }

    if (i == 0 || i == 1) {
        return 1;
    }

    if (memo[i] != 0) {
        return memo[i];
    }

    return memo[i] = num_ways(memo, i-1, n) + num_ways(memo, i-2, n);

   }


};
