#include <iostream>
using namespace std;

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int hour, minute;

    cin >> hour >> minute;

    minute = (hour * 60) + minute - 45;

    if (hour == 0) {
        minute = (24 * 60) + minute;
    }

    hour = minute / 60;
    hour %= 24;
    minute %= 60;

    cout << hour << " " << minute << endl;

    return 0;
}