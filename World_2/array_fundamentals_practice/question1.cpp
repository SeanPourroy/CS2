#include <iostream>
using namespace std;

bool isSorted(int array[], int numItems)
{
  bool notFinished = false;
  int holdValue = array[0];
  
  for (int i = 0; i < numItems; i++)
  {
    // Check if i is smaller than our stored value
    if (array[i] >= holdValue) {
      // If it is, store it and continue
      holdValue = array[i];
    } else {
      // This means it's not sorted.
      notFinished = true;
      // Stop the loop
      break;
    }
  }

  return !notFinished;
}

int main()
  {
  const int testArrayOneSize = 7;
  int testArrayOne[testArrayOneSize] = {10, 15, 22, 26, 31, 35, 90};

  const int testArrayTwoSize = 7;
  int testArrayTwo[testArrayTwoSize] = {10, 2, 22, 6, 2, 6, 7};
  
  cout << "isSorted returned " << isSorted(testArrayOne, testArrayTwoSize);

  return 0;
}