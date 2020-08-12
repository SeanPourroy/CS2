#include <iostream>

using namespace std;

int howManyScrabblePoint(string word)
{
  int count = 0;
  for (int i = 0; i < word.size(); i++)
  {
    // The switch case from hell. Still cleaner than a bunch of if statement?
    switch (tolower(word[i]))
    {
    case 'e':
    case 'a':
    case 'i':
    case 'o':
    case 'n':
    case 'r':
    case 't':
    case 'l':
    case 's':
    case 'u':
      count = count + 1;
      break;
    case 'd':
    case 'g':
      count = count + 2;
      break;
    case 'b':
    case 'c':
    case 'm':
    case 'p':
      count = count + 3;
      break;
    case 'f':
    case 'h':
    case 'v':
    case 'w':
    case 'y':
      count = count + 4;
      break;
    case 'k':
      count = count + 5;
      break;
    case 'j':
    case 'x':
      count = count + 8;
      break;
    case 'q':
    case 'z':
      count = count + 10;
      break;
    }
  }
  
  return count;

}

int main()
{
  // Enter your word here
  string word = "welcome";
  int scrabbleCount = howManyScrabblePoint(word);
  cout << "You entered the word: " + word << endl;
  cout << "This would give you " << scrabbleCount;
  cout << " points in Scrabble, without counting bonuses tiles";

  return 0;
}
