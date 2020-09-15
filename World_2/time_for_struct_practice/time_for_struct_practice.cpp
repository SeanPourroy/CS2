#include <iostream>
using namespace std;

// Our structure
struct timeStruct {
 string period;
 int hour;
 int minutes;
 int seconds;
};

// Blackbox function to check if the time is "legal" (exists)
bool isItLegal(timeStruct clock) {
  if (clock.hour <= 12 && clock.minutes <= 60 && clock.seconds <= 60) {
    return true;
  }
  return false;
}

// Take a time in AM/PM and convert it to a 24 hour clock
void convertTo24Hour(timeStruct& clock) {
  if (clock.period == "PM" && isItLegal(clock)) {
    clock.hour = clock.hour + 12;
  }
}

int main()
{
  timeStruct time = {"PM", 11, 10, 50};
  cout << "Is the time entered exists? " << isItLegal(time) << endl;
  convertTo24Hour(time);
  cout << time.hour << ":" << time.minutes << ":" << time.seconds << " " << time.period << endl;
  return 0;
}