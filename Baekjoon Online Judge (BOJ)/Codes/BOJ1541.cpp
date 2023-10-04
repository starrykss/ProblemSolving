#include <iostream>
#include <vector>
#include <string>
using namespace std;

string equation;

void Input() {
    cin >> equation;
}

int Solution(string eq) {
    int n;
    long long sum;
    bool isMinus;
    string num;
    vector<int> result;

    sum = 0;
    isMinus = false;
    for (int i = 0; i <= eq.size(); i++) {
        if (('0' <= eq[i]) && (eq[i] <= '9')) {
            num += eq[i];
        }
        else {
            n = (isMinus == true) ? (stoi(num) * -1) : stoi(num);    // 접근한 값이 -이면, isMinus의 값에 따라 결과 벡터에 넣을 값을 변화시켜 준다.
            if (eq[i] == '-') {
                isMinus = true;       
            }
            result.push_back(n);
            num.erase();
        }
    }

    for (auto i : result) {
        sum += i;
    }

    return sum;
}

void Output() {
    cout << Solution(equation) << '\n';
}

void Solve() {
    Input();
    Output();
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    Solve();

    return 0;
}