#include <iostream>
using namespace std;

int solution(int n) {
  return n * n +
         (n - 1) *
             (n -
              1);  // Looking at the graphs diagonally each side is n-sided and
                   // that is why you multiply n by n, however that does not
                   // account for all the squares inside the shape and that is
                   // why you multiply the inside sides which is (n-1) by (n-1)
}