class Solution {
public:
    int climbStairs(int n) {
        int memo[n];
        memset(memo, -1, sizeof(memo));
        int result = stairs_DP(memo, n);
        return result;
    }
private:

    int stairs_DP(int memo[], int n)
    {
        if (n == 1) {return 1;}
        if (n == 2) {return 2;}
        if (memo[n] != -1) {return memo[n];}
        return memo[n] = stairs_DP(memo, n-1) + stairs_DP(memo, n-2);
    }
};