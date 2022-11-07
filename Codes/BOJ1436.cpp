#include <iostream>
#include <string>
using namespace std;

int N;

int BruteForce(int n) {
    string s_num;

    for (int i = 666, cnt = 0; cnt <= 10000; i++) {
        s_num = to_string(i);
        for (int j = 0; j < s_num.size(); j++) {
            if (s_num[j] == '6' && s_num[j + 1] == '6' && s_num[j + 2] == '6') {
                cnt++;
                break;    // 반드시 break 문을 넣어준다. (6666의 경우, cnt++ 가 2번 된다.)
            }
        }
        if (cnt == n) {
            return i;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    cout << BruteForce(N) << '\n';

    return 0;
}