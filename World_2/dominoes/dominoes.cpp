#include <iostream>
using namespace std;

// Our struct
struct domino {
 int topDomino;
 int bottomDomino;
 bool isNewSet = false;
};

// A function to fill our array with dominoes data
void fillArr(domino dominoSet[], int size)
{
  int topDominoCounter = -1;
  int bottomDominoCounter = 1;
  
  for (int i = 0; i < size; i++)
    {
      // We need the first set to be 0
      dominoSet[0].topDomino = 0;
      dominoSet[0].bottomDomino = 0;
      dominoSet[0].isNewSet = true;

      // We fill the array of struct with our logic
      dominoSet[i].topDomino = topDominoCounter;
      dominoSet[i].bottomDomino = bottomDominoCounter;

      // When top and bottom are the same we want to reset the values
      if (topDominoCounter == bottomDominoCounter) {
        bottomDominoCounter = topDominoCounter + 1;
        topDominoCounter = -1;
        dominoSet[i].isNewSet = true;
      } else {
        dominoSet[i].isNewSet = false;
      }

      topDominoCounter++;
    }
}

// Function to sort our array in descending order for bottomDomino
bool arrCompare(domino a, domino b)
{
  return a.bottomDomino > b.bottomDomino;
}

// We could use loops as we did for "the shape of things"
// But as this was not a constraint of this assignment I went for an easier way (just drawing and repeating chars)
void drawDominoes(int dots)
{
  switch (dots)
  {
  case 0:
    cout << "|   |" << endl;
    cout << "|   |" << endl;
    cout << "|   |" << endl;
    break;
  case 1:
    cout << "|   |" << endl;
    cout << "| * |" << endl;
    cout << "|   |" << endl;
    break;
  case 2:
    cout << "|*  |" << endl;
    cout << "|   |" << endl;
    cout << "|  *|" << endl;
    break;
  case 3:
    cout << "|*  |" << endl;
    cout << "| * |" << endl;
    cout << "|  *|" << endl;
    break;
  case 4:
    cout << "|* *|" << endl;
    cout << "|   |" << endl;
    cout << "|* *|" << endl;
    break;
  case 5:
    cout << "|* *|" << endl;
    cout << "| * |" << endl;
    cout << "|* *|" << endl;
    break;
  case 6:
    cout << "|* *|" << endl;
    cout << "|* *|" << endl;
    cout << "|* *|" << endl;
    break;
  }
}

int main()
{
  const int array_size = 28;
  domino dominoSet[array_size];

  fillArr(dominoSet, array_size);

  // Sort our array of struct
  sort(dominoSet, dominoSet+array_size, arrCompare);

  for (int i = 0; i < array_size; i++)
  {
    drawDominoes(dominoSet[i].topDomino);
    cout << "|---|" << endl;
    drawDominoes(dominoSet[i].bottomDomino);
    
    if (dominoSet[i].isNewSet) {
      cout << "END OF SET" << endl;
      cout << "NEW SET" << endl;
    } else {
      cout << endl;
    }
  }
  
  return 0;
}