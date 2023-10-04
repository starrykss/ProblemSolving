#include <iostream>
#include <ctime>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    time_t timer = time(NULL);
    struct tm* t = localtime(&timer);

    cout << 1900 + t->tm_year << '\n';
    cout << 1 + t->tm_mon << '\n';
    cout << t->tm_mday;

    return 0;
}