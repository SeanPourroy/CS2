#include <iostream>
using namespace std;

int howManyUpperCase(char array[], int numItems) {
  // We want a counter of caps
  int upperCaseCount = 0;
  // We want an array that holds the alphabet in caps
  char alphabet[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

  for (int i = 0; i < numItems; i++)
  {
    for (int j = 0; j < 26; j++) {
      // Check for a match
      if (array[i] == alphabet[j]) {
        upperCaseCount++;
      }
    }
  }

  return upperCaseCount;
}

int main()
  {
  // The array we want to test
  const int arraySize = 5;
  char chArray[arraySize] = {'h', 'E', 'l', 'l', 'O'};

  cout << "I count " << howManyUpperCase(chArray, arraySize) << " char in uppercase." << endl;

  return 0;
}