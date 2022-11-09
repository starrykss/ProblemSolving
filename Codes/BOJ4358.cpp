#include <iostream>
#include <map>
using namespace std;

int cnt;
string treeName;
map<string, double> m;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    while (getline(cin, treeName)) {
        m[treeName]++;
        cnt++;
    }
 
    cout << fixed;    // 소수점 고정
    cout.precision(4);    // 소수점 4째 자리까지 출력

    for (auto i : m) {
        cout << i.first << " " << (i.second / cnt) * 100 << '\n';
    }

    return 0;
}