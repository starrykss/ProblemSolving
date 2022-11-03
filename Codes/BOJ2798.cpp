#include <iostream>
#include <vector>
using namespace std;

int N, M, num, sum, maxNum;
vector<int> nums;

int BruteForce(vector<int> v, int M) {
  for (int i = 0; i < v.size(); i++) {
        for (int j = i + 1; j < v.size(); j++) {
            for (int k = j + 1; k < v.size(); k++) {
                sum = v[i] + v[j] + v[k];
                
                if (sum <= M && sum > maxNum) {    // 합이 M을 넘지 않으면서, 합이 M에 최대한 가까울 때
                    maxNum = sum;
                }
            }
        }
    }
    return maxNum;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        cin >> num;
        nums.push_back(num);
    }

    sum = BruteForce(nums, M);

    cout << sum << '\n';

    return 0;
}