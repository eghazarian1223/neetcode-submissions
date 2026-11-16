class Solution {
public:

    int climbStairs(int n) {
        // Number of ways to reach step 1 and step 2
        int oneStepBefore = 1;
        int twoStepsBefore = 1;

        for (int step = 2; step <= n; step++) {
            int current = oneStepBefore + twoStepsBefore;

            twoStepsBefore = oneStepBefore;
            oneStepBefore = current;
        }

        return oneStepBefore;

    }


};