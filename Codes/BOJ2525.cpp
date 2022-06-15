#include <iostream>
using namespace std;

int main() {
    int hour, min, cTime;
    int sum = 0, newHour, newMin;

    cin >> hour >> min;
    cin >> cTime;

    // Change all elements about time to minutes.
    sum = (hour * 60) + min + cTime;

    newHour = (sum / 60) % 24;
    newMin = sum % 60;

    cout << newHour << " " << newMin << endl;

    return 0;
}