//The solution to this question is the sum of the fibonacci sequence between these two functions (n-1) and (n-2)

class Solution {
public:
    int climbStairs(int n) {
        if (n == 0 || n == 1 || n == 2) { // if number of steps equal any of these numbers then return the same number because that is the only amount of ways you can climb the stairs
            return n;
        }

        else {
            int previous = 1; // this represents 
            int current = 2; // this 
            for (int i = 2; i < n; i++) { //iterates through the for loop depending on n
                int temp = current; // makes variable temp equal to current
                current += previous; // continuously add on 
                previous = temp; //
            }

            return current; //
        }
    }
};