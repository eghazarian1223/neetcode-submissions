class Solution {
public:


   int climbStairs(int n) {
   vector<int> memo(n+1);
   int i = n;
   return helper(i, memo);
   }


   int helper(int i, vector<int>& memo) {
       if (i < 0) {
           return 0;
       }
       if (i == 0) {
        return 1;
       }


       if (memo[i] != 0) {
           return memo[i];
       }


       return memo[i] = helper(i - 1, memo)
                   + helper(i - 2, memo);
   }
};
