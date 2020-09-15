#include <iostream>
using namespace std;

bool isSorted(int array[], int numItems)
{
  int minValue = array[0];
  
  for (int i = 0; i < numItems; i++) {
    // Check if i is smaller than our stored value
    if (array[i] >= minValue) {
      // If it is, store it and continue
      minValue = array[i];
    }
    
    // Check if the minValue went all the way to the end of the array
    // If yes, we know it's in sorted order
    if (i == numItems - 1 && minValue == array[numItems - 1]) {
      return true;
    }
  }

  // By default it's false
  return false;
}

int main()
  {
  const int testArrayOneSize = 7;
  int testArrayOne[testArrayOneSize] = {10, 15, 22, 26, 31, 35, 38};

  const int testArrayTwoSize = 7;
  int testArrayTwo[testArrayTwoSize] = {10, 2, 22, 6, 2, 6, 7};
  
  cout << "isSorted returned " << isSorted(testArrayOne, testArrayTwoSize);

  return 0;
}