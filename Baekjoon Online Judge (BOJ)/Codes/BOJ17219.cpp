#include <iostream>
#include <map>
using namespace std;

int N, M;
string url, pwd;
map<string, string> list;

void Input() {
    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        cin >> url >> pwd;
        list[url] = pwd;
    }
}

void Output() {
    for (int i = 0; i < M; i++) {
        cin >> url;
        cout << list[url] << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    Input();
    Output();

    return 0;
}