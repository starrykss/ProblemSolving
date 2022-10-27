#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int num, sum, cnt;
vector<int> nums;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    sum = 0;
    for (int i = 0; i < 5; i++) {
        cin >> num;

        sum += num;
        nums.push_back(num);
        sort(nums.begin(), nums.end());
    }

    cout << sum / 5 << '\n' << nums[2] << '\n';
    
    return 0;
}