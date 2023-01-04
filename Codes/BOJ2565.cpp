#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, A, B;
int dp[101];
vector<pair<int, int>> lines;

void Input() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> A >> B;
        lines.push_back({ A, B });  
    }
}

int Solution(int n) {
    sort(lines.begin(), lines.end());   // A 전봇대의 전깃줄의 위치값을 기준으로 오름차순 정렬
    
    fill_n(dp, 101, 1);

    int result = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (lines[j].second < lines[i].second) {
                dp[i] = max(dp[j] + 1, dp[i]);
            }
        }
        result = max(result, dp[i]);
    }

    result = n - result;

    return result;
}

void Output() {
    cout << Solution(N) << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    Input();
    Output();

    return 0;
}