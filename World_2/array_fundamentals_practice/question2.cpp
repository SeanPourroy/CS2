#include <iostream>
using namespace std;

int howManyUpperCase(char array[], int numItems) {
  // We want a counter of caps
  int upperCaseCount = 0;

  for (int i = 0; i < numItems; i++)
  {
      // Check for a match using ASCII table range - https://www.learncpp.com/cpp-tutorial/chars/
      if (array[i] >= 65 && array[i] <= 90) {
        upperCaseCount++;
    }
  }

  return upperCaseCount;
}

int main()
  {
  // The array we want to test
  const int arraySize = 5;
  char chArray[arraySize] = {'h', 'E', 'L', 'l', 'O'};

  cout << "I count " << howManyUpperCase(chArray, arraySize) << " char in uppercase." << endl;

  return 0;
}