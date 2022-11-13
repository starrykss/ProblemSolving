#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int N, num;
vector<int> nums, factors;

int gcd(int x, int y) {
    if (x == 0) return y;
    else return gcd(y % x, x);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> num;
        nums.push_back(num);
    }

    sort(nums.begin(), nums.end());    // 오름차순 정렬

    int gcdVal = nums[1] - nums[0];
    for (int i = 2; i < N; i++) {
        gcdVal = gcd(gcdVal, nums[i] - nums[i - 1]);
    }

    for (int i = 2; i <= sqrt(gcdVal); i++) {
        if (gcdVal % i == 0) {
            factors.push_back(i);
            factors.push_back(gcdVal / i);
        }
    }

    factors.push_back(gcdVal);
    sort(factors.begin(), factors.end());
    factors.erase(unique(factors.begin(), factors.end()), factors.end());    // 중복된 약수 제거

    for (int i = 0; i < factors.size(); i++) {
        cout << factors[i] << " ";
    }

    return 0;
}