#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

string N;
vector<int> nums;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    for (int i = 0; i < N.size(); i++) {
        nums.push_back(N[i] - '0');
    }

    sort(nums.begin(), nums.end(), greater<>());    // 내림차순 정렬

    for (int i : nums) {
        cout << i;
    }

    return 0;
}