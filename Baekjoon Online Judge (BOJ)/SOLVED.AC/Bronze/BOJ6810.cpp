#include <iostream>
using namespace std;

string ISBN = "9780921418";
char num;
int sum;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // ISBN : 13-digit Number
    // 홀수번 숫자 * 1
    // 짝수번 숫자 * 3

    for (int i = 0; i < 3; i++) {
        cin >> num;
        ISBN += num;
    }

    for (int i = 0; i < 13; i++) {
        if (i % 2 == 0) {    // 홀수번 숫자 * 1
            sum += (ISBN[i] - '0') * 1;
        }
        else {    // 짝수번 숫자 * 3
            sum += (ISBN[i] - '0') * 3;
        }
    }

    cout << "The 1-3-sum is " << sum << '\n';

    return 0;
}