#include <iostream>
#include <cmath>
using namespace std;

int M, N, k, *nums;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> M >> N;

    nums = new int[N + 1]; 

    // 배열 내부 채워넣기 (2부터 ~ )
    nums[0] = nums[1] = 0;
    for (int i = 2; i <= N; i++) {
        nums[i] = i;
    }

    k = sqrt(N);  // 제곱근을 이용하여 소수 판별하기

    // 에라토스테네스의 체 알고리즘을 이용하여 문제 해결하기
    for (int i = 2; i <= k; i++) {
        if (nums[i] == 0) {
            continue;    // 이미 소수가 아닌 것으로 판정됐을 경우 넘어가기
        }
        for (int j = i * 2; j <= N; j += i) {
            if (nums[j] == 0) {
                continue;    // 이미 소수가 아닌 것으로 판정됐을 경우 넘어가기
            }
            else {
                nums[j] = 0;
            }
        }
    }

    // 결과 출력하기
    for (int i = M; i <= N; i++) {
        if (nums[i] != 0) {
            cout << i << '\n';
        }
    }

    delete[] nums;

    return 0;
}

/* 
 * 시간 초과
 * 
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int M, N, prime;
vector<int> primeNums;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> M >> N;

    for (int i = M; i <= N; i++) {
        prime = 0;
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                prime++;
            }
        }
        if (prime == 2) {
            primeNums.push_back(i);
        }
    }

    sort(primeNums.begin(), primeNums.end());

    for (int i : primeNums) {
        cout << i << '\n';
    }

    return 0;
}
*/