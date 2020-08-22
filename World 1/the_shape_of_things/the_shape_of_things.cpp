#include <iostream>

using namespace std;

void leftSpace(int row) {
  for (int leftSpace = 0; leftSpace < row - 1; leftSpace++) {
    // We start at 0 space
    if (row != 1) {
      cout << ' ';
    }
  }
}

void leftShape(int row) {
  for (int leftShape = 0; leftShape < row; leftShape++) {
      cout << '#';
  }
}

void spaceMiddle(int row) {
  for (int spaceMiddle = 0; spaceMiddle <= 20 - (row*4); spaceMiddle++) { 
    // Skip row 0
    if (row != 0) {
      cout << ' ';
    }
  }
}

void rightShape(int row) {
  for (int rightShape = 0; rightShape < row; rightShape++) {
    cout << '#';
  }
}

int main()
{
  // First half
  for (int row = 1; row <= 4; row++) {
    // Our left space (0 to 3)
    leftSpace(row);
    // Left shape (1 to 4)
    leftShape(row);
    // Middle space (17 to 5 with a gap of 4)
    spaceMiddle(row);
    // Right shape (1 to 4)
    rightShape(row);
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
    leftSpace(row);
    // Left shape (4 to 1)
    leftShape(row);
    // Middle space (5 to 17 with a gap of 4)
    spaceMiddle(row);
    // Right shape (4 to 1)
    rightShape(row);
    cout << endl;
  }
  return 0;
}