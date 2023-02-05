#include <iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int>& prices) {
  int maxP = 0, l = 0, r = 0;
  while (r < prices.size()) {
    if (prices[r] > prices[l])
      maxP = max(maxP, prices[r] - prices[l]);
    else
      l = r;
    ++r;
  }
  return maxP;
}

int main() { 
  maxProfit(vector<int>[ 7, 1, 5, 3, 6, 4 ]); 
}
