#include <iostream>
using namespace std;

int N, strSize, cnt[50];
string file, tmp;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    cin >> file;
    strSize = file.size();

    for (int i = 1; i < N; i++) {
        cin >> tmp;
        for (int i = 0; i < strSize; i++) {
            if (file[i] == tmp[i]) {
                cnt[i]++;
            }
        }
    }

    for (int i = 0; i < strSize; i++) {
        if (cnt[i] == N - 1) {
            cout << file[i];
        }
        else {
            cout << "?";
        }
    }

    return 0;
}