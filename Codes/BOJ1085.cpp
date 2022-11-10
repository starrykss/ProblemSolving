#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int x, y, w, h;
vector<int> nums;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> x >> y >> w >> h;

    nums.push_back(abs(y - h));
    nums.push_back(abs(w - x));
    nums.push_back(abs(0 - x));
    nums.push_back(abs(0 - y));

    sort(nums.begin(), nums.end());    // 오름차순 정렬

    cout << nums[0] << '\n';

    return 0;
}