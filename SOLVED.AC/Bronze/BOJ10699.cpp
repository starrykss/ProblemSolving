#include <iostream>
#include <ctime>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    time_t timer = time(NULL);
    struct tm* t = localtime(&timer);

    // tm_year 사용 시 1900년을 더해주도록 한다.
    // tm_mon 사용 시, 1월부터 12월까지 출력하려면 1을 더해주도록 한다.
    cout << t->tm_year + 1900 << "-" << t->tm_mon + 1 << "-" << t->tm_mday;
    
    return 0;
}