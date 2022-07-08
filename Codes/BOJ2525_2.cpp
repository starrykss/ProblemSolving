#include <iostream>
using namespace std;

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int hour, minute, time;

    cin >> hour >> minute >> time;

    minute = (hour * 60) + minute + time;
    hour = (minute / 60) >= 24 ? (minute / 60) % 24 : (minute / 60);    // or hour = (minute / 60) % 24;
    minute = minute % 60;

    cout << hour << " " << minute << endl;

    return 0;
}