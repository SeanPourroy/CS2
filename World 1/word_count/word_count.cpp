#include <iostream>
using namespace std;

int main() {
  int curCharCount = 0, maxCharCount = 0, wordCount = 0, curVowCount = 0, maxVowCount = 0, globalCharCount = 0;
  char input = 0;
  bool isEmpty = false, isSpace = false;

  cout << "Enter words: ";

  // Loop as long as we are not at the end of the line
  while (input != '\n') {
    
    // Get the input char by char
    cin.get(input);

    // If we encounter a space
    if (input == ' ' || input == '\n') {

      // Prevent multiple spaces to be counted as a word
      if (!isSpace) {
        wordCount++;
      }

      // Count the max number of char
      if (curCharCount > maxCharCount) {
        maxCharCount = curCharCount;
      }

      // Count the max number of vowels
      if (curVowCount > maxVowCount) {
        maxVowCount = curVowCount;
      }

      // Reset the counters
      curCharCount = 0;
      curVowCount = 0;
      isSpace = true;
    } else  { // We know it's a char
      curCharCount++;

      // Increment when we have a vowel. We use tolower() because we want "A" or "a" to be counted
      if (tolower(input) == 'a' || tolower(input) == 'e' || tolower(input) == 'i' || tolower(input) == 'o'|| tolower(input) == 'u') {
        curVowCount++;
      }

      isSpace = false;
    }

    // Flip isEmpty if user entered nothing at the start
    if (globalCharCount == 0 && input == '\n') {
      isEmpty = true;
    }

    // Global increment, count all char
    globalCharCount++;

  }

  // Print out info to the console
  // If user entered nothing we don't want to print this
  if (!isEmpty) {
    cout << "You entered " << wordCount << " word(s)." << endl;
    cout << "The longest word has " << maxCharCount << " characters." << endl;
    if (maxVowCount == 0) {
      cout << "No vowels found in this input." << endl;
    } else {
      cout << "The biggest number of vowels in a word is " << maxVowCount << ".";
    }
  } else {
    cout << "This cannot be empty. Please restart the program and enter words." << endl;
  }

  return 0;
}