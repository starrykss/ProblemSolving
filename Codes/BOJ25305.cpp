#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, k, x;
vector<int> nums;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> k;

    for (int i = 0; i < N; i++) {
        cin >> x;

        nums.push_back(x);
        sort(nums.begin(), nums.end());    // 오름차순 정렬
    }

    for (int i = 0; i < N; i++) {
        if (i == N - k) {
            cout << nums[i] << '\n';
        }
    }
    
    return 0;
}