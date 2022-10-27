#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, num;
vector<int> nums;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> num;
        nums.push_back(num);
        sort(nums.begin(), nums.end());
    }

    for (int i : nums) {
        cout << i << '\n';
    }

    return 0;
}