#include <iostream>
using namespace std;

// Our struct
struct course {
 string department;
 int num;
 string title;
};

// Let's fill our array of struct
const int ARRAY_SIZE = 12;
course courseArray[ARRAY_SIZE] = {
  {"ANTH", 5004, "Ecological Anthropology"},
  {"CHEM", 5001, "Analytical Mass Spectrometry"},
  {"COMP", 5002, "Swarm Intelligence"},
  {"FREN", 5212, "Littératures francophones"},
  {"PHIL", 5300, "Topics in Value Theory"},
  {"FILM", 5601, "Studies in Genre"},
  {"COMP", 5110, "Computer Security and Usability"},
  {"COMP", 5207, "Software Engineering"},
  {"FREN", 5214, "Genre et mouvement"},
  {"FREN", 5350, "Proposition de recherche"},
  {"PHIL", 5650, "Semantics"},
  {"FILM", 5908, "Research Essay"}
};

int numCoursesInDepartment(course courseArray[], string department)
{
  int numCourses = 0;

  for (int i=0; i < ARRAY_SIZE; i++)
  {
    // Everytime we have a match, increment our var
    if (courseArray[i].department.compare(department) == 0) {
      numCourses++;
    }
  }

  return numCourses;
}

void printCourses(int numCourses, string dept) {
  cout << "I found " << numCourses << " courses" << " for the given department " << dept << endl;
}

int main()
{
  // Enter the department here
  string dept = "FILM";
  
  // We get the number of department from our function
  int num = numCoursesInDepartment(courseArray, dept);

  // Output
  printCourses(num, dept);
  return 0;
}