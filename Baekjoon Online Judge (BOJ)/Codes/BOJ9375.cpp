#include <iostream>
#include <map>
using namespace std;

int T, n;
string itemName, itemType;
map<string, int> items;

int findAnswer(map<string, int> m) {
    int result;

    result = 1;
    for (auto i : m) {
        result *= (i.second + 1);    // (의상 수 + 1)씩 곱하기
    }

    result -= 1;    // 1을 빼준다.

    return result;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> T;

    for (int i = 0; i < T; i++) {
        cin >> n;
        for (int j = 0; j < n; j++) {
            cin >> itemName >> itemType;
            items[itemType]++;
        }
        cout << findAnswer(items) << '\n';
        items.clear();
    }

    return 0;
}