#include <iostream>
#include <string>
#include <cstring>
using namespace std;

#define N 26

int main() {
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    bool isChecked;
    string S;
    int length, ary[N];
    memset(ary, -1, sizeof(ary));

    getline(cin, S);

    length = S.length();

    // 97 ~ 122 = a ~ z
    
    isChecked = false;
    for (int i = 0; i < N; i++) {
        isChecked = false;
        for (int j = 0; j < length; j++) {
            if (!isChecked) {
                if (S[j] == i + 97) {
                    ary[i] = j;
                    isChecked = true;
                }
            }
            else {
                continue;
            }
        }
    }

    for (int i = 0; i < N; i++) {
        cout << ary[i] << " "; 
    }

    return 0;
}