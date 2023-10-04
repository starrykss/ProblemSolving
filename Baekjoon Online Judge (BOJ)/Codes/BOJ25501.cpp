#include <iostream>
#include <cstring>
using namespace std;

int T, cnt;
char word[1001];

int recursion(const char *s, int l, int r) {
    cnt++;
    if (l >= r) return 1;
    else if (s[l] != s[r]) return 0;
    else return recursion(s, l + 1, r - 1);
}

int isPalindrome(const char *s) {
    return recursion(s, 0, strlen(s) - 1);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> T;

    for (int i = 0; i < T; i++) {
        cin >> word;
        cout << isPalindrome(word);     // 한 줄에 작성할 경우 cnt 업데이트가 제대로 안 됨.
        cout <<  " " << cnt << '\n';    // 따라서 두 줄로 나눠서 출력
        cnt = 0;
    }

    return 0;
}