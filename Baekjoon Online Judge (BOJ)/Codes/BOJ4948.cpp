#include <iostream>
#include <cmath>
using namespace std;

int n, k, *nums, cnt;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    while (1) {
        cin >> n;

        if (n == 0) {
            break;
        }

        k = sqrt(2 * n);

        nums = new int[(2 * n) + 1];
        nums[0] = nums[1] = 0;
        for (int i = 2; i <= (2 * n); i++) {
            nums[i] = i;
        }

        // 에라토스테네스의 체 알고리즘
        for (int i = 2; i <= k; i++) {
            if (nums[i] == 0) continue;
            for (int j = i * 2; j <= (2 * n); j += i) {
                if (nums[j] == 0) continue;
                else nums[j] = 0;
            }
        }

        cnt = 0;
        for (int i = n + 1; i <= (n * 2); i++) {    // n보다 크고 2n보다 작거나 같은
            if (nums[i] != 0) {
                cnt++;
            }
        }

        cout << cnt << '\n';

        delete[] nums;
    }

    return 0;
}