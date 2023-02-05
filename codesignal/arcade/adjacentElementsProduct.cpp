#include <iostream>
#include <vector>

using namespace std;

int solution(vector<int> inputArray) {
  int i = 0;
  int temp = 0;
  int initialTemp = 0;

  while (i < inputArray.size()) {  // iterates through array
    if (i == 0) {                  // beginning conditions
      temp = inputArray[i] *
             inputArray[i + 1];  // set temp equal to the product of the first
                                 // index and the second index
      initialTemp = temp;        // set initialTemp as that product
      i++;                       // increment
    }

    if (temp > initialTemp) {  // checks if the new value of temp is greater
                               // than the initial value
      initialTemp = temp;  // if it is greater than replace the initial value
                           // with the new value
    }

    else {  // if temp is not greater than the initial value
      temp =
          inputArray[i] * inputArray[i + 1];  // new value of temp is now the
                                              // product of the next two indexes
      i++;                                    // increment
    }
  }

  return initialTemp;  // return the solution
}
