#include <iostream>
using namespace std;

string grade;
float res;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    getline(cin, grade);

    if (grade[0] == 'A') res = 4.0;
    else if (grade[0] == 'B') res = 3.0;
    else if (grade[0] == 'C') res = 2.0;
    else if (grade[0] == 'D') res = 1.0;
    else res = 0.0;

    if (grade[1] == '+') res += 0.3;
    else if (grade[1] == '-') res -= 0.3;

    cout << fixed;
    cout.precision(1);    // 소수점 첫째 자리까지 출력
    
    cout << res;

    return 0;
}