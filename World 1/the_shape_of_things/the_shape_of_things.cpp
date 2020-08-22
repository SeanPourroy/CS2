#include <iostream>

using namespace std;

int main()
{
  // First half
  for (int row = 1; row <= 4; row++) {
    // Our left space (0 to 3)
    for (int leftSpace = 0; leftSpace < row - 1; leftSpace++)
    {
      // We start at 0 space
      if (row != 1) {
        cout << ' ';
      }
    }
    // Left shape (1 to 4)
    for (int leftShape = 0; leftShape < row; leftShape++) {
      cout << '#';
    }
    // Middle space (17 to 5 with a gap of 4)
    for (int spaceMiddle = 0; spaceMiddle <= 20 - (row*4); spaceMiddle++) { 
      // Skip row 0
      if (row != 0) {
        cout << ' ';
      }
    }
    // Right shape (1 to 4)
    for (int rightShape = 0; rightShape < row; rightShape++) {
      cout << '#';
    }
    cout << endl;
  }
  // End of first half

  // Now to draw our two middle lines
  for (int row = 0; row <= 1; row++) {
    // Our left space (4 space twice)
    for (int leftSpace = -1; leftSpace < 3; leftSpace++) {
      cout << " ";
    }
    // Our left shape (11 #) 
    for (int leftShape = 0; leftShape < 11; leftShape++) {
      cout << '#';
    }
    cout << endl;
  }
  // End of our middle section
  
  // Start of the second half
  for (int row = 4; row > 0; row--) {
    // Our left space (3 to 0)
    for (int leftSpace = 0; leftSpace < row - 1; leftSpace++) {
        cout << ' ';
    }
    // Middle shape (4 to 1)
    for (int leftShape = 0; leftShape < row; leftShape++) {
      cout << '#';
    }
    // Middle space (5 to 17 with a gap of 4)
    for (int spaceMiddle = 0; spaceMiddle <= 20 - (row*4); spaceMiddle++) { 
      // Skip row 0
      if (row != 0) {
        cout << ' ';
      }
    }
    // Right shape (4 to 1)
    for (int rightShape = 0; rightShape < row; rightShape++) {
      cout << '#';
    }
    cout << endl;
  }
  return 0;
}