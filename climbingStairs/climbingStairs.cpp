//takes too long to run

class Solution {
public:
    int climbStairs(int n) {
    if (n == 0) return 0; // if steps equal to 0 then there are 0 ways to climb the stairs
    if (n == 1) return 1; // if steps equal 1 then there is only 1 possible way to climb the stairs, 1 step
    if (n == 2) return 2; // if steps equal 2 then there is only 2 possible ways to climb the stairs, 1 step + 1 step & 2 step

    return climbStairs (n-1) + climbStairs(n-2); //
    }
};